# Alien Isolation - iOS - libCATHODE Sources & Symbols

## Symbols by source code file name

### cathode_animation_info_variable.cpp
```c++
CATHODE::MemoryAllocation<CATHODE::AnimationInfo>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::AnimationInfo> >::m_tracker
```

### cathode_commands.cpp
```c++
CATHODE::pathlen(CATHODE::Keyframe<CATHODE::SplineVertex> const*)
CATHODE::pathlen(CATHODE::Keyframe<CATHODE::EventPair> const*)
CATHODE::pathlen(CATHODE::SplinePoint const*)
CATHODE::equals(bool const&, bool const&)
CATHODE::equals(int const&, int const&)
CATHODE::equals(float const&, float const&)
CATHODE::equals(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::equals(CATHODE::String const&, CATHODE::String const&)
CATHODE::equals(CATHODE::FilePath const&, CATHODE::FilePath const&)
CATHODE::equals(CATHODE::ArrayPtr<CATHODE::SplinePoint> const&, CATHODE::ArrayPtr<CATHODE::SplinePoint> const&)
CATHODE::equals(CA::Vector const&, CA::Vector const&)
CATHODE::equals(CATHODE::Enum const&, CATHODE::Enum const&)
CATHODE::less_than(bool const&, bool const&)
CATHODE::less_than(int const&, int const&)
CATHODE::less_than(float const&, float const&)
CATHODE::less_than(CATHODE::String const&, CATHODE::String const&)
CATHODE::less_than(CATHODE::FilePath const&, CATHODE::FilePath const&)
CATHODE::less_than(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::less_than(CA::Vector const&, CA::Vector const&)
CATHODE::less_than(CATHODE::Enum const&, CATHODE::Enum const&)
CATHODE::less_than(CATHODE::ArrayPtr<CATHODE::SplinePoint> const&, CATHODE::ArrayPtr<CATHODE::SplinePoint> const&)
CATHODE::CommandBuffer::num_commands() const
CATHODE::CommandBuffer::get_command(unsigned int) const
CATHODE::CommandBuffer::CommandBuffer(unsigned int, unsigned int)
CATHODE::CommandBuffer::~CommandBuffer()
CATHODE::CommandBuffer::load(char const*)
CATHODE::MemoryAllocation<CATHODE::SplinePoint>::pool() const
CATHODE::MemoryAllocation<CATHODE::SplinePoint>::item_size() const

vtable for CATHODE::MemoryAllocation<CATHODE::SplinePoint>
typeinfo for CATHODE::MemoryAllocation<CATHODE::SplinePoint>
CATHODE::MemoryAllocation<CATHODE::StringInterpreter::Attribute>::m_tracker
```

### cathode_entity.cpp
```c++
CATHODE::ArrayPtr<char>::~ArrayPtr()
CATHODE::Entity::Entity(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::Entity::~Entity()
CATHODE::Entity::~Entity()
CATHODE::Entity::~Entity()
CATHODE::Entity::instance_guid() const
CATHODE::Entity::is_child_of(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::root_parent(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::handle() const
CATHODE::Entity::parent_position() const
CATHODE::Entity::add_entity(CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryPtr<CATHODE::Entity>&)
CATHODE::Entity::remove_entity(CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryPtr<CATHODE::Entity>&)
CATHODE::Entity::set_proxy(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::Entity::get_proxy(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::get_proxy_target(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::size_of_cache() const
CATHODE::Entity::add_entities_to_process(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::StaticArray<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::Entity::find_entity(CATHODE::EntityPathElement const* const&) const
CATHODE::Entity::find_entity(CATHODE::ShortGuid const&) const
CATHODE::Entity::find_entity_resource(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&) const
CATHODE::Entity::get_connector_pin(CATHODE::ShortGuid const&) const
CATHODE::Entity::get_connector_ref(CATHODE::ShortGuid const&) const
CATHODE::Entity::get_alias_ref(CATHODE::EntityPathElement const* const&) const
CATHODE::Entity::get_entity_alias(CATHODE::ShortGuid const&) const
CATHODE::Entity::find_entity_parameter(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&) const
CATHODE::Entity::get_entity(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int) const
CATHODE::Entity::append_all_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::Entity::get_child_entity(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int) const
CATHODE::Entity::trigger_custom_callback(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&) const
CATHODE::Entity::find_animation_data(CATHODE::ShortGuid const&) const
CATHODE::Entity::find_sequence_data(CATHODE::ShortGuid const&) const
CATHODE::Entity::get_entity_size() const
CATHODE::Entity::apply_to_primary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&, void (*)(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&)) const
CATHODE::Entity::apply_to_secondary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&, void (*)(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&)) const
CATHODE::Entity::find_all_physics_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::Entity::find_all_collision_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::Entity::visit_all_model_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityVisitor&) const
CATHODE::Entity::call_custom_method(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, unsigned int) const
CATHODE::Entity::access_referenced_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&) const
CATHODE::Entity::find_resource(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&) const
CATHODE::Entity::cache_all_parameters(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInterface const*, CATHODE::ShortGuid) const
CATHODE::Entity::find_all_connectors(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::find_all_parameters(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInterface const*, CATHODE::EntityPathElement const* const&) const
CATHODE::Entity::find_all_parameters(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::find_attached_triggers(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInterface const*, CATHODE::ShortGuid) const
CATHODE::Entity::find_all_attached(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInterface const*, CATHODE::EntityPathElement const* const&) const
CATHODE::Entity::find_all_attached(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::release(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::Entity::get_primary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::get_secondary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::get_debug_name_string() const
CATHODE::Entity::should_convert_to_physics(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::should_delete_standard_collision(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::should_delete_ballistic_collision(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::is_templated(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::marked_for_delete(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::requires_script(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Entity::clear_shutdown_flag()
CATHODE::Entity::set_debug_name(CATHODE::MemoryPtr<CATHODE::Entity> const&, char const*) const
CATHODE::Entity::set_debug_name(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::String const&) const
CATHODE::ZoneableEntity::ZoneableEntity(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::ZoneableEntity::~ZoneableEntity()
CATHODE::ZoneableEntity::~ZoneableEntity()
CATHODE::ZoneableEntity::~ZoneableEntity()
CATHODE::ZoneableEntity::release_zones()
CATHODE::ZoneableEntity::matches_primary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance> const&) const
CATHODE::ZoneableEntity::matches_secondary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance> const&) const
CATHODE::ZoneableEntity::get_primary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::ZoneableEntity::get_secondary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::ZoneableEntity::clear_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&)
CATHODE::ZoneableEntity::set_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&)
CATHODE::ZoneableEntity::set_primary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance> const&)
CATHODE::ZoneableEntity::set_secondary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance> const&)
CATHODE::ZoneableEntity::apply_to_primary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&, void (*)(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&)) const
CATHODE::ZoneableEntity::apply_to_secondary_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&, void (*)(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&)) const
CATHODE::Master::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::MemoryPtr<CATHODE::Entity> CATHODE::EntityManager::create_entity<CATHODE::MASTER>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::MemoryPtr<CATHODE::MASTER> CATHODE::MemoryPool::allocate_item<CATHODE::MASTER, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::MemoryAllocation<CATHODE::MASTER>::pool() const
CATHODE::MemoryAllocation<CATHODE::MASTER>::item_size() const
CATHODE::MASTER::MASTER(CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData)
CATHODE::MASTER::~MASTER()
CATHODE::MASTER::~MASTER()
CATHODE::MASTER::show_on_reset(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::MASTER::enable_on_reset(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::MASTER::simulate_on_reset(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::MASTER::on_hide(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::on_show(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::on_enable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::on_disable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::on_simulate(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::on_keyframe(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::on_suspend(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::on_allow(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MASTER::update_context(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::MASTER::update_context(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
non-virtual thunk to CATHODE::MASTER::~MASTER()
non-virtual thunk to CATHODE::MASTER::~MASTER()
non-virtual thunk to CATHODE::MASTER::on_enable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::on_disable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::on_show(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::on_hide(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::on_simulate(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::on_keyframe(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::on_suspend(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::on_allow(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::MASTER::update_context(CATHODE::MemoryPtr<CATHODE::Entity> const&)
non-virtual thunk to CATHODE::MASTER::update_context(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
non-virtual thunk to CATHODE::MASTER::enable_on_reset(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::MASTER::show_on_reset(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::MASTER::simulate_on_reset(CATHODE::MemoryPtr<CATHODE::Entity> const&) const

typeinfo name for CATHODE::Entity
typeinfo name for CATHODE::EntityState
typeinfo name for CATHODE::ZoneableEntity
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MASTER>
typeinfo name for CATHODE::MASTER
vtable for CATHODE::Entity
vtable for CATHODE::ZoneableEntity
typeinfo for CATHODE::EntityState
typeinfo for CATHODE::Entity
typeinfo for CATHODE::ZoneableEntity
vtable for CATHODE::MemoryAllocation<CATHODE::MASTER>
typeinfo for CATHODE::MemoryAllocation<CATHODE::MASTER>
vtable for CATHODE::MASTER
typeinfo for CATHODE::MASTER
CATHODE::default_name
CATHODE::MemoryAllocation<CATHODE::EntityHandle>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::Entity> >::m_tracker
CATHODE::Entity::m_entity_count
CATHODE::MemoryAllocation<CATHODE::MASTER>::m_tracker
```

### cathode_entity_interface.cpp
```c++
CATHODE::EntityInterface::EntityInterface()
CATHODE::EntityInterface::update_cache(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::EntityInterface::flush_cache(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::EntityInterface::debug_print_entity_details_to_buffer(CATHODE::MemoryPtr<CATHODE::Entity> const&, DEBUG_BUFFER&) const
CATHODE::EntityInterface::auto_print_contents(CATHODE::MemoryPtr<CATHODE::Entity> const&, DEBUG_BUFFER&) const
CATHODE::EntityInterface::debug_print_entities_with_state(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, bool) const
CATHODE::EntityInterface::find_entry(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&) const
CATHODE::EntityInterface::cache_variable(CATHODE::ShortGuid const&, CATHODE::VariableInterface const*) const
CATHODE::EntityInterface::cache_trigger(CATHODE::ShortGuid const&, CATHODE::EntityTrigger const&) const
CATHODE::EntityInterface::cache_size() const
CATHODE::ProxyInstance::ProxyInstance(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityProxy const&)
CATHODE::ProxyInstance::on_initialise(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::ProxyInstance::on_initialise(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProxyInstance::on_finalise(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::ProxyInstance::on_finalise(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProxyInstance::on_proxy_enable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::ProxyInstance::on_proxy_enable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProxyInstance::on_proxy_disable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::ProxyInstance::on_proxy_disable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProxyInstance::on_shutdown(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::ProxyInstance::on_shutdown(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProxyInstance::get_proxy_target(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::ProxyInstance::find_all_connectors(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::EntityInterface::find_attached_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::EntityInterface::find_attached_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&) const
CATHODE::EntityInterface::call_triggers(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, double) const
CATHODE::EntityInterface::is_trigger_attached(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&) const
CATHODE::EntityInterface::inner_call_triggers(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, double, bool) const
CATHODE::EntityInterface::update_context(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityInterface::update_context(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityInterface::apply_context(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, unsigned short)
CATHODE::EntityMethodInterface::on_process(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityMethodInterface::on_update(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityMethodInterface::on_opening(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityMethodInterface::on_closing(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityMethodInterface::on_loading(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityMethodInterface::on_live_edit(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityMethodInterface::on_refresh(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProxyInstance::~ProxyInstance()
CATHODE::ProxyInstance::~ProxyInstance()
non-virtual thunk to CATHODE::ProxyInstance::~ProxyInstance()
non-virtual thunk to CATHODE::ProxyInstance::~ProxyInstance()
CATHODE::ProxyInstance::~ProxyInstance()

typeinfo name for CATHODE::EntityMethodInterface
typeinfo name for CATHODE::EntityInterface
typeinfo name for CATHODE::ProxyInstance
vtable for CATHODE::EntityInterface
vtable for CATHODE::ProxyInstance
typeinfo for CATHODE::EntityMethodInterface
typeinfo for CATHODE::EntityInterface
typeinfo for CATHODE::ProxyInstance
/*__MergedGlobals*/
CATHODE::MemoryAllocation<CATHODE::EntityTrigger>::m_tracker
CATHODE::MemoryAllocation<CATHODE::EntityCacheEntry>::m_tracker
CATHODE::MemoryAllocation<CATHODE::ProxyInstance>::m_tracker
CATHODE::MemoryAllocation<CATHODE::NetworkProxyInstance>::m_tracker
```

