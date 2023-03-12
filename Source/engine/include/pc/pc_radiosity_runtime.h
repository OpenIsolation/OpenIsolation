/**
 * The OpenIsolation Project
 */

#include <radiosity_runtime.h>

class RADIOSITY_RUNTIME_PC : RADIOSITY_RUNTIME {
  void create();
  void destroy();
  void render_direct();
  void render_indirect();
  void render_scatter();
  void render_object_probes(const RadiosityProbeAllocator::ProbeAllocatorIterator& iterator);
};
