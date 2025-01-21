//
// The OpenIsolation Project
//

#pragma once

#include "Settings/Setting.h"
#include "input_system.h"

static constexpr int NUM_SETTINGS = 31;
static constexpr int NUM_BUTTONS = 41;

namespace UI {
  class GAME_MENU {
  private:
    const char* SETTING_TO_VALUE_SETTER_METHOD[NUM_SETTINGS] = {};
    const char* SETTING_TO_DATA_SETTER_METHOD[NUM_SETTINGS] = {};
    const char* SETTING_TO_NAME_STRING_ID[NUM_SETTINGS] = {};
    const char* SETTING_TO_DESC_STRING_ID[NUM_SETTINGS] = {};
    const char* BUTTON_TO_STRING_ID[NUM_BUTTONS] = {};

    class StaticInitializer {
      StaticInitializer();
    };
  };
}

