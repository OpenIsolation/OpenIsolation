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

  class ShortGuid {
  public:
    ShortGuid(const char* text);
    const char* as_string() const;
    ShortGuid* combine(const ShortGuid& guid);
    // I think ShortGuid just contains a single "guid" uint, I'm treating it as a regular uint as this is what sha1_portable.cc does.
    std::uint32_t guid;
  };

  /*static ShortGuid invalid_guid;
  static ShortGuid invalid_entity_guid;
  static ShortGuid invalid_class_guid;
  static ShortGuid invalid_element_guid;
  static ShortGuid invalid_resource_guid;*/
}
