//
// The OpenIsolation Project
//

#pragma once

#include "cathode_guid.h"

namespace CATHODE {
  class EntityPathElement {
  public:
    bool operator==(const EntityPathElement& element) const;
    void hash_path() const;
  };

  class EntityPathStore {
    EntityPathStore(const ShortGuid& guid);
    EntityPathStore(const ShortGuid* guid);
  };

  class EntityPathStack {
  public:
    EntityPathStack(const ShortGuid& guid);
    ~EntityPathStack();
  };
}
