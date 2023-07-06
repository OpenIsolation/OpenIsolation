/**
 * The OpenIsolation Project
 */

#pragma once
#include <cstdint>

namespace CATHODE {
  class MemoryPool {
  public:
    MemoryPool(const char* poolName);
    ~MemoryPool();
    void pr_allocate(unsigned int size);
  private:
    void** vtable0;
    long* vtable1;
    const char* name;
  };

  class MemoryTracker {
  public:
    void set_owner(MemoryPool* newOwner);
    static MemoryTracker* m_base_tracker;
  private:
    const char* name;
    // These unknowns are never referenced in the iOS port.
    std::uint64_t unk0;
    std::uint64_t unk1;
    std::uint64_t size; // referenced by MemoryAllocation::item_size;
    std::uint64_t unk2;
    MemoryPool* owner; // referenced by MemoryAllocation::pool;
    MemoryTracker* tracker;
  };
  static_assert((sizeof(MemoryTracker) - sizeof(void*)) == 48, "Invalid size for MemoryTracker!");

  template<typename T>
  class MemoryAllocation {
  public:

  private:
    MemoryTracker* m_tracker;
  };

  template<typename T>
  class MemoryRefPtr {
  public:
    T& reference;
  };

  template<typename T>
  class MemoryPtr {
  public:
    ~MemoryPtr();
    T& operator=(const T& newValue);
    T* ptr;
  };

  template<typename T>
  class ArrayPtr {
  public:

  };
}
