//
// The OpenIsolation Project
//

#pragma once

struct DICTIONARY_ENTRY {

};

class DICTIONARY {
public:
  ///  <summary>
  ///    Initialises the DICTIONARY system with the specified <paramref name="dictionaryEntry"> table.
  ///  </summary>
  static void init(DICTIONARY_ENTRY* dictionaryEntry);
  ///  <summary>
  ///    Looks up a DICTIONARY_ENTRY object by the specified <paramref name="id"> in the DICTIONARY.
  ///  </summary>
  ///  <returns>
  ///    Pointer to the relevant DICTIONARY_ENTRY object in the DICTIONARY.
  ///  </returns>
  static DICTIONARY_ENTRY* lookup_de(const char* id);
  ///  <summary>
  ///    Looks up a standard string by the specified <paramref name="id"> in the DICTIONARY.
  ///  </summary>
  ///  <returns>
  ///    Pointer to a standard string containing the relevant dictionary entry.
  ///  </returns>
  static const char* lookup(const char* id);
};
