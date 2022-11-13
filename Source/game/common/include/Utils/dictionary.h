/**
 * The OpenIsolation Project
 */

#pragma once

struct DICTIONARY_ENTRY {

};

class DICTIONARY {
public:
    static void init(DICTIONARY_ENTRY* dictionaryEntry);
    static DICTIONARY_ENTRY* lookup_de(char const*);
    static DICTIONARY_ENTRY* lookup(char const*);
};