### cathode_entity_manager.cpp
```c++
stristr(char const*, char const*)
CATHODE::EntityManagerAccess::EntityManagerAccess()
CATHODE::EntityManagerAccess::~EntityManagerAccess()
CATHODE::EntityTrigger::EntityTrigger(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, double)
CATHODE::TriggerInfo::add_reference()
CATHODE::TriggerInfo::remove_reference()
CATHODE::TriggerInfo::first_trigger_entity() const
CATHODE::TriggerInfo::TriggerInfo(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::EntityTrigger const&, unsigned int, double, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, CATHODE::ArrayPtr<char> const&)
CATHODE::EntityManager::EntityManager()
CATHODE::EntityManager::create_instance()
CATHODE::EntityManager::construct_proxy(CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityProxy const&)
CATHODE::MemoryPtr<CATHODE::ProxyInstance> CATHODE::MemoryPool::allocate_item<CATHODE::ProxyInstance, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityProxy>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityProxy const&)
CATHODE::EntityManager::spawn_template_entity(CATHODE::MemoryPtr<CATHODE::Entity>, bool)
CATHODE::EntityManager::despawn_template_entity(CATHODE::MemoryPtr<CATHODE::Entity>)
CATHODE::EntityManager::create_instance(CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData)
CATHODE::EntityManager::find_template(CATHODE::ShortGuid const&) const
CATHODE::MemoryPtr<CATHODE::CompositeInstance> CATHODE::MemoryPool::allocate_item<CATHODE::CompositeInstance, CATHODE::MemoryPtr<CATHODE::CompositeTemplate>, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData>(CATHODE::MemoryPtr<CATHODE::CompositeTemplate> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::EntityManager::create_info(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, void const*)
CATHODE::EntityManager::uninitialise()
CATHODE::EntityManager::requires_push_pause_context(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::requires_pop_pause_context(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >::pop()
CATHODE::EntityManager::add_composite_template(CATHODE::ShortGuid const&, char const*)
CATHODE::EntityManager::add_entity(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, char const*)
CATHODE::EntityManager::add_proxy_from_command(CATHODE::CommandBuffer const&, unsigned int)
CATHODE::EntityManager::add_proxy(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::EntityPathStore const&)
CATHODE::EntityManager::add_resource(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, unsigned int, unsigned int, CA::Vector const&, CA::Vector const&)
CATHODE::EntityManager::add_link(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::add_alias_from_command(CATHODE::CommandBuffer const&, unsigned int)
CATHODE::EntityManager::add_alias(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::EntityPathStore const&)
CATHODE::EntityManager::add_connector(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, char const*)
CATHODE::EntityManager::add_binding_from_command(CATHODE::CommandBuffer const&, unsigned int)
CATHODE::EntityManager::add_binding(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::EntityPathStore const&)
CATHODE::EntityManager::remove_binding(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::add_track_from_command(CATHODE::CommandBuffer const&, unsigned int)
CATHODE::EntityManager::add_track(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::Keyframe<CATHODE::SplineVertex> const*)
CATHODE::EntityManager::add_track(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::Keyframe<CATHODE::EventPair> const*)
CATHODE::EntityManager::remove_track(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::add_entity_to_seq_from_command(CATHODE::CommandBuffer const&, unsigned int)
CATHODE::EntityManager::add_entity_to_sequence(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::EntityPathStore const&, float const&)
CATHODE::EntityManager::reset_flowgraph_composite(CATHODE::ShortGuid const&)
CATHODE::EntityManager::unmonitor_composite_instance(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::add_breakpoint_from_command(CATHODE::CommandBuffer const&, unsigned int)
CATHODE::EntityManager::add_breakpoint(int const&, CATHODE::EntityHandle const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::time() const
CATHODE::EntityManager::add_trigger(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityManager::add_method(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, char const*)
CATHODE::EntityManager::add_parameter_from_command(CATHODE::CommandBuffer const&, unsigned int)
CATHODE::EntityManager::add_parameter_bool(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, bool const&)
CATHODE::EntityManager::add_parameter_int(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, int const&)
CATHODE::EntityManager::add_parameter_enum(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::Enum const&)
CATHODE::EntityManager::add_parameter_float(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, float const&)
CATHODE::EntityManager::add_parameter_string(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, char const*)
CATHODE::EntityManager::add_parameter_file_path(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, char const*)
CATHODE::EntityManager::add_parameter_spline(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::SplinePoint const*)
CATHODE::EntityManager::add_parameter_guid(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::add_parameter_direction(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CA::Vector const&)
CATHODE::EntityManager::add_parameter_position(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CA::Vector const&, CA::Vector const&)
CATHODE::EntityManager::remove_link(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::remove_alias(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::remove_entity(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::remove_proxy(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::remove_connector(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::remove_parameter(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::remove_entities_from_sequence(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::EntityManager::apply_commands(CATHODE::CommandBuffer const&)
CATHODE::EntityManager::purge_unused_variables()
CATHODE::EntityManager::initialise_templates(CATHODE::CommandBuffer const&)
CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> CATHODE::MemoryPool::allocate_item<CATHODE::TriggerProcessingContext>()
CATHODE::aligned_write(unsigned int, CA::FileOut&, void const*, unsigned long, bool)
CATHODE::EntityManager::initialise_instances()
CATHODE::EntityManager::class_guid(char const*)
CATHODE::EntityManager::set_global_composite(CATHODE::ShortGuid const&)
CATHODE::EntityManager::set_pause_menu_composite(CATHODE::ShortGuid const&)
CATHODE::EntityManager::set_root_composite(CATHODE::ShortGuid const&)
CATHODE::EntityManager::shutdown()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >::release()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::VariableInterface> >::release()
CATHODE::ArrayPtr<CATHODE::EntityProxyForwarding>::release()
CATHODE::EntityManager::request_save_state(CATHODE::EntityHandle const&)
CATHODE::EntityManager::save_state(CATHODE::EntityHandle const&)
CATHODE::EntityManager::save_forward_triggers() const
CATHODE::EntityManager::callback(CATHODE::EntityHandle const&, CATHODE::EntityHandle const&, unsigned int, unsigned int, void const*, double)
CATHODE::EntityManager::load_state()
CATHODE::ArrayPtr<CATHODE::EntityCallbackForwarding>::clear()
CATHODE::EntityManager::find_entity(CATHODE::EntityHandle const&) const
CATHODE::EntityManager::load_forward_triggers()
CATHODE::EntityCallbackForwarding::add_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::ArrayPtr<CATHODE::EntityCallbackForwarding>::push_sort(CATHODE::EntityCallbackForwarding const&)
CATHODE::EntityManager::process_preroll()
CATHODE::EntityManager::set_player_spawn_pos(CATHODE::Position const&, bool)
CATHODE::EntityManager::add_variable(CATHODE::MemoryPtr<CATHODE::VariableInterface> const&)
CATHODE::EntityManager::set_current_checkpoint(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::add_checkpoint(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::remove_checkpoint(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::num_checkpoints() const
CATHODE::EntityManager::checkpoint_id(unsigned int) const
CATHODE::EntityManager::jump_to_checkpoint(char const*)
CATHODE::EntityManager::add_DEBUG_checkpoint(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::remove_DEBUG_checkpoint(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::num_DEBUG_checkpoints() const
CATHODE::EntityManager::DEBUG_checkpoint_id(unsigned int) const
CATHODE::EntityManager::jump_to_DEBUG_checkpoint(unsigned int)
CATHODE::EntityManager::set_load_checkpoint_is_pending(bool)
CATHODE::EntityManager::is_load_checkpoint_pending() const
CATHODE::EntityManager::reset_preroll_duration()
CATHODE::EntityManager::set_filter_object(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::clear_filter_object()
CATHODE::EntityManager::reset()
CATHODE::EntityManager::jump_to_checkpoint()
CATHODE::EntityManager::load_current_checkpoint()
CATHODE::EntityManager::tick()
CATHODE::EntityManager::process_messages()
CATHODE::EntityManager::process_triggers(CATHODE::ENTITY_TRANSPORT::ENUM)
CATHODE::EntityManager::check_memory_usage()
CATHODE::EntityManager::report_trigger_usage()
CATHODE::EntityManager::process_entity(CATHODE::MemoryPtr<CATHODE::Entity>)
CATHODE::EntityManager::process()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >::push_sort(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityCallbackForwarding::remove_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::set_callback_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::get_callback_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::remove_callback_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::ArrayPtr<CATHODE::EntityCallbackForwarding>::remove_sort(unsigned int)
CATHODE::EntityManager::remove_callback_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::set_proxy_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::ArrayPtr<CATHODE::EntityProxyForwarding>::push_sort(CATHODE::EntityProxyForwarding const&)
CATHODE::EntityManager::get_proxy_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::remove_proxy_forwarding(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::breakpoint_less_than(CATHODE::EntityBreakpoint const&, CATHODE::EntityBreakpoint const&)
CATHODE::EntityManager::breakpoint_present(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&) const
bool CATHODE::ArrayPtr<CATHODE::EntityBreakpoint>::push_sort<bool const (*)(CATHODE::EntityBreakpoint const&, CATHODE::EntityBreakpoint const&)>(CATHODE::EntityBreakpoint const&, bool const (*)(CATHODE::EntityBreakpoint const&, CATHODE::EntityBreakpoint const&))
CATHODE::EntityManager::callback(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, double)
CATHODE::EntityManager::callback_immediate(CATHODE::EntityHandle const&, CATHODE::EntityHandle const&, unsigned int, unsigned int, void*)
CATHODE::EntityManager::call_method(CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityManager::trigger(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::EntityTrigger const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>, double, bool)
CATHODE::EntityManager::object_name(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::full_path(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::element_name(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&)
CATHODE::trigger_timing_less_than(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerProcessingContext::TriggerProcessingContext()
CATHODE::ArrayPtr<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::~ArrayPtr()
CATHODE::TriggerProcessingContext::~TriggerProcessingContext()
CATHODE::ArrayPtr<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::release()
CATHODE::TriggerProcessingContext::begin_cycle(double)
bool CATHODE::ArrayPtr<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::priority_queue_remove<bool const (*)(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)>(bool const (*)(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&))
bool CATHODE::ArrayPtr<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::priority_queue_insert<bool const (*)(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)>(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, bool const (*)(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&))
CATHODE::TriggerProcessingContext::report_trigger_usage()
CATHODE::EntityManager::process_trigger(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, bool)
CATHODE::EntityManager::set_transport(CATHODE::ENTITY_TRANSPORT::ENUM)
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::EntityMessage> >::pop()
CATHODE::EntityManager::remove_listeners(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::EntityManager::add_message(CATHODE::ListenerContext::MessageId, unsigned int, unsigned int, void const*)
CATHODE::EntityManager::add_listener(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ListenerContext::MessageId, unsigned int)
CATHODE::EntityManager::find_temporary_entity(unsigned int) const
CATHODE::EntityManager::check_for_hash_collision(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&) const
CATHODE::EntityManager::generate_new_temporary_entity_guid(CATHODE::ShortGuid const&)
CATHODE::EntityManager::create_temporary_entity(CATHODE::ShortGuid const&, CA::Matrix const&)
CATHODE::EntityManager::inner_create_temporary_entity(CATHODE::ShortGuid const&, CA::Matrix const&, unsigned int)
CATHODE::EntityManager::create_temporary_entity_with_id(CATHODE::ShortGuid const&, CA::Matrix const&, unsigned int)
CATHODE::MemoryPtr<CATHODE::TemporaryEntity> CATHODE::MemoryPool::allocate_item<CATHODE::TemporaryEntity, CATHODE::EntityInitialiserData>(CATHODE::EntityInitialiserData const&)
CATHODE::EntityManager::allocate_temporary_array()
CATHODE::EntityManager::finalise_temporary_entity(CATHODE::MemoryPtr<CATHODE::TemporaryEntity>)
CATHODE::MemoryPtr<CATHODE::CompositeTemplate> CATHODE::MemoryPool::allocate_item<CATHODE::CompositeTemplate, CATHODE::ShortGuid>(CATHODE::ShortGuid const&)
CATHODE::EntityManager::get_player_spawn_pos(CATHODE::Position&) const
CATHODE::EntityManager::set_ready_to_save_func(bool (*)())
CATHODE::EntityManager::set_after_pre_restore_func(void (*)())
CATHODE::MemoryAllocation<CATHODE::ProxyInstance>::pool() const
CATHODE::MemoryAllocation<CATHODE::ProxyInstance>::item_size() const
CATHODE::MemoryAllocation<CATHODE::CompositeInstance>::pool() const
CATHODE::MemoryAllocation<CATHODE::CompositeInstance>::item_size() const
CATHODE::MemoryAllocation<CATHODE::TriggerProcessingContext>::pool() const
CATHODE::MemoryAllocation<CATHODE::TriggerProcessingContext>::item_size() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >::item_size() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::CompositeTemplate> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::CompositeTemplate> >::item_size() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::VariableInterface> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::VariableInterface> >::item_size() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >::item_size() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityMessage> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityMessage> >::item_size() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityListener> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityListener> >::item_size() const
CATHODE::MemoryAllocation<CATHODE::EntityCallbackForwarding>::pool() const
CATHODE::MemoryAllocation<CATHODE::EntityCallbackForwarding>::item_size() const
CATHODE::MemoryAllocation<CATHODE::EntityProxyForwarding>::pool() const
CATHODE::MemoryAllocation<CATHODE::EntityProxyForwarding>::item_size() const
CATHODE::MemoryAllocation<CATHODE::EntityBreakpoint>::pool() const
CATHODE::MemoryAllocation<CATHODE::EntityBreakpoint>::item_size() const
CATHODE::MemoryAllocation<char>::pool() const
CATHODE::MemoryAllocation<char>::item_size() const
CATHODE::MemoryAllocation<unsigned int>::pool() const
CATHODE::MemoryAllocation<unsigned int>::item_size() const
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::EntityMessage> >::clear()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::EntityListener> >::clear()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::CompositeTemplate> >::clear()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >::clear()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >::pop()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::VariableInterface> >::pop()
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >::swap(CATHODE::MemoryPtr<CATHODE::TemporaryEntity>&, CATHODE::MemoryPtr<CATHODE::TemporaryEntity>&)
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >::closest(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::MemoryAllocation<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::item_size() const
CATHODE::ArrayPtr<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::pop()
CATHODE::MemoryAllocation<CATHODE::TriggerUsageByEntity>::pool() const
CATHODE::MemoryAllocation<CATHODE::TriggerUsageByEntity>::item_size() const
CATHODE::ArrayPtr<CATHODE::TriggerUsageByEntity>::swap(CATHODE::TriggerUsageByEntity&, CATHODE::TriggerUsageByEntity&)
CATHODE::MemoryAllocation<CATHODE::EntityMessage>::pool() const
CATHODE::MemoryAllocation<CATHODE::EntityMessage>::item_size() const
CATHODE::MemoryAllocation<CATHODE::EntityListener>::pool() const
CATHODE::MemoryAllocation<CATHODE::EntityListener>::item_size() const
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::EntityListener> >::remove_sort(unsigned int)
CATHODE::MemoryAllocation<CATHODE::TemporaryEntity>::pool() const
CATHODE::MemoryAllocation<CATHODE::TemporaryEntity>::item_size() const
CATHODE::MemoryAllocation<CATHODE::CompositeTemplate>::pool() const
CATHODE::MemoryAllocation<CATHODE::CompositeTemplate>::item_size() const

CATHODE::EntityManager::create_info(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, void const*) [clone .cold.1]
CATHODE::EntityManager::add_composite_template(CATHODE::ShortGuid const&, char const*) [clone .cold.1]
CATHODE::EntityManager::purge_unused_variables() [clone .cold.1]
CATHODE::EntityManager::check_memory_usage() [clone .cold.1]
CATHODE::EntityManager::find_temporary_entity(unsigned int) const [clone .cold.1]
typeinfo name for CATHODE::MemoryAllocation<CATHODE::ProxyInstance>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::CompositeInstance>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::TriggerProcessingContext>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::CompositeTemplate> >
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::VariableInterface> >
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityMessage> >
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityListener> >
typeinfo name for CATHODE::MemoryAllocation<CATHODE::EntityCallbackForwarding>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::EntityProxyForwarding>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::EntityBreakpoint>
typeinfo name for CATHODE::MemoryAllocation<unsigned int>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >
typeinfo name for CATHODE::MemoryAllocation<CATHODE::TriggerUsageByEntity>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::EntityListener>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::TemporaryEntity>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::CompositeTemplate>
vtable for CATHODE::MemoryAllocation<CATHODE::ProxyInstance>
typeinfo for CATHODE::MemoryAllocation<CATHODE::ProxyInstance>
vtable for CATHODE::MemoryAllocation<CATHODE::CompositeInstance>
typeinfo for CATHODE::MemoryAllocation<CATHODE::CompositeInstance>
vtable for CATHODE::MemoryAllocation<CATHODE::TriggerProcessingContext>
typeinfo for CATHODE::MemoryAllocation<CATHODE::TriggerProcessingContext>
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::CompositeTemplate> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::CompositeTemplate> >
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::VariableInterface> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::VariableInterface> >
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityMessage> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityMessage> >
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityListener> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityListener> >
vtable for CATHODE::MemoryAllocation<CATHODE::EntityCallbackForwarding>
typeinfo for CATHODE::MemoryAllocation<CATHODE::EntityCallbackForwarding>
vtable for CATHODE::MemoryAllocation<CATHODE::EntityProxyForwarding>
typeinfo for CATHODE::MemoryAllocation<CATHODE::EntityProxyForwarding>
vtable for CATHODE::MemoryAllocation<CATHODE::EntityBreakpoint>
typeinfo for CATHODE::MemoryAllocation<CATHODE::EntityBreakpoint>
vtable for CATHODE::MemoryAllocation<char>
typeinfo for CATHODE::MemoryAllocation<char>
vtable for CATHODE::MemoryAllocation<unsigned int>
typeinfo for CATHODE::MemoryAllocation<unsigned int>
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >
vtable for CATHODE::MemoryAllocation<CATHODE::TriggerUsageByEntity>
typeinfo for CATHODE::MemoryAllocation<CATHODE::TriggerUsageByEntity>
vtable for CATHODE::MemoryAllocation<CATHODE::EntityMessage>
typeinfo for CATHODE::MemoryAllocation<CATHODE::EntityMessage>
vtable for CATHODE::MemoryAllocation<CATHODE::EntityListener>
typeinfo for CATHODE::MemoryAllocation<CATHODE::EntityListener>
vtable for CATHODE::MemoryAllocation<CATHODE::TemporaryEntity>
typeinfo for CATHODE::MemoryAllocation<CATHODE::TemporaryEntity>
vtable for CATHODE::MemoryAllocation<CATHODE::CompositeTemplate>
typeinfo for CATHODE::MemoryAllocation<CATHODE::CompositeTemplate>
CATHODE::EntityManager::process_preroll()::s_cycle_count
CATHODE::EntityManager::check_memory_usage()::assert_once
/*__MergedGlobals*/
CATHODE::MemoryAllocation<CATHODE::TriggerInfo>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >::m_tracker
CATHODE::MemoryAllocation<CATHODE::TriggerProcessingContext>::m_tracker
CATHODE::MemoryAllocation<CATHODE::EntityMessage>::m_tracker
CATHODE::MemoryAllocation<CATHODE::EntityListener>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityMessage> >::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityListener> >::m_tracker
CATHODE::MemoryAllocation<CATHODE::EntityBreakpoint>::m_tracker
CATHODE::MemoryAllocation<CATHODE::EntityCallbackForwarding>::m_tracker
CATHODE::MemoryAllocation<CATHODE::EntityProxyForwarding>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TriggerProcessingContext> >::m_tracker
CATHODE::EntityManagerAccess::mutex
CATHODE::ItemMemoryPool<CATHODE::TriggerInfo>::m_instance
CATHODE::EntityManager::m_instance
CATHODE::PackFile::packfile
CATHODE::MemoryAllocation<CATHODE::TriggerUsageByEntity>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryReport>::m_tracker
```

