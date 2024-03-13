//
// The OpenIsolation Project
//

#pragma once

namespace CATHODE {
  /// <summary>
  ///   Utility class for profiling the performance of each node in the CATHODE scripting system.
  /// </summary>
  /// <remarks>
  ///   Stripped in release builds.
  /// </remarks>
  class CathodeProfileNode {
  public:
    CathodeProfileNode(const char* node);
    CathodeProfileNode(const char* node, const char* unknown);
    ~CathodeProfileNode() = default;
  };
};

