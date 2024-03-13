//
// The OpenIsolation Project
//

#pragma once

#include "CTMemoryEBKHeaps.h"

namespace CA {
  namespace CTMemory {
    class Heap {
    public:
      enum class ALLOC_FAIL_BEHAVIOUR {
        UNKNOWN,
      };

      enum class MEMORY_VALIDATION_BEHAVIOUR {
        UNKNOWN,
      };

      void defragment_and_compact_heap();
      ExternalHeap* asExternalHeap() const;
      ExternalHeap* asExternalHeap();
      EmbeddedHeap* asEmbeddedHeap() const;
      EmbeddedHeap* asEmbeddedHeap();
      ~Heap();
    };
  }
}

