/**
 * The OpenIsolation Project
 */

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
0x80 - enable (unset if disable is called)
0x100 - simulate (unset if keyframe is called)
0x200 - lock (unset if unlock is called)
0x400 - show (unset if hide is called)
0x800 - suspend (unset if allow is called)
0x1000 - proxy_enable (unset if proxy_disable is called)
0x2000 - floating (unset if sinking is called)
0x4000 - light_switch_on (unset if light_switch_off is called)
0x8000 - install_proxy (unset if uninstall_proxy is called)?
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
      ENABLE = 0x80,
      SIMULATE = 0x100,
      LOCK = 0x200,
      SHOW = 0x400,
      SUSPEND = 0x800,
      PROXY_ENABLE = 0x1000,
      FLOATING = 0x2000,
      LIGHT_SWITCH_ON = 0x4000,
      INSTALL_PROXY = 0x8000,
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
    // This probably returns a bool, but I haven't reversed the part of the Entity vtable that it gets the return value from yet.
    std::uint32_t open(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
    /*close(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      light_switch_on(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      show(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      spawn(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      suspend(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      start_updating(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&, bool)
      ghosted(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      frozen(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      invisible(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
      suspended(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);*/
      /// <summary>
      /// Adds (or removes) a state flag from the provided entity.
      /// </summary>
      /// <param name="entity">Entity whose state is to be altered.</param>
      /// <param name="triggerInfo">Unknown.</param>
      /// <param name="state">The state flag in question.</param>
      /// <param name="shouldAddState">If true, it adds the state to the entity's current state flag, otherwise it removes the state.</param>
      void state_change(MemoryPtr<Entity>& entity, const MemoryRefPtr<TriggerInfo>& triggerInfo, EntityStateFlag state, bool shouldAddState);
      /*revert(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);
      shutdown(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        initialise(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        capture(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        post_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        pre_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        update_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        finished_restore(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        trigger(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        reposition(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        validate(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        begin_processing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        end_processing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        finished_processing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        zone_deactivate(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        zone_activate(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        install_proxy(MemoryPtr<Entity>&, const MemoryPtr<Entity>&)
        uninstall_proxy(MemoryPtr<Entity>&)
        process(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        update(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        opening(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        closing(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        live_edit(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        refresh(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        callback(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        apply_mastering(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&, EntityStateUnion, EntityStateUnion)
        load(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        loaded(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        loading(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        unload(MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        finished_loading(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        finished_opening(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&)
        finished_closing(const MemoryPtr<Entity>&, const MemoryRefPtr<TriggerInfo>&);*/
      private:
        EntityStateID state;
  };
}
