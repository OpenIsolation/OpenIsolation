///
/// The OpenIsolation Project
///

#pragma once

#include "Memory/cathode_memory_allocator.h"
#include <cstdint>

namespace CATHODE {
  class MemoryManager {
  public:
    MemoryManager();
    MemoryManager* create_instance();
    void report_mem_used(std::uint64_t& u1, std::uint64_t& u2, std::uint64_t& u3, std::uint64_t& u4, std::uint64_t& u5, std::uint64_t& u6);
    void validate();
  private:
    void** vtable;
    BlockAllocator* allocator;
    const char* name;
  };
}
