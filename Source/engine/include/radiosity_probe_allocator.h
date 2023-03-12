/**
 * The OpenIsolation Project
 */

#include <cstdint>

namespace RadiosityProbeAllocator {
  // Appears to store a bit-shifted, masked and XORed value inside the first parameter.
  class ProbeAllocationIterator {
  public:
    /// <summary>
    /// Finds the next radiosity probe to be allocated.
    /// </summary>
    /// <param name="outNextProbe">Pointer to where the next probe's ID will be saved.</param>
    /// <returns>Whether or not the request succeeded or failed.</returns>
    bool get_next(std::uint32_t* outNextProbe);
  };

  class ProbeAllocationMask {
  public:
    bool is_allocated(std::uint32_t) const;
    bool allocate_next(std::uint32_t*);
    void mark_allocated(std::uint32_t);
    void clear();
    ProbeAllocationMask();
  };
};
