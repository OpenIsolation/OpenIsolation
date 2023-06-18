/**
 * The OpenIsolation Project
 */

#include "cathode_entity_manager.h"

CATHODE::EntityManagerAccess::EntityManagerAccess()
{
  EnterCriticalSection(&mutex);
}

CATHODE::EntityManagerAccess::~EntityManagerAccess()
{
  LeaveCriticalSection(&mutex);
}

void CATHODE::trigger_timing_less_than(const MemoryRefPtr<TriggerInfo>& info1, const MemoryRefPtr<TriggerInfo>& info2)
{
  throw;
}
