//
// The OpenIsolation Project
//

#pragma once
#include <cstdint>

namespace CATHODE {
  class LongGuid {
  public:
    LongGuid(const char* text);
    const char* as_string() const;
  };

  /// <summary>
  ///   Short version of a LongGuid, calculated by taking the textual name of an entity or node, and
  ///   performing a LongGuid SHA1 hash on it (produces an 8 byte hash), then only taking the first 4 bytes, 
  ///   and swapping the 4 bytes, then SHA1 hashing that again.
  /// </summary>
  class ShortGuid {
  public:
    ShortGuid(const char* text);
    const char* as_string() const;
    ShortGuid* combine(const ShortGuid& guid);
    // ShortGuid is treated as a uint in some of the engine-side code.
    std::uint32_t guid;
  };

  /*static ShortGuid invalid_guid;
  static ShortGuid invalid_entity_guid;
  static ShortGuid invalid_class_guid;
  static ShortGuid invalid_element_guid;
  static ShortGuid invalid_resource_guid;*/
}
