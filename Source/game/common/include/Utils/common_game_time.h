/**
 * The OpenIsolation Project
 */

#pragma once

class GAME_TIME {
public:
    static void set_fps(float fps);
private:
    float _FRAMES_PER_SECOND;
    float _HOW_MANY_TICKS_IN_FRAME;
    float _FRAMETIME;
    bool _g_timer_reset_on_start;
};
