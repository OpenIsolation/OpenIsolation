/**
 * The OpenIsolation Project
 */

#pragma once

namespace RenderPasses {
  // The decal renderer can be disabled entirely through a debug services check.
  namespace DecalPass {
    enum Enum {
      // Runs default decal and skin occlusion passes.
      DECAL_PASS_DEFAULT,
      // Only renders decals that will affect specular normals.
	  DECAL_PASS_AFFECTING_SPECULAR_NORMAL,
      // Only renders solid decals.
	  DECAL_PASS_SOLID,
	};
  };
};
