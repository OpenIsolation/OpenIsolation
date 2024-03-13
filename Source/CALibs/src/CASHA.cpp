//
// The OpenIsolation Project
//

#include "CASHA.h"

#include <cstdio>
#include <cstdint>
#include <cstdlib>

/*
 *  Define the circular shift macro
 */
#define SHA1CircularShift(bits,word) \
                ((((word) << (bits)) & 0xFFFFFFFF) | \
                ((word) >> (32-(bits))))

void CA::SHA1_Hash_Portable(const char* data, size_t len, char* hashArray) {
    SHA1Context context;
    context.Length_Low             = 0;
    context.Length_High            = 0;
    context.Message_Block_Index    = 0;

    context.Message_Digest[0]      = 0x67452301;
    context.Message_Digest[1]      = 0xEFCDAB89;
    context.Message_Digest[2]      = 0x98BADCFE;
    context.Message_Digest[3]      = 0x10325476;
    context.Message_Digest[4]      = 0xC3D2E1F0;

    context.Computed   = false;
    context.Corrupted  = false;

    //SHA1Input(&context, reinterpret_cast<const unsigned char*>(data), len);
    if (!len) return;

    if (context.Computed || context.Corrupted)
    {
        context.Corrupted = true;
        return;
    }

    const auto* messageArray = reinterpret_cast<const unsigned char*>(data);

    while (len-- && !context.Corrupted)
    {
        context.Message_Block[context.Message_Block_Index++] = (*data & 0xFF);

        context.Length_Low += 8;
        /* Force it to 32 bits */
        context.Length_Low &= 0xFFFFFFFF;
        if (context.Length_Low == 0)
        {
            context.Length_High++;
            /* Force it to 32 bits */
            context.Length_High &= 0xFFFFFFFF;
            if (context.Length_High == 0)
            {
                /* Message is too long */
                context.Corrupted = true;
            }
        }

        if (context.Message_Block_Index == 64)
        {
            SHA1ProcessMessageBlock(&context);
        }

        messageArray++;
    }

    bool ok = false/*SHA1Result(&context)*/;
    if (!ok) {
        fprintf(stderr, "Unexpected error in SHA1_Hash_Portable code\n");
        exit(1);
    }
    for (int i = 0; i < 5; i++) {
        uint32_t value = context.Message_Digest[i];
        hashArray[i*4 + 0] = (value >> 24) & 0xff;
        hashArray[i*4 + 1] = (value >> 16) & 0xff;
        hashArray[i*4 + 2] = (value >> 8) & 0xff;
        hashArray[i*4 + 3] = value & 0xff;
    }
}

void CA::SHA1ProcessMessageBlock(CA::SHA1Context* context) {
    const unsigned K[] =            // Constants defined in SHA-1
    {
    0x5A827999,
    0x6ED9EBA1,
    0x8F1BBCDC,
    0xCA62C1D6
    };
    int         t;                  // Loop counter
    unsigned    temp;               // Temporary word value
    unsigned    W[80];            // Word sequence
    unsigned    A, B, C, D, E;    // Word buffers

    // Initialize the first 16 words in the array W
    for(t = 0; t < 16; t++) {
        W[t] = ((unsigned) context->Message_Block[t * 4]) << 24;
        W[t] |= ((unsigned) context->Message_Block[t * 4 + 1]) << 16;
        W[t] |= ((unsigned) context->Message_Block[t * 4 + 2]) << 8;
        W[t] |= ((unsigned) context->Message_Block[t * 4 + 3]);
    }

    for(t = 16; t < 80; t++) {
        W[t] = SHA1CircularShift(1,W[t-3] ^ W[t-8] ^ W[t-14] ^ W[t-16]);
    }

    A = context->Message_Digest[0];
    B = context->Message_Digest[1];
    C = context->Message_Digest[2];
    D = context->Message_Digest[3];
    E = context->Message_Digest[4];

    for(t = 0; t < 20; t++) {
        temp =  SHA1CircularShift(5,A) +
                ((B & C) | ((~B) & D)) + E + W[t] + K[0];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }

    for(t = 20; t < 40; t++) {
        temp = SHA1CircularShift(5,A) + (B ^ C ^ D) + E + W[t] + K[1];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }

    for(t = 40; t < 60; t++) {
        temp = SHA1CircularShift(5,A) +
               ((B & C) | (B & D) | (C & D)) + E + W[t] + K[2];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }

    for(t = 60; t < 80; t++) {
        temp = SHA1CircularShift(5,A) + (B ^ C ^ D) + E + W[t] + K[3];
        temp &= 0xFFFFFFFF;
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }

    context->Message_Digest[0] = (context->Message_Digest[0] + A) & 0xFFFFFFFF;
    context->Message_Digest[1] = (context->Message_Digest[1] + B) & 0xFFFFFFFF;
    context->Message_Digest[2] = (context->Message_Digest[2] + C) & 0xFFFFFFFF;
    context->Message_Digest[3] = (context->Message_Digest[3] + D) & 0xFFFFFFFF;
    context->Message_Digest[4] = (context->Message_Digest[4] + E) & 0xFFFFFFFF;

    context->Message_Block_Index = 0;
}
