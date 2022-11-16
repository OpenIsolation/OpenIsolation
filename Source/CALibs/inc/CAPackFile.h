/**
 * The OpenIsolation Project
 */

#pragma once

namespace CA {
    struct PackFileEntry {

    };

    /// Does this Guid class belong here?
    class StringGuid {
    public:
        explicit StringGuid(char const* string);
        /// Not sure if these are actually two separate 8 byte arrays or one 16 byte array.
        unsigned long hashArray {};
        unsigned long alternativeHashArray {};
    };

    /// Cuckoo hash table implementation.
    namespace Cuckoo {
        template <class T>
        class Hasher {
            T* hash(const T& key, unsigned long value);
        };

        template <class T>
        class Equals {
            bool equals(const T& key1, const T& key2);
        };

        template <class T, class U, class V>
        class Map {
            explicit Map(unsigned long);
            bool set(const T& key1, const U& key2);

            class Page {
                Page(unsigned long, unsigned long);
            };
        };
    };

    class PackFileTOC {
        static void setup(char const*, unsigned short);
    };
}
