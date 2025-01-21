//
// The OpenIsolation Project
//

#pragma once
#include "cathode_guid.h"

/*struct Entity_vtablefuncs {
  void* find_entity<ShortGuid>;
  void* find_entity<EntityPathElement>;
  void* get_alias_ref;
  void* get_entity_alias;
  void* find_entity_parameter;
  void* find_attached_triggers;
  void* cache_all_parameters;
  void* add_resource; // Stripped
  void* release;
  void* clear_shutdown_flag;
  void* create_entities; // Stripped
  void* create_resources; // Stripped
  void* initialise_entities; // Stripped
  void* shutdown_entities; // Stripped
  void* destroy_entities; // Stripped
  void* destroy_resources; // Stripped
  void* is_offline_only; // Stripped
  void* ~Entity1;
  void* ~Entity2;
  void* find_animation_data;
  void* find_sequence_data;
  void* find_entity_resource;
  void* get_connector_pin;
  void* get_connector_ref;
  void* find_all_connectors;
  void* find_all_parameters;
  void* find_all_attached;
  void* resolve_variable; // Stripped
  void* pure_virtual1;
  void* pure_virtual2;
  void* allow_MT_process; // Stripped
  void* requires_state; // Stripped
  void* get_entity_size;
  void* size_of_cache;
  void* get_entity_exclusive_size; // Stripped
  void* num_entities; // Stripped
  void* get_entity;
  void* append_all_entities;
  void* add_entity;
  void* remove_entity;
  void* print_children_array; // Stripped
  void* save_children_array; // Stripped
  void* load_children_array; // Stripped
  void* save_children_array<ShortGuid>; // Stripped
  void* load_children_array<ShortGuid>; // Stripped
  void* num_child_entities; // Stripped
  void* get_child_entity;
  void* add_entity_to_processing; // Stripped
  void* remove_entity_from_processing; // Stripped
  void* is_processing;
  void* add_entities_to_process;
  void* matches_primary_zone; // Stripped
  void* matches_secondary_zone; // Stripped
  void* get_primary_zone;
  void* get_secondary_zone;
  void* set_zone; // Stripped
  void* clear_zone; // Stripped
  void* set_primary_zone; // Stripped
  void* set_secondary_zone; // Stripped
  void* is_streamable; // Stripped
  void* set_exclusive_master_number; // Stripped
  void* set_lighting_master_number; // Stripped
  void* apply_to_primary_zone;
  void* apply_to_secondary_zone;
  void* find_all_physics_entities;
  void* find_all_collision_entities;
  void* visit_all_model_entities;
  void* trigger_custom_callback;
  void* call_custom_method;
  void* access_referenced_entities;
  void* set_proxy;
  void* get_proxy_target;
  void* get_proxy;
  void* receive_message; // Stripped
  void* is_entity_loaded;
  void* is_templated;
  void* marked_for_delete;
  void* requires_script;
  void* get_debug_name_string;
  void* get_debug_name;
  void* set_debug_name<char*>;
  void* set_debug_name<String>;
};*/

namespace CATHODE {
  /// <summary>
  ///   Stores the ShortGuid of the parent and child nodes in the flowgraph for an entity.
  /// </summary>
  struct EntityInitialiserData {
    ShortGuid parent;
    ShortGuid child;
  };

  // The RTTI typeinfo for this virtual class indicates that it inherits from 1 base class (EntityState) and that this inheritance is public.
  // This class provides some basic implementation details for certain methods, but most are just empty and return invalid placeholder values.
  // It's expected that some of these virtual methods will be overridden by child classes to provide more defined / specialised implementations.
  class Entity {
public:

  };
}