### cathode_method_interface.cpp
```c++
CATHODE::ProxyInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScriptVariable::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::InspectorInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EvaluatorInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ModifierInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SensorInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TransformerInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CloseableInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GateInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ZoneInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AttachmentInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SensorAttachmentInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CompositeInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Box::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UpdateLeaderBoardDisplay::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetNextLoadingMovie::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ButtonMashPrompt::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetFlashIntValue::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetFlashFloatValue::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sphere::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ImpactSphere::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UiSelectionBox::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UiSelectionSphere::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CollisionBarrier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerTriggerBox::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerUseTriggerBox::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ModelReference::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LightReference::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ParticleEmitterReference::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RibbonEmitterReference::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GPU_PFXEmitterReference::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FogSphere::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FogBox::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SurfaceEffectSphere::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SurfaceEffectBox::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SimpleWater::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SimpleRefraction::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProjectiveDecal::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LODControls::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LightingMaster::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugCamera::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraResource::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraCollisionBox::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraFinder::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerCamera::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraBehaviorInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraShake::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraPathDriven::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FixedCamera::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BoneAttachedCamera::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::StealCamera::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FollowCameraModifier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraPath::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraAimAssistant::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CameraPlayAnimation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetCurrentCameraTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CharacterShivaArms::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Logic_Vent_Entrance::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_Follow::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_FollowUsingJobs::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_PlayAnimation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_Idle::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_StopScript::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_GoTo::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_GoToCover::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_MoveTowards::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_Die::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_LaunchMeleeAttack::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_ModifyCombatBehaviour::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_HolsterWeapon::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_ForceReloadWeapon::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_ForceMeleeAttack::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_ModifyBreathing::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_HoldBreath::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_DeepCrouch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_PlaySecondaryAnimation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_LocomotionModifier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetMood::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_LocomotionEffect::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_LocomotionDuck::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_ShootAt::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_AimAtCurrentTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_AimAt::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Player_Sensor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CMD_Ragdoll::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetTacticalPosition::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetTacticalPositionToTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetFocalPoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetAndroidThrowTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetAlliance::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_GetAlliance::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ALLIANCE_SetDisposition::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ALLIANCE_ResetAll::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetInvincibility::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetHealth::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_GetHealth::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetDebugDisplayName::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_TakeDamage::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetSubModelVisibility::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetHeadVisibility::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetFacehuggerAggroRadius::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MonitorBase::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CharacterTypeMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Convo::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_NotifyDynamicDialogueEvent::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Squad_DialogueMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Group_DeathCounter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Group_Death_Monitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_AllSensesLimiter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SenseLimiter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_ResetSensesAndMemory::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetupMenaceManager::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_AlienConfig::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_GetLastSensedPositionOfTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Weapon_AINotifier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::HeldItem_AINotifier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Gain_Aggression_In_Radius::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Explosion_AINotifier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Sleeping_Android_Monitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Highest_Awareness_Monitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Squad_GetAwarenessState::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Squad_GetAwarenessWatermark::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerCameraMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScreenEffectEventMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DEBUG_SenseLevels::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_FakeSense::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SuspiciousItem::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetAlienDevelopmentStage::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_TargetAcquire::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_IsWithinRange::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_ForceCombatTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetAimTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetTorch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_GetTorch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetAutoTorchMode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_GetCombatTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetTotallyBlindInDark::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetSafePoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Player_ExploitableArea::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetDefendArea::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetPursuitArea::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_ClearDefendArea::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_ClearPursuitArea::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_ForceRetreat::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetAlertness::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetStartPos::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetAgressionProgression::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetLocomotionStyleForJobs::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetLocomotionTargetSpeed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetGunAimMode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Coordinator::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_set_behaviour_tree_flags::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetHidingSearchRadius::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetHidingNearestLocation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_WithdrawAlien::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetInvisible::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_HasWeaponOfType::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_TriggerAimRequest::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_StopAiming::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_TriggerShootRequest::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_StopShooting::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Squad_SetMaxEscalationLevel::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Chr_PlayerCrouch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_Once::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Custom_Hiding_Vignette_controller::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Custom_Hiding_Controller::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TorchDynamicMovement::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EQUIPPABLE_ITEM::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AIMED_ITEM::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MELEE_WEAPON::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AIMED_WEAPON::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerWeaponMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RemoveWeaponsFromPlayer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerDiscardsWeapons::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerDiscardsItems::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerDiscardsTools::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_GiveToCharacter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_GiveToPlayer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_ImpactEffect::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_ImpactFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_AttackerFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_TargetObjectFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_ImpactInspector::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_DamageFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_MultiFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_ImpactCharacterFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_Effect::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_AmmoTypeFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_ImpactAngleFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::WEAPON_ImpactOrientationFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EFFECT_ImpactGenerator::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EFFECT_EntityGenerator::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EFFECT_DirectionalPhysics::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VariableBool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VariableFlashScreenColour::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NonPersistentBool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GameDVR::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Zone::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ZoneLink::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FlushZoneCache::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::StateQuery::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BooleanLogicInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LogicOnce::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LogicDelay::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerSimple::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LogicSwitch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LogicGate::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BooleanLogicOperation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatMath_All::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatMath::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatOperation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatCompare::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatModulate::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatModulateRandom::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatLinearProportion::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatGetLinearProportion::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatLinearInterpolateTimed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatLinearInterpolateSpeed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatLinearInterpolateSpeedAdvanced::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatSmoothStep::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FloatClamp::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FilterAbsorber::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IntegerMath_All::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IntegerMath::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IntegerOperation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IntegerCompare::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IntegerAnalyse::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetEnum::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetString::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorMath::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorScale::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorNormalise::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorModulus::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScalarProduct::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorDirection::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorYaw::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorRotateYaw::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorRotateRoll::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorRotatePitch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorRotateByPos::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorMultiplyByPos::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorDistance::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorReflect::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetVector::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetVector2::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetColour::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetTranslation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetRotation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetComponentInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetPosition::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PositionDistance::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorLinearProportion::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorLinearInterpolateTimed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VectorLinearInterpolateSpeed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MoveInTime::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SmoothMove::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RotateInTime::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RotateAtSpeed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PointAt::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetLocationAndOrientation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ApplyRelativeTransform::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RandomFloat::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RandomInt::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RandomBool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RandomVector::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RandomSelect::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerRandom::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerRandomSequence::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Persistent_TriggerRandomSequence::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerWeightedRandom::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayEnvironmentAnimation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LevelLoaded::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CAGEAnimation::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MultitrackLoop::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerSequence::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Checkpoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SaveGlobalProgression::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetAsActiveMissionLevel::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugLoadCheckpoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GameStateChanged::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DisplayMessage::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DisplayMessageWithCallbacks::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugCheckpoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Benchmark::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EndGame::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LeaveGame::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugTextStacking::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugText::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TutorialMessage::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugEnvironmentMarker::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugCaptureScreenShot::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugCaptureCorpse::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugMenuToggle::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TogglePlayerTorch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerTorch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Master::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ExclusiveMaster::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ThinkOnce::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Thinker::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AllPlayersReady::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SyncOnAllPlayers::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SyncOnFirstPlayer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ParticipatingPlayersList::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NetPlayerCounter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BroadcastTrigger::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::HostOnlyTrigger::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SpawnGroup::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RespawnExcluder::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RespawnConfig::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NetworkedTimer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EggSpawner::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RandomObjectSelector::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CompoundVolume::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerVolumeFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerVolumeFilter_Monitored::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerObjectsFilter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BindObjectsMultiplexer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerObjectsFilterCounter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerContainerObjectsFilterCounter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerTouch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerDamaged::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerBindCharacter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerBindAllCharactersOfType::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerBindCharactersInSquad::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerUnbindCharacter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerExtractBoundObject::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerExtractBoundCharacter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerDelay::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerSwitch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerSelect::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerSelect_Direct::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerCheckDifficulty::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerSync::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LogicAll::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Logic_MultiGate::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Counter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LogicCounter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LogicPressurePad::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetObject::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GateResourceInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Door::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MonitorPadInput::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MonitorActionMap::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::InhibitActionsUntilRelease::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PadLightBar::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PadRumbleImpulse::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerViewCone::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerCameraViewCone::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerCameraViewConeMulti::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerCameraVolume::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Character::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DespawnPlayer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DespawnCharacter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FilterIsInWeaponRange::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerWhenSeeTarget::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Task::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FlareTask::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IdleTask::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FollowTask::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_ForceNextJob::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetRateOfFire::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetFiringRhythm::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetFiringAccuracy::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_ResetFiringStats::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerBindAllNPCs::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Trigger_AudioOccluded::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SwitchLevel::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundPlaybackBaseClass::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sound::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Speech::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_DynamicDialogue::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_DynamicDialogueGlobalRange::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_PlayNPCBark::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SpeechScript::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundSpline::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundLoadBank::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundLoadSlot::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundSetRTPC::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundSetState::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundSetSwitch::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundImpact::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundBarrier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MusicController::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MusicTrigger::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundRTPCController::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundTimelineTrigger::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SoundPlayerFootwearOverride::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AddToInventory::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RemoveFromInventory::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LimitItemUse::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerHasItemEntity::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::InventoryItem::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PickupSpawner::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MultiplePickupSpawner::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AddItemsToGCPool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetupGCDistribution::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AllocateGCItemsFromPool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AllocateGCItemFromPoolBySubset::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::QueryGCItemPool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RemoveFromGCItemPool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FlashScript::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UI_KeyGate::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RTT_MoviePlayer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MoviePlayer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DurangoVideoCapture::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VideoCapture::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ToggleFunctionality::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FlashInvoke::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MotionTrackerPing::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CHR_SetShowInMotionTracker::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EnableMotionTrackerPassiveAudio::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PopupMessage::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UIBreathingGameIcon::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GenericHighlightEntity::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UI_Icon::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UI_Attached::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UI_Container::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UI_ReactionGame::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UI_Keypad::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::HackingGame::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetHackingToolLevel::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TerminalFolder::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AccessTerminal::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetGatingToolLevel::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetGatingToolLevel::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetPlayerHasGatingTool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetPlayerHasKeycard::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetPlayerHasKeycard::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetPlayerHasGatingTool::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CollectSevastopolLog::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CollectNostromoLog::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CollectIDTag::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::StartNewChapter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UnlockLogEntry::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MapAnchor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MapItem::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UnlockMapDetail::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RewireSystem::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::RewireAccess_Point::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Rewire::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetMotionTrackerRange::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetGamepadAxes::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetGameplayTips::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GameOver::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Minigames::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetBlueprintInfo::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetBlueprintLevel::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetBlueprintAvailable::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetSelectedCharacterId::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetNextPlaylistLevelName::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IsPlaylistTypeSingle::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IsPlaylistTypeAll::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IsPlaylistTypeMarathon::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IsCurrentLevelAChallengeMap::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IsCurrentLevelAPreorderMap::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetCurrentPlaylistLevelIndex::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetObjectiveCompleted::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GameOverCredits::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GoToFrontend::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TriggerLooper::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CoverLine::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_ContinuousLadder::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_ContinuousPipe::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_ContinuousLedge::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_ContinuousClimbingWall::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_ContinuousCinematicSidle::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_ContinuousBalanceBeam::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_ContinuousTightGap::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_1ShotVentEntrance::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_1ShotVentExit::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_1ShotFloorVentEntrance::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_1ShotFloorVentExit::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_1ShotClimbUnder::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_1ShotLeap::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::TRAV_1ShotSpline::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NavMeshBarrier::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PathfindingTeleportNode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PathfindingWaitNode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PathfindingManualNode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PathfindingAlienBackstageNode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ChokePoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NPC_SetChokePoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Planet::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SpaceTransform::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SpaceSuitVisor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::NonInteractiveWater::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Refraction::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FogPlane::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PostprocessingSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BloomSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ColourSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FlareSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::HighSpecMotionBlurSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FilmGrainSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::VignetteSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DistortionSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SharpnessSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LensDustSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::IrawanToneMappingSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::HableToneMappingSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DayToneMappingSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LightAdaptationSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ColourCorrectionTransition::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProjectileMotion::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProjectileMotionComplex::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SplineDistanceLerp::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MoveAlongSpline::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetSplineLength::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetPointOnSpline::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetClosestPercentOnSpline::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetClosestPointOnSpline::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetClosestPoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetClosestPointFromSet::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetCentrePoint::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FogSetting::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FullScreenBlurSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DistortionOverlay::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FullScreenOverlay::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DepthOfFieldSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ChromaticAberrations::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScreenFadeOutToBlack::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScreenFadeOutToBlackTimed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScreenFadeOutToWhite::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScreenFadeOutToWhiteTimed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScreenFadeIn::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ScreenFadeInTimed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LowResFrameCapture::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BlendLowResFrame::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AreaHitMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ENT_Debug_Exit_Game::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::StreamingMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Raycast::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PhysicsApplyImpulse::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PhysicsApplyVelocity::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PhysicsModifyGravity::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PhysicsApplyBuoyancy::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AssetSpawner::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProximityTrigger::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::CharacterAttachmentNode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MultipleCharacterAttachmentNode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AnimatedModelAttachmentNode::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GetCharacterRotationSpeed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LevelCompletionTargets::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EnvironmentMap::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Showlevel_Completed::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Display_Element_On_Map::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Map_Floor_Change::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Force_UI_Visibility::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AddExitObjective::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetPrimaryObjective::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetSubObjective::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ClearPrimaryObjective::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ClearSubObjective::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UpdatePrimaryObjective::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UpdateSubObjective::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DebugGraph::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::UnlockAchievement::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AchievementMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AchievementStat::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AchievementUniqueCounter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SetRichPresence::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SmokeCylinder::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SmokeCylinderAttachmentInterface::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PointTracker::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ThrowingPointOfImpact::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::MotionTrackerMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GlobalEvent::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GlobalEventMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerLightProbe::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerKilledAllyMonitor::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AILightCurveSettings::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::InteractiveMovementControl::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayForMinDuration::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::GCIP_WorldPickup::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Torch_Control::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::DoorStatus::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Interaction::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::BulletChamber::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::PlayerDeathCounter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ElapsedTimer::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::LeaderboardWriter::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::ProximityDetector::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::FakeAILightSourceInPlayersHand::on_custom_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::EntityManager::call_entity_method(CATHODE::ShortGuid const&, bool&, CATHODE::MemoryPtr<CATHODE::Entity>&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
```

