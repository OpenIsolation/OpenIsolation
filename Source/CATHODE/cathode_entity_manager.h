//
// The OpenIsolation Project
//

#pragma once
#include "Memory/cathode_memory_pool.h"
//#include "cathode_entity_interface.h"
#include "cathode_guid.h"
#include "cathode_entity.h"

#ifdef OPENISOLATION_WINDOWS
#include <Windows.h>
#endif

/// <summary>
/// Case-insensitive strstr.
/// Returns all of haystack starting from and including first occurrence of needle to the end.
/// </summary>
/// <param name="haystack">The string which is to be searched.</param>
/// <param name="needle">The string which contains the search term.</param>
void stristr(const char* haystack, const char* needle);

namespace CATHODE {
  struct EntityProxy {
    std::int32_t unk1;
    EntityInitialiserData initialiserData;
  };
  static_assert(sizeof(EntityProxy) == 12); 

  /// <summary>
  /// Grants exclusive access to the EntityManager, by temporarily blocking access from other threads using a mutex.
  /// Upon destruction of an instance of this class, access is restored.
  /// </summary>
  class EntityManagerAccess {
  public:
    EntityManagerAccess();
    ~EntityManagerAccess();
  #ifdef OPENISOLATION_WINDOWS
    static CRITICAL_SECTION mutex;
  #endif
  };

  class EntityTrigger {
  public:
    EntityTrigger(const MemoryPtr<Entity>& entity, const ShortGuid& guid, double duration);
  private:
    ShortGuid guid;
    float unk0;
    Entity* entity;
  };
  // Pointers on 32-bit architectures are 4 bytes long, on 64-bit (and ARM) they are 8 bytes long.
  static_assert((sizeof(EntityTrigger) - sizeof(Entity*)) == 8, "Invalid size for EntityTrigger!");

  class TriggerInfo {
  public:
    TriggerInfo(const MemoryPtr<Entity>& entity, const ShortGuid& guid, const EntityTrigger& trigger, std::uint32_t unk1, double unk2, const MemoryRefPtr<TriggerInfo>& parent, const ArrayPtr<char>& name);
    ~TriggerInfo();
    void add_reference();
    void remove_reference();
    void first_trigger_entity() const;
  private:
    // Not sure if this structure is right, the data types don't entirely make sense, but the size lines up.
    void* memoryAllocationBase;
    double childCount;
    TriggerInfo* child;
    double duration;
    double state; // not sure if this is right.
  };
  static_assert(sizeof(TriggerInfo) == 40, "Invalid size!");

  class EntityManager {
  public:
    EntityManager();
    EntityManager* create_instance();
    void construct_proxy(MemoryPtr<Entity> entity, const EntityProxy& proxy);
    // CATHODE::MemoryPtr<CATHODE::ProxyInstance> CATHODE::MemoryPool::allocate_item<CATHODE::ProxyInstance, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityProxy>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityProxy const&)
    void spawn_template_entity(MemoryPtr<Entity> entity, bool);
    void despawn_template_entity(MemoryPtr<Entity> entity);
    void create_instance(MemoryPtr<Entity> entity, EntityInitialiserData initialiserData);
    void find_template(const ShortGuid& guid) const;
  };

  class EntityCallbackForwarding {

  };

  class TriggerProcessingContext {
  public:
    TriggerProcessingContext();
    ~TriggerProcessingContext();
    bool begin_cycle(double cycle);
    void report_trigger_usage();
  };

  //void breakpoint_less_than(const EntityBreakpoint& point1, const EntityBreakpoint& point2);
  void trigger_timing_less_than(const MemoryRefPtr<TriggerInfo>& info1, const MemoryRefPtr<TriggerInfo>& info2);
}
