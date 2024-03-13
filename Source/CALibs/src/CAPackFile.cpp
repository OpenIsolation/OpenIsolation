//
// The OpenIsolation Project
//

#include "CAPackFile.h"
#include "CASHA.h"

#include <cstddef>
#include <cstring>

namespace CA {
    namespace Cuckoo {
        template <class T>
        T* Hasher<T>::hash(const T &key, unsigned long value) {
            return nullptr;
        }

        template <class T>
        bool Equals<T>::equals(const T &key1, const T &key2) {
            return key1 == key2;
        }

        template<class T, class U, class V>
        Map<T, U, V>::Map(unsigned long) {
            throw;
        }

        template <class T, class U, class V>
        bool Map<T, U, V>::set(const T& key1, const U& key2) {
            return false;
        }

        template<class T, class U, class V>
        Map<T, U, V>::Page::Page(unsigned long, unsigned long) {
            throw;
        }
    }

    StringGuid::StringGuid(const char* string) {
        char hashResult[16] = {0};
        size_t stringLength = strlen(string);

        SHA1_Hash_Portable(string, stringLength, hashResult);
        this->hashArray[0] = reinterpret_cast<unsigned long>(hashResult);
        this->hashArray[1] = reinterpret_cast<unsigned long>(hashResult + sizeof(long));
    }

    void PackFileTOC::setup(const char *, unsigned short) {
        throw;
    }
}