### cathode_guid.cpp
```c++
CATHODE::LongGuid::as_string() const
CATHODE::ShortGuid::ShortGuid(char const*)
CATHODE::ShortGuid::as_string() const
CATHODE::ShortGuid::combine(CATHODE::ShortGuid const&)
CATHODE::LongGuid::LongGuid(char const*)

/*__MergedGlobals*/
CATHODE::invalid_guid
CATHODE::invalid_entity_guid
CATHODE::invalid_class_guid
CATHODE::invalid_element_guid
CATHODE::invalid_resource_guid
```

### cathode_log.cpp
```c++
CATHODE::CathodeProfileNode::CathodeProfileNode(char const*)
CATHODE::CathodeProfileNode::CathodeProfileNode(char const*, char const*)
CATHODE::CathodeProfileNode::~CathodeProfileNode()
```

### cathode_memory_manager.cpp
```c++
CATHODE::MemoryManager::MemoryManager()
CATHODE::MemoryManager::create_instance()
CATHODE::MemoryManager::report_mem_used(unsigned long&, unsigned long&, unsigned long&, unsigned long&, unsigned long&, unsigned long&)
CATHODE::MemoryManager::validate()

CATHODE::memory_tracking
CATHODE::tracking_entries
CATHODE::MemoryManager::m_instance
```

