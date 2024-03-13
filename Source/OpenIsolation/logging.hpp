//
// The OpenIsolation Project
//

#pragma once
#include <string>

namespace OpenIsolation {
  class Logging {
    enum class Level {
      OFF = 0,
      ERRORS,
      WARNINGS,
      INFORMATION,
      VERBOSE,
    };

    static void log_message(std::string& message);
  };
}
