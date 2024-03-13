//
// The OpenIsolation Project
//

#pragma once

#include <cstddef>

namespace CA {
    typedef struct SHA1Context {
        unsigned Message_Digest[5]; /* Message Digest (output)          */

        unsigned Length_Low;        /* Message length in bits           */
        unsigned Length_High;       /* Message length in bits           */

        unsigned char Message_Block[64]; /* 512-bit message blocks      */
        int Message_Block_Index;    /* Index into message block array   */

        bool Computed;               /* Is the digest computed?          */
        bool Corrupted;              /* Is the message digest corrupted?  */
    } SHA1Context;

    void SHA1_Hash_Portable(const char* data, size_t len, char* hashArray);
    void SHA1ProcessMessageBlock(CA::SHA1Context*);
}