### cathode_persistent_variables.cpp
```c++
CATHODE::PeristentVariableStore::create_instance()
CATHODE::PeristentVariableStore::flush()
CATHODE::PeristentVariableStore::update_variable(CATHODE::EntityHandle const&, bool const&)
std::__1::vector<CATHODE::PeristentVariableStore::VariableStorage, std::__1::allocator<CATHODE::PeristentVariableStore::VariableStorage> >::insert(std::__1::__wrap_iter<CATHODE::PeristentVariableStore::VariableStorage const*>, CATHODE::PeristentVariableStore::VariableStorage const&)
CATHODE::PeristentVariableStore::update_variable(CATHODE::EntityHandle const&, int const&)
CATHODE::PeristentVariableStore::update_variable(CATHODE::EntityHandle const&, float const&)
CATHODE::PeristentVariableStore::update_variable(CATHODE::EntityHandle const&, unsigned int const&)
CATHODE::PeristentVariableStore::find_variable(CATHODE::EntityHandle const&, bool&) const
CATHODE::PeristentVariableStore::find_variable(CATHODE::EntityHandle const&, int&) const
CATHODE::PeristentVariableStore::find_variable(CATHODE::EntityHandle const&, float&) const
CATHODE::PeristentVariableStore::find_variable(CATHODE::EntityHandle const&, unsigned int&) const
CATHODE::PeristentVariableStore::remove_variable(CATHODE::EntityHandle const&)
CATHODE::PeristentVariableStore::read(CATHODE::RawPersistentVarialbes const&)
CATHODE::PeristentVariableStore::write(CATHODE::RawPersistentVarialbes&) const
CATHODE::PeristentVariableStore::read_binary(char const*)
std::__1::vector<CATHODE::PeristentVariableStore::VariableStorage, std::__1::allocator<CATHODE::PeristentVariableStore::VariableStorage> >::__append(unsigned long, CATHODE::PeristentVariableStore::VariableStorage const&)
std::__1::__throw_length_error(char const*)
std::length_error::length_error(char const*)

CATHODE::PeristentVariableStore::m_instance
```

### cathode_position_variable.cpp
```c++
CATHODE::Position::rotation_RAW() const
CATHODE::Position::Position(CA::Vector const&, CA::Vector const&)
CATHODE::Position::linear_interpolate(CATHODE::Position const&, CATHODE::Position const&, float)
CATHODE::Position::yaw() const
CATHODE::Position::pitch() const
CATHODE::Position::roll() const
CATHODE::SplinePoint::operator!=(CATHODE::SplinePoint const&) const

CATHODE::invalid_spline_point
CATHODE::MemoryAllocation<CATHODE::SplinePoint>::m_tracker
```

### cathode_reference_frame.cpp
```c++
CATHODE::ReferenceFrame::ReferenceFrame(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)
CATHODE::ReferenceFrame::~ReferenceFrame()
CATHODE::ReferenceFrame::~ReferenceFrame()
CATHODE::ReferenceFrame::release(CATHODE::MemoryPtr<CATHODE::ReferenceFrame>)
CATHODE::ReferenceFrame::detach_all(CATHODE::MemoryPtr<CATHODE::ReferenceFrame>)
CATHODE::ReferenceFrame::detach_from_parent(CATHODE::MemoryPtr<CATHODE::ReferenceFrame>)
CATHODE::ReferenceFrame::detach_all_children(CATHODE::MemoryPtr<CATHODE::ReferenceFrame>)
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >::release()
CATHODE::ReferenceFrame::attach_child(CATHODE::MemoryPtr<CATHODE::ReferenceFrame>, CATHODE::MemoryPtr<CATHODE::ReferenceFrame>)
CATHODE::ReferenceFrame::get_world_position() const
CATHODE::ReferenceFrame::set_world_position(CATHODE::Position const&)
CATHODE::ReferenceFrame::update_local_transform(CATHODE::Position const&)
CATHODE::AttachmentInterface::create_reference_frame(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)
CATHODE::AttachmentInterface::get_ReferenceFramePtr(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::AttachmentInterface::destroy_reference_frame(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::AttachmentInterface::is_attachment_root(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::AttachmentInterface::on_reposition(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AttachmentInterface::get_Position(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::AttachmentInterface::update_position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)
CATHODE::AttachmentInterface::set_Position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)
CATHODE::AttachmentInterface::on_deactivate(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AttachmentInterface::on_attach(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AttachmentInterface::on_detach(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::AttachmentInterface::is_in_relative_default_position(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::AttachmentInterface::save_position(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::AttachmentInterface::load_position(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::AttachmentInterface::save_position_compact(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::AttachmentInterface::load_position_compact(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::AttachmentInterface::~AttachmentInterface()
CATHODE::AttachmentInterface::~AttachmentInterface()
CATHODE::AttachmentInterface::set_implementation_size(unsigned long)
CATHODE::AttachmentInterface::get_implementation_size() const
CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >::pop()
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >::pool() const
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >::item_size() const

CATHODE::ReferenceFrame::detach_all_children(CATHODE::MemoryPtr<CATHODE::ReferenceFrame>) [clone .cold.1]
CATHODE::AttachmentInterface::on_reposition(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&) [clone .cold.1]

typeinfo name for CATHODE::AttachmentInterface
typeinfo name for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >
vtable for CATHODE::AttachmentInterface
typeinfo for CATHODE::AttachmentInterface
vtable for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >
typeinfo for CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >
CATHODE::SAVE_POS_GUID
CATHODE::MemoryAllocation<CATHODE::ReferenceFrame>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::ReferenceFrame> >::m_tracker
```

### cathode_resource_database.cpp
```c++
CATHODE::ResourceDatabase::ResourceDatabase()
CATHODE::ArrayPtr<CATHODE::ResourceDatabase::ResourceKey>::~ArrayPtr()
CATHODE::ResourceDatabase::ResourceDatabase()
CATHODE::ResourceDatabase::~ResourceDatabase()
CATHODE::ResourceDatabase::initialise()
CATHODE::ResourceDatabase::uninitialise()
CATHODE::ResourceDatabase::destroy_resources()
CATHODE::ArrayPtr<CATHODE::ResourceDatabase::ResourceKey>::clear()
CATHODE::ResourceDatabase::size_of_database() const
CATHODE::ResourceDatabase::find_resource_ptr(CATHODE::ShortGuid const&, unsigned int) const
CATHODE::ResourceDatabase::add_resource_ptr(unsigned int, CATHODE::MemoryPtr<CATHODE::EntityResourceInterface> const&)
CATHODE::ResourceRegistry::ResourceRegistry()
CATHODE::ResourceRegistry::uninitialise()
CATHODE::ResourceRegistry::initialise(char const*)
CATHODE::ResourceRegistry::create_instance()
CATHODE::ResourceRegistry::find_resource_index(CATHODE::ShortGuid const&, CATHODE::ShortGuid const&) const
CATHODE::MemoryAllocation<CATHODE::ResourceDatabase::ResourceKey>::pool() const
CATHODE::MemoryAllocation<CATHODE::ResourceDatabase::ResourceKey>::item_size() const
CATHODE::MemoryAllocation<CATHODE::ResourceRegistry::ResourceKey>::pool() const
CATHODE::MemoryAllocation<CATHODE::ResourceRegistry::ResourceKey>::item_size() const

typeinfo name for CATHODE::MemoryAllocation<CATHODE::ResourceDatabase::ResourceKey>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::ResourceRegistry::ResourceKey>
vtable for CATHODE::MemoryAllocation<CATHODE::ResourceDatabase::ResourceKey>
typeinfo for CATHODE::MemoryAllocation<CATHODE::ResourceDatabase::ResourceKey>
vtable for CATHODE::MemoryAllocation<CATHODE::ResourceRegistry::ResourceKey>
typeinfo for CATHODE::MemoryAllocation<CATHODE::ResourceRegistry::ResourceKey>
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::EntityResourceInterface> >::m_tracker
CATHODE::MemoryAllocation<CATHODE::ResourceRegistry::ResourceKey>::m_tracker
CATHODE::MemoryAllocation<CATHODE::ResourceDatabase::ResourceKey>::m_tracker
CATHODE::ResourceRegistry::m_instance
```

