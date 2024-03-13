//
// The OpenIsolation Project
//

#include "cathode_memory_pool.h"

template<class T>
CATHODE::MemoryPool* CATHODE::MemoryAllocation<T>::pool() {
  return this->m_tracker.pool;
}

template<class T>
void* CATHODE::MemoryAllocation<T>::data() {
  return this->data;
}

template<class T>
void CATHODE::MemoryAllocation<T>::move(void* source) {
  this->data = source;
}

template<class T>
std::uint32_t CATHODE::MemoryAllocation<T>::item_size() {
  return this->m_tracker.item_size;
}

