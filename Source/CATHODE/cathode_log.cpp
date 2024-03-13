//
// The OpenIsolation Project
//

#include "cathode_log.h"
#include <iostream>

CATHODE::CathodeProfileNode::CathodeProfileNode(const char* node) {
  if (node != nullptr) {
    std::cout << "[CATHODE] " << node << std::endl;
  }
}

CATHODE::CathodeProfileNode::CathodeProfileNode(const char* node, const char* value) {
  if (node != nullptr && value != nullptr) {
    std::cout << "[CATHODE] " << node << " " << value << std::endl;
  }
}
