/**
 * The OpenIsolation Project
 */

#pragma once
#include "Memory/cathode_memory_pool.h"
#include "cathode_guid.h"
#include "cathode_entity.h"
#include "cathode_entity_manager.h"

namespace CATHODE {
  struct EntityProxy {
    std::int32_t unk1;
    EntityInitialiserData initialiserData;
  };
  static_assert(sizeof(EntityProxy) == 12, "Invalid size for EntityProxy!"); 
  
  class EntityInterface {
  public:
    EntityInterface();
    void update_cache(const MemoryPtr<Entity>& entity) const;
    void flush_cache(const MemoryPtr<Entity>& entity) const;
    void debug_print_entity_details_to_buffer(const MemoryPtr<Entity>& entity, DEBUG_BUFFER& buffer) const;
    void auto_print_contents(const MemoryPtr<Entity>& entity, DEBUG_BUFFER& buffer) const;
    void debug_print_entities_with_state(const MemoryPtr<Entity>& entity, std::uint32_t unk0, bool unk1) const;
    void find_entry(const MemoryPtr<Entity>& entity, const ShortGuid& guid) const;
    void cache_variable(const ShortGuid& guid, const VariableInterface* variable) const;
    void cache_trigger(const ShortGuid& guid, const EntityTrigger& trigger) const;
    void cache_size() const;

  };

  class ProxyInstance {
    ProxyInstance(const MemoryPtr<Entity>& entity, const EntityProxy& proxy);
    void on_initialise(const MemoryPtr<Entity>& entity, const MemoryRefPtr<TriggerInfo>& triggerInfo);
  };
}