### cathode_resource_interface.cpp
```c++
CATHODE::CONTAINER_FOR_UniqueCharacterID::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_CHARACTER::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_LOGIC_CHARACTER::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_CHARACTER_COMMAND_APPLICATOR::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_SOUND_OBJECT::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_EQUIPPABLE_ITEM_INSTANCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_AIMED_ITEM_INSTANCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_MELEE_WEAPON_INSTANCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_AIMED_WEAPON_INSTANCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_INVENTORY_ITEM_QUANTITY::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_SPLINE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_JOB_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_TASK_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_NPC_AREA_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_CAMERA_INSTANCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_CAMERA_PATH_INSTANCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_ANIMATION_CHANNEL::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_REWIRE_SYSTEM::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_REWIRE_LOCATION::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_MAP_ANCHOR_DETAILS::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_VENT_ENTRANCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_VENT_SYSTEM::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_SUSPICIOUS_ITEM_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_SQUAD_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_NPC_COMBAT_AREA_LIST_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_REWIRE_ACCESS_POINT::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_REWIRE_POWER_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_PLAY_ANIMATION_DATA_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_BACKSTAGE_VENT_ANIM_RESOURCE_DATA::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_MATCHED_PAIR_ANIM_RESOURCE_DATA::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_VENT_KILLTRAP_PRIORITY_DATA::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_CHOKE_POINT_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_EXCLUSIVE_MASTER_STATE_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_EXCLUSIVE_MASTER_STATE_RESOURCE::destroy()
CATHODE::CONTAINER_FOR_MINT_RIGID::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_MOVER_DESCRIPTOR_OFFLINE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_TERMINAL_FOLDER_DETAILS::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_TERMINAL_CONTENT_DETAILS::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
CATHODE::CONTAINER_FOR_ANIMATION_MASK_RESOURCE::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int, unsigned int, CATHODE::Position const&)
RENDERABLE_INSTANCE* CATHODE::get_resource_as_type<RENDERABLE_INSTANCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
COLLISION_MAPPING* CATHODE::get_resource_as_type<COLLISION_MAPPING>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
UniqueCharacterID* CATHODE::get_resource_as_type<UniqueCharacterID>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CHARACTER* CATHODE::get_resource_as_type<CHARACTER>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
LOGIC_CHARACTER* CATHODE::get_resource_as_type<LOGIC_CHARACTER>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CHARACTER_COMMAND_APPLICATOR* CATHODE::get_resource_as_type<CHARACTER_COMMAND_APPLICATOR>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
ANIMATED_MODEL* CATHODE::get_resource_as_type<ANIMATED_MODEL>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
DYNAMIC_PHYSICS_SYSTEM* CATHODE::get_resource_as_type<DYNAMIC_PHYSICS_SYSTEM>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
SOUND_OBJECT* CATHODE::get_resource_as_type<SOUND_OBJECT>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
EQUIPPABLE_ITEM_INSTANCE* CATHODE::get_resource_as_type<EQUIPPABLE_ITEM_INSTANCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
AIMED_ITEM_INSTANCE* CATHODE::get_resource_as_type<AIMED_ITEM_INSTANCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
MELEE_WEAPON_INSTANCE* CATHODE::get_resource_as_type<MELEE_WEAPON_INSTANCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
AIMED_WEAPON_INSTANCE* CATHODE::get_resource_as_type<AIMED_WEAPON_INSTANCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
INVENTORY_ITEM_QUANTITY* CATHODE::get_resource_as_type<INVENTORY_ITEM_QUANTITY>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
NAV_MESH_BARRIER_RESOURCE* CATHODE::get_resource_as_type<NAV_MESH_BARRIER_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
SPLINE* CATHODE::get_resource_as_type<SPLINE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
TASK_RESOURCE* CATHODE::get_resource_as_type<TASK_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
NPC_AREA_RESOURCE* CATHODE::get_resource_as_type<NPC_AREA_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CAMERA_INSTANCE* CATHODE::get_resource_as_type<CAMERA_INSTANCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
REWIRE_SYSTEM* CATHODE::get_resource_as_type<REWIRE_SYSTEM>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
REWIRE_LOCATION* CATHODE::get_resource_as_type<REWIRE_LOCATION>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
VENT_ENTRANCE* CATHODE::get_resource_as_type<VENT_ENTRANCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
VENT_SYSTEM* CATHODE::get_resource_as_type<VENT_SYSTEM>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
SUSPICIOUS_ITEM_RESOURCE* CATHODE::get_resource_as_type<SUSPICIOUS_ITEM_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
SQUAD_RESOURCE* CATHODE::get_resource_as_type<SQUAD_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
NPC_COMBAT_AREA_LIST_RESOURCE* CATHODE::get_resource_as_type<NPC_COMBAT_AREA_LIST_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
REWIRE_ACCESS_POINT* CATHODE::get_resource_as_type<REWIRE_ACCESS_POINT>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
PLAY_ANIMATION_DATA_RESOURCE* CATHODE::get_resource_as_type<PLAY_ANIMATION_DATA_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CHOKE_POINT_RESOURCE* CATHODE::get_resource_as_type<CHOKE_POINT_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
MOVER_DESCRIPTOR_OFFLINE* CATHODE::get_resource_as_type<MOVER_DESCRIPTOR_OFFLINE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
TERMINAL_FOLDER_DETAILS* CATHODE::get_resource_as_type<TERMINAL_FOLDER_DETAILS>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
TERMINAL_CONTENT_DETAILS* CATHODE::get_resource_as_type<TERMINAL_CONTENT_DETAILS>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
ANIMATION_MASK_RESOURCE* CATHODE::get_resource_as_type<ANIMATION_MASK_RESOURCE>(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::CONTAINER_FOR_EXCLUSIVE_MASTER_STATE_RESOURCE::resource_class_guid() const

typeinfo name for CATHODE::CONTAINER_FOR_EXCLUSIVE_MASTER_STATE_RESOURCE
typeinfo name for CATHODE::EXCLUSIVE_MASTER_STATE_RESOURCE__Class
vtable for CATHODE::CONTAINER_FOR_EXCLUSIVE_MASTER_STATE_RESOURCE
typeinfo for CATHODE::EXCLUSIVE_MASTER_STATE_RESOURCE__Class
typeinfo for CATHODE::CONTAINER_FOR_EXCLUSIVE_MASTER_STATE_RESOURCE
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_RENDERABLE_INSTANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_TRAVERSAL_SEGMENT>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_CATHODE_COVER_SEGMENT>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_COLLISION_MAPPING>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_UniqueCharacterID>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_CHARACTER>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_LOGIC_CHARACTER>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_CHARACTER_COMMAND_APPLICATOR>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_ANIMATED_MODEL>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_DYNAMIC_PHYSICS_SYSTEM>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_SOUND_OBJECT>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_EQUIPPABLE_ITEM_INSTANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_AIMED_ITEM_INSTANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_MELEE_WEAPON_INSTANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_AIMED_WEAPON_INSTANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_INVENTORY_ITEM_QUANTITY>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_NAV_MESH_BARRIER_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_SPLINE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_JOB_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_TASK_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_NPC_AREA_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_CAMERA_INSTANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_CAMERA_PATH_INSTANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_ANIMATION_CHANNEL>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_REWIRE_SYSTEM>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_REWIRE_LOCATION>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_MAP_ANCHOR_DETAILS>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_VENT_ENTRANCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_VENT_SYSTEM>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_SUSPICIOUS_ITEM_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_SQUAD_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_NPC_COMBAT_AREA_LIST_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_REWIRE_ACCESS_POINT>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_REWIRE_POWER_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_PLAY_ANIMATION_DATA_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_BACKSTAGE_VENT_ANIM_RESOURCE_DATA>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_MATCHED_PAIR_ANIM_RESOURCE_DATA>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_VENT_KILLTRAP_PRIORITY_DATA>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_CHOKE_POINT_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_EXCLUSIVE_MASTER_STATE_RESOURCE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_MINT_RIGID>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_MOVER_DESCRIPTOR_OFFLINE>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_TERMINAL_FOLDER_DETAILS>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_TERMINAL_CONTENT_DETAILS>::m_tracker
CATHODE::MemoryAllocation<CATHODE::CONTAINER_FOR_ANIMATION_MASK_RESOURCE>::m_tracker
```

### cathode_sequence.cpp
```c++
CATHODE::TriggerSequence::create(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::MemoryPtr<CATHODE::Entity> CATHODE::EntityManager::create_entity<CATHODE::Sequence>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::ArrayPtr<CATHODE::SequenceData::SequenceEntry>::~ArrayPtr()
CATHODE::SequenceData::SequenceData(CATHODE::ShortGuid const&)
CATHODE::SequenceData::~SequenceData()
CATHODE::ArrayPtr<CATHODE::SequenceData::SequenceEntry>::release()
CATHODE::ArrayPtr<CATHODE::SequenceData::MethodEntry>::~ArrayPtr()
CATHODE::SequenceData::~SequenceData()
CATHODE::SequenceData::add_method(char const*)
CATHODE::ArrayPtr<CATHODE::SequenceData::MethodEntry>::push_sort(CATHODE::SequenceData::MethodEntry const&)
CATHODE::SequenceData::add_entity(CATHODE::EntityPathStore const&, float const&)
CATHODE::SequenceData::remove_all_entities()
CATHODE::MemoryPtr<CATHODE::Sequence> CATHODE::MemoryPool::allocate_item<CATHODE::Sequence, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&)
CATHODE::MemoryAllocation<CATHODE::Sequence>::pool() const
CATHODE::MemoryAllocation<CATHODE::Sequence>::item_size() const
CATHODE::Sequence::~Sequence()
CATHODE::Sequence::~Sequence()
CATHODE::Sequence::num_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::Sequence::get_entity(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int) const
CATHODE::Sequence::append_all_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::Sequence::set_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&)
CATHODE::Sequence::clear_zone(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::ZoneInstance>&)
CATHODE::Sequence::set_exclusive_master_number(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int const&)
CATHODE::Sequence::set_lighting_master_number(CATHODE::MemoryPtr<CATHODE::Entity> const&, unsigned int const&)
CATHODE::Sequence::find_all_physics_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::Sequence::find_all_collision_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::Entity> >&) const
CATHODE::Sequence::visit_all_model_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityVisitor&) const
CATHODE::Sequence::on_proxy_disable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_proxy_enable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_live_edit(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_shutdown(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_suspended(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_allowed(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_invisible(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_visible(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_ghosted(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_solid(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_frozen(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_unfrozen(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_floating(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_sinking(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_revert(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_method(CATHODE::ShortGuid const&, CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::on_attach(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::Sequence::apply_context(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, unsigned short)
CATHODE::Sequence::on_restore(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::~Sequence()
non-virtual thunk to CATHODE::Sequence::~Sequence()
non-virtual thunk to CATHODE::Sequence::on_method(CATHODE::ShortGuid const&, CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_live_edit(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_invisible(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_visible(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_ghosted(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_solid(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_frozen(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_unfrozen(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_suspended(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_allowed(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_shutdown(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_revert(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_restore(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_attach(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_floating(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_sinking(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_proxy_enable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::on_proxy_disable(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
non-virtual thunk to CATHODE::Sequence::apply_context(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, unsigned short)
CATHODE::Sequence::~Sequence()
CATHODE::ArrayPtr<CATHODE::SequenceEntity>::release()
CATHODE::Sequence::entity_removed_from_sequence(CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::MemoryPtr<CATHODE::Entity>)
CATHODE::MemoryAllocation<CATHODE::SequenceEntity>::pool() const
CATHODE::MemoryAllocation<CATHODE::SequenceEntity>::item_size() const
CATHODE::ArrayPtr<CATHODE::SequenceEntity>::pop()
CATHODE::MemoryAllocation<CATHODE::SequenceData::MethodEntry>::pool() const
CATHODE::MemoryAllocation<CATHODE::SequenceData::MethodEntry>::item_size() const
CATHODE::MemoryAllocation<CATHODE::SequenceData::SequenceEntry>::pool() const
CATHODE::MemoryAllocation<CATHODE::SequenceData::SequenceEntry>::item_size() const

CATHODE::Sequence::on_live_edit(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&) [clone .cold.1]
typeinfo name for CATHODE::MemoryAllocation<CATHODE::Sequence>
typeinfo name for CATHODE::Sequence
typeinfo name for CATHODE::MemoryAllocation<CATHODE::SequenceEntity>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::SequenceData::MethodEntry>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::SequenceData::SequenceEntry>
vtable for CATHODE::MemoryAllocation<CATHODE::Sequence>
typeinfo for CATHODE::MemoryAllocation<CATHODE::Sequence>
vtable for CATHODE::Sequence
typeinfo for CATHODE::Sequence
vtable for CATHODE::MemoryAllocation<CATHODE::SequenceEntity>
typeinfo for CATHODE::MemoryAllocation<CATHODE::SequenceEntity>
vtable for CATHODE::MemoryAllocation<CATHODE::SequenceData::MethodEntry>
typeinfo for CATHODE::MemoryAllocation<CATHODE::SequenceData::MethodEntry>
vtable for CATHODE::MemoryAllocation<CATHODE::SequenceData::SequenceEntry>
typeinfo for CATHODE::MemoryAllocation<CATHODE::SequenceData::SequenceEntry>
CATHODE::MemoryAllocation<unsigned int>::m_tracker
CATHODE::MemoryAllocation<CATHODE::SequenceData::SequenceEntry>::m_tracker
CATHODE::MemoryAllocation<CATHODE::SequenceData::MethodEntry>::m_tracker
CATHODE::MemoryAllocation<CATHODE::SequenceEntity>::m_tracker
CATHODE::MemoryAllocation<CATHODE::Sequence>::m_tracker
```

