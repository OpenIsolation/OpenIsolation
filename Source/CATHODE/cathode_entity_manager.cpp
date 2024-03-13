//
// The OpenIsolation Project
//

#include "cathode_entity_manager.h"

CATHODE::EntityManagerAccess::EntityManagerAccess()
{
#ifdef OPENISOLATION_WINDOWS
  EnterCriticalSection(&mutex);
#endif
}

CATHODE::EntityManagerAccess::~EntityManagerAccess()
{
#ifdef OPENISOLATION_WINDOWS
  LeaveCriticalSection(&mutex);
#endif
}

void CATHODE::trigger_timing_less_than(const MemoryRefPtr<TriggerInfo>& info1, const MemoryRefPtr<TriggerInfo>& info2)
{
  throw;
}
