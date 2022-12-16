/**
 * The OpenIsolation Project
 */

#pragma once

/// Traversal is something that was mostly intended to be used in the 3rd-person version
/// of the game, but it got majorly cut back in the final release.
/// Not sure how much of this is used.
class TRAVERSAL_TRANSITION_MANAGER {
public:
    TRAVERSAL_TRANSITION_MANAGER();
    const void nearest_traversal(unsigned int&, VECTOR&);
    void set_character(const CHARACTER*);
};

/*
 * These are stripped out in the release builds of the game.
 * However, the context from where their functions are called,
 * does provide some insight into how they would've worked originally.
*/
void breakpoint_triggered(int);
void live_link_game_paused();
void live_link_game_unpaused();
void live_link_flush_monitors();
void LiveLink_start_timers();
void LiveLink_start_frame();
void LiveLink_end_frame();
void LiveLink_stop_timers(char const*);
void LiveLink_update_timers(bool);