### cathode_snapshot.cpp
```c++
CATHODE::SnapshotWalker::SnapshotWalker()
CATHODE::SnapshotSmallHeader::SnapshotSmallHeader()
CATHODE::SnapshotSmallHeader::is_small_header_valid() const
CATHODE::SnapshotCheckpointHeader::format_title(char16_t const*, unsigned int, unsigned int, char16_t*, unsigned int)
CATHODE::calc_checksum(CATHODE::SnapshotSmallHeader const*)
CATHODE::calc_checksum(char const*, unsigned long)
CATHODE::calc_byte_offset(CATHODE::SnapshotSmallHeader const*, char const*)
CATHODE::calc_buffer_size(CATHODE::SnapshotSmallHeader const*, char const*, unsigned int)
CATHODE::SnapshotWalker::init(CATHODE::SnapshotSmallHeader*, char const*)
CATHODE::SnapshotWalker::save_node(CATHODE::ShortGuid const&, unsigned int, char const*, bool)
CATHODE::SnapshotWalker::save_leaf(CATHODE::ShortGuid const&, unsigned int, char const*)
CATHODE::SnapshotWalker::save_raw_data(unsigned int, char const*)
CATHODE::SnapshotWalker::pop_save_node(bool)
CATHODE::SnapshotWalker::find_chunk(CATHODE::ShortGuid const&)
CATHODE::SnapshotWalker::start_load()
CATHODE::SnapshotWalker::end_load()
CATHODE::SnapshotWalker::start_save(char*, unsigned int)
CATHODE::SnapshotWalker::end_save()
CATHODE::SnapshotMemory::initialize()
CATHODE::SnapshotMemory::reset()
CATHODE::SnapshotMemory::release()
CATHODE::SnapshotMemory::start_load()
CATHODE::SnapshotMemory::end_load()
CATHODE::SnapshotMemory::start_save(CATHODE::EntityHandle const&)
CATHODE::SnapshotMemory::end_save()
CATHODE::SnapshotMemory::recalc_checksum()
CATHODE::SnapshotMemory::is_valid()
CATHODE::SnapshotMemory::get_current_checkpoint()
CATHODE::SnapshotMemory::get_capture_game_time()
CATHODE::SnapshotMemory::set_level(char const*)
CATHODE::SnapshotMemory::set_header_params(unsigned int, char const*, char16_t const*, CATHODE::PackageIdType, unsigned long long, unsigned int, bool, char const*, bool)
CATHODE::SnapshotMemory::change_death_counters(unsigned int, unsigned int, bool, bool)
CATHODE::SnapshotMemory::format_title(char16_t const*, unsigned int, unsigned int)
CATHODE::SnapshotMemory::get_level_name()
CATHODE::SnapshotMemory::get_header()
CATHODE::SnapshotMemory::persistent_variables()
CATHODE::SnapshotMemory::set_save_date_to_now()
CATHODE::SnapshotMemory::get_buffer()
CATHODE::SnapshotMemory::get_buffer_size()
CATHODE::SnapshotMemory::is_valid_normal_checkpoint()
CATHODE::SaveState::SaveState(CATHODE::ShortGuid const&, unsigned int, CATHODE::CHUNK_HEADER::EntityStateFlagsID, CATHODE::SnapshotWalker&)
CATHODE::SaveState::save_node(CATHODE::ShortGuid const&, unsigned int, char const*)
CATHODE::SaveState::save_leaf(CATHODE::ShortGuid const&, unsigned int, char const*, CATHODE::SnapshotWalker&)
CATHODE::SaveState::save_raw(unsigned int, char const*, CATHODE::SnapshotWalker&)
CATHODE::SaveState::save_trigger_info_pointer(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&)
CATHODE::SaveState::save_trigger_info_array(CATHODE::ShortGuid const&, CATHODE::ArrayPtr<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> > const&)
CATHODE::SaveState::save_message_array(CATHODE::ShortGuid const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::EntityMessage> > const&)
CATHODE::SaveState::save_temporary_entity(CATHODE::MemoryPtr<CATHODE::TemporaryEntity> const&)
CATHODE::SaveState::can_be_saved(CATHODE::MemoryPtr<CATHODE::TemporaryEntity> const&)
CATHODE::SaveState::save_temporary_entities(CATHODE::ShortGuid const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> > const&)
CATHODE::SaveState::~SaveState()
CATHODE::LoadState::LoadState(CATHODE::ShortGuid const&, unsigned int&, CATHODE::CHUNK_HEADER::EntityStateFlagsID, CATHODE::SnapshotWalker&)
CATHODE::LoadState::load_node(CATHODE::ShortGuid const&, unsigned int, char*)
CATHODE::LoadState::load_leaf(CATHODE::ShortGuid const&, unsigned int, char*, CATHODE::SnapshotWalker&)
CATHODE::LoadState::load_raw(unsigned int, char*, CATHODE::SnapshotWalker&)
CATHODE::LoadState::load_trigger_info_pointer(CATHODE::MemoryRefPtr<CATHODE::TriggerInfo>&)
CATHODE::LoadState::load_trigger_info_array(CATHODE::ShortGuid const&, CATHODE::ArrayPtr<CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> >&)
CATHODE::LoadState::load_message_array(CATHODE::ShortGuid const&, CATHODE::ArrayPtr<CATHODE::MemoryPtr<CATHODE::EntityMessage> >&)
CATHODE::LoadState::load_temporary_entity()
CATHODE::LoadState::load_temporary_entities(CATHODE::ShortGuid const&)
CATHODE::LoadState::~LoadState()
CATHODE::CompactPosition::from_pos(CATHODE::Position const&)
CATHODE::CompactPosition::to_pos(CATHODE::Position&) const
CATHODE::CompactPosition::to_matrix(CA::Matrix&) const
CATHODE::CompactPositionWithAccuratePos::from_matrix(CA::Matrix const&)
CATHODE::CompactPositionWithAccuratePos::to_matrix(CA::Matrix&) const

CATHODE::SnapshotMemory::SNAPSHOT_MEMORY_SIZE
CATHODE::SnapshotSmallHeader::SNAPSHOT_HEADER_VERSION
CATHODE::SnapshotSmallHeader::SUB_ONE_V1_VERSION_NUMBER
CATHODE::SnapshotSmallHeader::AFTER_SUB_ONE_V1_VERSION_NUMBER
CATHODE::SnapshotSmallHeader::AFTER_SUB_ONE_V2_VERSION_NUMBER
CATHODE::SnapshotSmallHeader::AFTER_SUB_ONE_V3_VERSION_NUMBER
CATHODE::SnapshotSmallHeader::AFTER_SUB_TWO_V1_VERSION_NUMBER
CATHODE::CHUNK_HEADER::header_sizes
typeinfo name for CATHODE::MemoryAllocation<char>
typeinfo name for CATHODE::MemoryAllocation<CATHODE::EntityMessage>
CATHODE::NUM_ELEMENTS_GUID
CATHODE::SnapshotMemory::s_memory
CATHODE::SnapshotMemory::s_level_snapshot
CATHODE::SnapshotMemory::s_level_walker
CATHODE::SnapshotMemory::s_out_of_memory_counter
CATHODE::MemoryAllocation<char>::m_tracker
```

### cathode_string.cpp
```c++
CATHODE::StringTable::StringTable()
CATHODE::StringTable::create_instance()
CATHODE::StringTable::initialise()
CATHODE::StringTable::offset_from_string(char const*)
CATHODE::StringTable::uninitialise()
CATHODE::StringTable::offset_from_hash(CATHODE::ShortGuid const&)
CATHODE::StringTable::string_from_offset(unsigned int)
CATHODE::ArrayPtr<CATHODE::StringTable::TableEntry>::push_sort(CATHODE::StringTable::TableEntry const&)
CATHODE::StringTable::length_from_offset(unsigned int)
CATHODE::StringTable::hash_from_offset(unsigned int)
CATHODE::FilePath::FilePath(char const*)
CATHODE::MemoryAllocation<CATHODE::StringTable::TableEntry>::pool() const
CATHODE::MemoryAllocation<CATHODE::StringTable::TableEntry>::item_size() const

typeinfo name for CATHODE::MemoryAllocation<CATHODE::StringTable::TableEntry>
vtable for CATHODE::MemoryAllocation<CATHODE::StringTable::TableEntry>
typeinfo for CATHODE::MemoryAllocation<CATHODE::StringTable::TableEntry>
CATHODE::MemoryAllocation<CATHODE::StringTable::TableEntry>::m_tracker
CATHODE::StringTable::m_instance
```

