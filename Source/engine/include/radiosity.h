/**
 * The OpenIsolation Project
 */

#include <pc_radiosity_runtime.h>
#include <PostProcessing.h>

class RADIOSITY : public RADIOSITY_RUNTIME_PC {
public:
  void create(const char*, const char*);
  void pr_load_instance_map(const char*, CA::DynamicArray<RADIOSITY::InstanceMapItem, CA::DefaultAllocator>*);
  void pr_load_runtime_data(const char*, const CA::DynamicArray<RADIOSITY::InstanceMapItem, CA::DefaultAllocator>&);
  void pr_load_collision_map(const char*);
  void prepare_common();
  void prepare_direct_command_buffer();
  void prepare_indirect_command_buffer();
  void render_surface_probes();
  void flush_streaming_gpu_resources();
  bool is_data_loaded() const;
  void render_object_probes();
  void destroy();
  RADIOSITY();
  ~RADIOSITY();
  void process_streaming();
  void pr_choose_slices_for_streaming(std::uint16_t*);
  void pr_allocate_slices_to_slots(std::uint32_t, std::uint16_t*);
  void pr_load_slice_data(std::uint32_t, std::uint32_t, RadiosityUtils::NonblockingReader& reader);
  void load_slice(std::uint32_t, std::uint32_t);
  void render_to_screen(bool, bool);
  void set_radiosity_samplers(ePredefinedSamplerState state);
  void unset_radiosity_samplers();
private:
  // void std::__1::__partial_sort<std::__1::greater<RADIOSITY_RUNTIME::SliceImportance>&, RADIOSITY_RUNTIME::SliceImportance*>;
  //bool pr_load_runtime_data::reported = false;
};

namespace RadiosityLightmapBuffer {
  void set_texture(RenderContext*, std::uint32_t, ePredefinedSamplerState state);
};
