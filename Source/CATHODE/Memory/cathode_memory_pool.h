//
// The OpenIsolation Project
//

#pragma once
#include <cstdint>

namespace CATHODE {
  /// <summary>
  ///   Represents a pool of memory.
  /// </summary>
  /// <remarks>
  ///   Used in CATHODE to represent a block of allocated memory for each node in the scripting system.
  /// </remarks>
  class MemoryPool {
  public:
    MemoryPool(const char* name);
    ~MemoryPool();
  private:
    void pr_allocate(std::uint32_t size);
    void** vtable0;
    long* vtable1;
    const char* name;
  };

  /// <summary>
  ///   Tracker for the name, owner (parent MemoryPool), parent tracker and size of an item in memory.
  /// </summary>
  class MemoryTracker {
  public:
    inline MemoryTracker();
    void set_owner(MemoryPool* owner);
    /// Global (system) memory tracker.
    static MemoryTracker* m_base_tracker;

    const char* name;
    // These unknowns are never referenced in the iOS port.
    std::uint64_t unk0;
    std::uint64_t unk1;
    std::uint64_t item_size; /// referenced by MemoryAllocation::item_size;
    std::uint64_t unk2;
    MemoryPool* pool; /// referenced by MemoryAllocation::pool;
    MemoryTracker* tracker;
  };
  static_assert((sizeof(MemoryTracker) - sizeof(void*)) == 48);

  /// <summary>
  ///   Main base class for all CATHODE memory allocation operations.
  /// </summary>
  /// <remarks>
  ///   Inheritors: CATHODE::DEBUG_CAMERA, CATHODE::MemoryAllocation<CATHODE::MemoryAllocationBlock>.
  /// </remarks>
  class MemoryAllocationBase {
  public:
    /// <summary>
    ///   Fetches the size of the memory space reserved for the item.
    /// </summary>
    /// <returns>
    ///   Size of the memory space reserved for the item.
    /// </returns>
    std::uint32_t size() const;
    /// <summary>
    ///   Allocates the memory required to hold the item.
    /// </summary>
    void alloc() const;
    /// <summary>
    ///   Release the memory reserved for the item.
    /// </summary>
    void release();
    /// <summary>
    ///   Attempt to resize the memory pool to the size specified by <paramref name="size">.
    /// </summary>
    /// <returns>
    ///   true - request was successful.
    ///   false - request failed (insufficient memory available).
    /// </returns>
    bool resize(std::uint32_t size);

    // Pure virtual methods.
    /// <summary>
    ///   Fetches the parent MemoryPool for the memory allocation block.
    /// </summary>
    /// <returns>
    ///   Pointer to the parent MemoryPool object.
    /// </returns>
    virtual MemoryPool* pool() = 0;
    /// <summary>
    ///   Permits access to the item inside of the memory allocation block.
    /// </summary>
    /// <returns>
    ///   Pointer to the item inside the memory allocation block.
    /// </returns>
    virtual void* data() = 0;
    /// <summary>
    ///   Permits access to move the item, pointed to by <paramref name="source">, into the memory allocation block.
    /// </summary>
    /// <param name="source">
    ///   Pointer to the item that is to be moved into the memory allocation block.
    /// </param>
    virtual void move(void* source) = 0;
    /// <summary>
    ///   Fetches the size of the item currently stored in the memory allocation block.
    /// </summary>
    /// <returns>
    ///   Total size of the item currently stored in the memory allocation block.
    /// </returns>
    virtual std::uint32_t item_size() = 0;
  };

  template<class T>
  class MemoryAllocation : public MemoryAllocationBase {
  public:
    ~MemoryAllocation();
    MemoryPool* pool() override;
    void* data() override;
    void move(void* source) override;
    std::uint32_t item_size() override;

    MemoryTracker m_tracker;
  private:
    void* item;
  };

  /// <summary>
  ///   Templated class for carrying a reference to a CATHODE (or standard C/C++) object in memory.
  /// </summary>
  /// <remarks>
  ///   Usually used for storing the outputs from some CATHODE functions (e.g. CATHODE::TriggerInfo()).
  /// </remarks>
  template<typename T>
  class MemoryRefPtr {
  public:
    T& reference;
  };

  /// <summary>
  ///   Templated class for carrying a pointer to a CATHODE (or standard C/C++) object in memory.
  /// </summary>
  template<typename T>
  class MemoryPtr {
  public:
    ~MemoryPtr();
    T& operator=(const T& value);
    inline operator T() const;
  private:
    T* address;
  };

  /// <summary>
  ///   Templated class for carrying a pointer to an Array of CATHODE (or standard C/C++) objects in memory.
  /// </summary>
  template<typename T>
  class ArrayPtr {
  public:

  };
}