### cathode_temporary_entity.cpp
```c++
CATHODE::TemporaryEntity::update_position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)
non-virtual thunk to CATHODE::TemporaryEntity::update_position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)
CATHODE::TemporaryEntity::get_as_ANIMATED_MODEL(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::TemporaryEntity::get_as_ANIMATED_MODEL(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::TemporaryEntity::get_as_DYNAMIC_PHYSICS_SYSTEM(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::TemporaryEntity::get_as_DYNAMIC_PHYSICS_SYSTEM(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::TemporaryEntity::release(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::TemporaryEntity::inner_call_triggers(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, double, bool) const
non-virtual thunk to CATHODE::TemporaryEntity::inner_call_triggers(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::MemoryRefPtr<CATHODE::TriggerInfo> const&, double, bool) const
CATHODE::TemporaryEntity::request_release_by_owning_system(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::TemporaryEntity::find_all_connectors(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::TemporaryEntity::get_proxy_target(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::TemporaryEntity::bind_object(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::EntityHandle const&)
CATHODE::MemoryPtr<CATHODE::VARIABLE_CONTAINER_OBJECT> CATHODE::MemoryPool::allocate_item<CATHODE::VARIABLE_CONTAINER_OBJECT, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData, CATHODE::EntityHandle>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&, CATHODE::EntityHandle const&)
CATHODE::TemporaryEntity::bind_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, bool const&)
CATHODE::MemoryPtr<CATHODE::VARIABLE_CONTAINER_BOOL> CATHODE::MemoryPool::allocate_item<CATHODE::VARIABLE_CONTAINER_BOOL, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData, bool>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&, bool const&)
CATHODE::TemporaryEntity::bind_int(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, int const&)
CATHODE::MemoryPtr<CATHODE::VARIABLE_CONTAINER_INT> CATHODE::MemoryPool::allocate_item<CATHODE::VARIABLE_CONTAINER_INT, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData, int>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&, int const&)
CATHODE::TemporaryEntity::bind_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, float const&)
CATHODE::MemoryPtr<CATHODE::VARIABLE_CONTAINER_FLOAT> CATHODE::MemoryPool::allocate_item<CATHODE::VARIABLE_CONTAINER_FLOAT, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData, float>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&, float const&)
CATHODE::TemporaryEntity::bind_vector(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CA::Vector const&)
CATHODE::MemoryPtr<CATHODE::VARIABLE_CONTAINER_VECTOR> CATHODE::MemoryPool::allocate_item<CATHODE::VARIABLE_CONTAINER_VECTOR, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData, CA::Vector>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&, CA::Vector const&)
CATHODE::TemporaryEntity::bind_position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CA::Matrix const&)
CATHODE::MemoryPtr<CATHODE::VARIABLE_CONTAINER_POSITION> CATHODE::MemoryPool::allocate_item<CATHODE::VARIABLE_CONTAINER_POSITION, CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::EntityInitialiserData, CA::Matrix>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::EntityInitialiserData const&, CA::Matrix const&)
CATHODE::TemporaryEntity::get_bound_bool(CATHODE::ShortGuid const&, bool&) const
CATHODE::TemporaryEntity::call_custom_method(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, unsigned int) const
CATHODE::TemporaryEntity::access_referenced_entities(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&) const
CATHODE::TemporaryEntity::set_proxy(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::TemporaryEntity::TemporaryEntity(CATHODE::EntityInitialiserData const&)
CATHODE::TemporaryEntity::TemporaryEntity(CATHODE::EntityInitialiserData const&)
CATHODE::TemporaryEntity::set_callback_function(void (*)(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&))
CATHODE::TemporaryEntity::set_owning_system(CATHODE::TEMPORARY_ENTITY_OWNER::ENUM)
CATHODE::TemporaryEntity::rebind_owning_system(CATHODE::TEMPORARY_ENTITY_OWNER::ENUM, void (*)(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&))
CATHODE::TemporaryEntity::bind_variables_from_cache(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::TemporaryEntity::disable_physics()
CATHODE::TemporaryEntity::disable_display()
CATHODE::TemporaryEntity::enable_display()
CATHODE::TemporaryEntity::bind_entity(CATHODE::MemoryPtr<CATHODE::Entity>, CATHODE::MemoryPtr<CATHODE::Entity>)
CATHODE::TemporaryEntity::set_local_only(bool)
CATHODE::TemporaryEntity::is_local_only() const
CATHODE::TemporaryEntity::save_variables() const
CATHODE::TemporaryEntity::save_variable(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::TemporaryEntity::load_variables(CATHODE::MemoryPtr<CATHODE::TemporaryEntity> const&)
CATHODE::TemporaryEntity::load_variable(CATHODE::MemoryPtr<CATHODE::Entity> const&)
CATHODE::TemporaryEntity::~TemporaryEntity()
CATHODE::TemporaryEntity::~TemporaryEntity()
non-virtual thunk to CATHODE::TemporaryEntity::~TemporaryEntity()
non-virtual thunk to CATHODE::TemporaryEntity::~TemporaryEntity()
CATHODE::TemporaryEntity::~TemporaryEntity()
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_OBJECT>::pool() const
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_OBJECT>::item_size() const
CATHODE::VARIABLE_CONTAINER_OBJECT::get_proxy_target(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_BOOL>::pool() const
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_BOOL>::item_size() const
CATHODE::VARIABLE_CONTAINER_BOOL::get_float(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::VARIABLE_CONTAINER_BOOL::set_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, bool const&)
CATHODE::VARIABLE_CONTAINER_BOOL::set_int(CATHODE::MemoryPtr<CATHODE::Entity> const&, int const&)
CATHODE::VARIABLE_CONTAINER_BOOL::set_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, float const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_BOOL::get_float(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_BOOL::set_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, bool const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_BOOL::set_int(CATHODE::MemoryPtr<CATHODE::Entity> const&, int const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_BOOL::set_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, float const&)
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_INT>::pool() const
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_INT>::item_size() const
CATHODE::VARIABLE_CONTAINER_INT::get_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::VARIABLE_CONTAINER_INT::get_float(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::VARIABLE_CONTAINER_INT::set_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, bool const&)
CATHODE::VARIABLE_CONTAINER_INT::set_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, float const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_INT::get_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_INT::get_float(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_INT::set_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, bool const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_INT::set_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, float const&)
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_FLOAT>::pool() const
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_FLOAT>::item_size() const
CATHODE::VARIABLE_CONTAINER_FLOAT::get_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::VARIABLE_CONTAINER_FLOAT::get_int(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
CATHODE::VARIABLE_CONTAINER_FLOAT::set_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, bool const&)
CATHODE::VARIABLE_CONTAINER_FLOAT::set_int(CATHODE::MemoryPtr<CATHODE::Entity> const&, int const&)
CATHODE::VARIABLE_CONTAINER_FLOAT::set_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, float const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_FLOAT::get_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_FLOAT::get_int(CATHODE::MemoryPtr<CATHODE::Entity> const&) const
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_FLOAT::set_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, bool const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_FLOAT::set_int(CATHODE::MemoryPtr<CATHODE::Entity> const&, int const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_FLOAT::set_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, float const&)
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_VECTOR>::pool() const
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_VECTOR>::item_size() const
CATHODE::VARIABLE_CONTAINER_VECTOR::get_implementation_size() const
CATHODE::VARIABLE_CONTAINER_VECTOR::set_Direction(CATHODE::MemoryPtr<CATHODE::Entity> const&, CA::Vector const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_VECTOR::set_Direction(CATHODE::MemoryPtr<CATHODE::Entity> const&, CA::Vector const&)
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_POSITION>::pool() const
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_POSITION>::item_size() const
CATHODE::VARIABLE_CONTAINER_POSITION::get_implementation_size() const
CATHODE::VARIABLE_CONTAINER_POSITION::set_Position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)
non-virtual thunk to CATHODE::VARIABLE_CONTAINER_POSITION::set_Position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::Position const&)

CATHODE::TemporaryEntity::bind_object(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::ShortGuid const&, CATHODE::EntityHandle const&) [clone .cold.1]
CATHODE::TemporaryEntity::bind_bool(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, bool const&) [clone .cold.1]
CATHODE::TemporaryEntity::bind_int(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, int const&) [clone .cold.1]
CATHODE::TemporaryEntity::bind_float(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, float const&) [clone .cold.1]
CATHODE::TemporaryEntity::bind_vector(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CA::Vector const&) [clone .cold.1]
CATHODE::TemporaryEntity::bind_position(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CA::Matrix const&) [clone .cold.1]
CATHODE::TemporaryEntity::bind_variables_from_cache(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::MemoryPtr<CATHODE::Entity> const&) [clone .cold.1]
typeinfo name for CATHODE::TemporaryEntity
typeinfo name for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_OBJECT>
typeinfo name for CATHODE::VARIABLE_CONTAINER_OBJECT
typeinfo name for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_BOOL>
typeinfo name for CATHODE::VARIABLE_CONTAINER_BOOL
typeinfo name for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_INT>
typeinfo name for CATHODE::VARIABLE_CONTAINER_INT
typeinfo name for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_FLOAT>
typeinfo name for CATHODE::VARIABLE_CONTAINER_FLOAT
typeinfo name for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_VECTOR>
typeinfo name for CATHODE::VARIABLE_CONTAINER_VECTOR
typeinfo name for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_POSITION>
typeinfo name for CATHODE::VARIABLE_CONTAINER_POSITION
vtable for CATHODE::TemporaryEntity
typeinfo for CATHODE::TemporaryEntity
vtable for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_OBJECT>
typeinfo for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_OBJECT>
vtable for CATHODE::VARIABLE_CONTAINER_OBJECT
typeinfo for CATHODE::VARIABLE_CONTAINER_OBJECT
vtable for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_BOOL>
typeinfo for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_BOOL>
vtable for CATHODE::VARIABLE_CONTAINER_BOOL
typeinfo for CATHODE::VARIABLE_CONTAINER_BOOL
vtable for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_INT>
typeinfo for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_INT>
vtable for CATHODE::VARIABLE_CONTAINER_INT
typeinfo for CATHODE::VARIABLE_CONTAINER_INT
vtable for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_FLOAT>
typeinfo for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_FLOAT>
vtable for CATHODE::VARIABLE_CONTAINER_FLOAT
typeinfo for CATHODE::VARIABLE_CONTAINER_FLOAT
vtable for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_VECTOR>
typeinfo for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_VECTOR>
vtable for CATHODE::VARIABLE_CONTAINER_VECTOR
typeinfo for CATHODE::VARIABLE_CONTAINER_VECTOR
vtable for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_POSITION>
typeinfo for CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_POSITION>
vtable for CATHODE::VARIABLE_CONTAINER_POSITION
typeinfo for CATHODE::VARIABLE_CONTAINER_POSITION
CATHODE::VARIABLE_CONTAINER_OBJECT::get_proxy_target(CATHODE::MemoryPtr<CATHODE::Entity> const&) const::obj
guard variable for CATHODE::VARIABLE_CONTAINER_OBJECT::get_proxy_target(CATHODE::MemoryPtr<CATHODE::Entity> const&) const::obj
/*__MergedGlobals*/
CATHODE::MemoryAllocation<CATHODE::TemporaryEntity>::m_tracker
CATHODE::MemoryAllocation<CATHODE::MemoryPtr<CATHODE::TemporaryEntity> >::m_tracker
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_OBJECT>::m_tracker
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_BOOL>::m_tracker
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_INT>::m_tracker
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_FLOAT>::m_tracker
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_VECTOR>::m_tracker
CATHODE::MemoryAllocation<CATHODE::VARIABLE_CONTAINER_POSITION>::m_tracker
```

### cathode_utils.cpp
```c++
CATHODE::single_character_class_to_navigation_class_combo(CATHODE::CHARACTER_CLASS::ENUM)
CATHODE::to_navigation_class(CATHODE::CHARACTER_CLASS::ENUM)
CATHODE::single_character_class_to_class_combo(CATHODE::NAVIGATION_CHARACTER_CLASS::ENUM)
CATHODE::to_navigation_class_combo(CATHODE::CHARACTER_CLASS_COMBINATION::ENUM)
```
