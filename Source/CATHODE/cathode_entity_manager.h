/**
 * The OpenIsolation Project
 */

#pragma once
#include "Memory/cathode_memory_pool.h"

namespace CATHODE {
  class EntityManagerAccess {
  };

  class EntityTrigger {

  };

  class TriggerInfo {
  public:
    TriggerInfo();
    ~TriggerInfo();


  };
  static_assert(sizeof(TriggerInfo) == 40, "Invalid size!");

  class EntityManager {

  };

  class EntityCallbackForwarding {

  };

  class TriggerProcessingContext {

  };

  /// <summary>
  /// Case-insensitive strstr.
  /// Returns all of haystack starting from and including first occurrence of needle to the end.
  /// </summary>
  /// <param name="haystack">The string which is to be searched.</param>
  /// <param name="needle">The string which contains the search term.</param>
  void stristr(const char* haystack, const char* needle);

  void breakpoint_less_than(const EntityBreakpoint& point1, const EntityBreakpoint& point2);
  void trigger_timing_less_than(const MemoryRefPtr<TriggerInfo>& info1, const MemoryRefPtr<TriggerInfo>& info2);
}
