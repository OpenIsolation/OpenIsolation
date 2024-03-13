//
// The OpenIsolation Project
//

#pragma once
#include "Memory/cathode_memory_pool.h"
#include "cathode_entity.h"
#include "cathode_entity_interface.h"
#include <cstdint>

// An unsigned integer on iOS, appears to be a state ID / bitmask flag? Creating a custom type just to keep it separate.
using EntityStateID = std::uint32_t;

/*
Map of state flags to states (for the sake of brevity, these are represented in hexadecimal):
0x1 - activate (unset if deactivate is called)
0x2 - spawn (unset if despawn is called)
0x4 - start (unset if stop is called)
0x8 - pause (unset if resume is called)
0x10 - attach (unset if detach is called)
0x20 - unknown
0x40 - unknown
0x80 - enable (unset if disable is called)
0x100 - simulate (unset if keyframe is called)
0x200 - lock (unset if unlock is called)
0x400 - show (unset if hide is called)
0x800 - suspend (unset if allow is called)
0x1000 - proxy_enable (unset if proxy_disable is called)
0x2000 - floating (unset if sinking is called)
0x4000 - light_switch_on (unset if light_switch_off is called)
0x8000 - install_proxy (unset if uninstall_proxy is called)?
0x10000 - unknown
0x20000 - unknown
0x40000 - unknown
0x80000 - suspended (unset if allowed is called)
0x100000 - ghosted (unset if solid is called)
0x200000 - invisible (unset if visible is called)
0x400000 - frozen
*/

namespace CATHODE {
  class EntityState {
  public:
    // This is just a uint, but I've created a scoped enum. for this to tidy it up a bit.
    enum class EntityStateFlag : EntityStateID {
      NO_STATE = 0x0,
      ACTIVATE = 0x1,
      SPAWN = 0x2,
      START = 0x4,
      PAUSE = 0x8,
      ATTACH = 0x10,
      UNKNOWN_1 = 0x20,
      UNKNOWN_2 = 0x40,
      ENABLE = 0x80,
      SIMULATE = 0x100,
      LOCK = 0x200,
      SHOW = 0x400,
      SUSPEND = 0x800,
      PROXY_ENABLE = 0x1000,
      FLOATING = 0x2000,
      LIGHT_SWITCH_ON = 0x4000,
      INSTALL_PROXY = 0x8000,
      UNKNOWN_3 = 0x10000,
      UNKNOWN_4 = 0x20000,
      UNKNOWN_5 = 0x40000,
      SUSPENDED = 0x80000,
      GHOSTED = 0x100000,
      INVISIBLE = 0x200000,
      FROZEN = 0x400000
    };

    union EntityStateUnion {

    };

    EntityState();
    void set_shutdown(bool shutdown); // Stripped
    EntityStateID initial_state(const MemoryPtr<Entity>& entity);
    void restore_state(EntityStateUnion stateUnion, MemoryPtr<Entity>& entity, const MemoryRefPtr<TriggerInfo>& triggerInfo);
    bool allowed(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool visible(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool solid(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool unfrozen(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool finished_updating(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&, bool);
    bool allow(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool despawn(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool light_switch_off(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool hide(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool unlock(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool opened(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool closed(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool detach(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool resume(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool stop(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool sinking(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool keyframe(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool disable(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool proxy_disable(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool proxy_enable(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool enable(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool simulate(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool floating(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool start(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool pause(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool attach(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool lock(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool open(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool close(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool light_switch_on(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool show(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool spawn(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool suspend(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool start_updating(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&, bool);
    bool ghosted(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool frozen(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool invisible(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool suspended(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    /// <summary>
    /// Adds (or removes) a state flag from the provided entity.
    /// </summary>
    /// <param name="entity">Entity whose state is to be altered.</param>
    /// <param name="triggerInfo">Unknown.</param>
    /// <param name="state">The state flag in question.</param>
    /// <param name="shouldAddState">If true, it adds the state to the entity's current state flag, otherwise it removes the state.</param>
    void state_change(MemoryPtr<Entity>& entity, const MemoryRefPtr<TriggerInfo>& triggerInfo, EntityStateFlag state, bool shouldAddState);
    bool revert(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool shutdown(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool initialise(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool capture(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool post_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool pre_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool update_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool finished_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool trigger(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool reposition(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool validate(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool begin_processing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool end_processing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool finished_processing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool zone_deactivate(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool zone_activate(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool install_proxy(MemoryPtr<Entity>&, const MemoryPtr<Entity>&);
    // Unsure about return type.
    void uninstall_proxy(MemoryPtr<Entity>&);
    bool process(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool update(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool opening(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool closing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool live_edit(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool refresh(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool callback(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    // Unsure about return type.
    void apply_mastering(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&, EntityStateUnion, EntityStateUnion);
    bool load(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool loaded(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool loading(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool unload(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool finished_loading(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool finished_opening(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    bool finished_closing(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
  private:
    EntityStateID state;
  };
}
