//
// The OpenIsolation Project
//

#pragma once

#include "cathode_memory_pool.h"
#include <cstdint>

namespace CATHODE {
  // Forward-declarations.
  struct BlockAllocation;
  class BinAllocator;

  class BlockAllocator {
  public:
    BlockAllocator(MemoryPool& pool);
    ~BlockAllocator();
    void allocate(std::uint64_t size);
    bool can_allocate(std::uint64_t size);
    void deallocate(MemoryAllocationBase& memAllocation);
    bool reallocate(MemoryAllocationBase& memAllocation, std::uint64_t size);
    std::uint64_t size(MemoryAllocationBase& memAllocation);
    std::uint64_t allocation_size(MemoryAllocationBase& memAllocation);
    std::uint64_t memory_used_limit();
    std::uint32_t allocations_used();
  private:
    void pr_allocate(std::uint64_t size);
    void* pr_reallocate(void* dataPtr, std::uint64_t size);
    MemoryPool* pool;
    std::uint64_t unk0;
    std::uint64_t unk1;
    std::uint64_t unk2;
    std::uint64_t unk3;
    std::uint64_t* unk4;
    BinAllocator* binAllocator;
    std::uint32_t unk5;
    std::uint32_t unk6;
    std::uint64_t unk7;
    std::uint64_t unk8;
    std::uint32_t unk9;
    std::uint64_t memoryUsed;
    std::uint64_t unk10;
    std::uint64_t unk11;
    std::uint64_t memoryUsedLimit;
    std::uint64_t allocatorMultiplier;
  };

  /// <summary>
  /// Each memory bin is associated with a memory block. Possibly with min and max memory size allocations.
  /// </summary>
  class BinAllocator {
  public:
    BinAllocator(BlockAllocator& allocator, std::uint32_t unkInt1, std::uint32_t unkInt2);
  private:
  };

  /// <summary>
  /// Each memory block allocation comes from a "bin" of memory.
  /// </summary>
  class BlockAllocationBin {
  public:
    void allocate_from_bin();
    std::uint32_t merge_block_with_next(BlockAllocation* allocation);
  };

  /// <summary>
  /// Describes a memory block allocation, and the associated memory bin allocation.
  /// </summary>
  struct BlockAllocation {
    BlockAllocationBin* allocationBin;
    void* unk;
    long* unk1;
    std::uint64_t unk2;
  };

  BlockAllocator* create_block_allocator(MemoryPool& pool);
}

