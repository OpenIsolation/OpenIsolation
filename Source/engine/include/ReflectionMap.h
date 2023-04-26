/**
 * The OpenIsolation Project
 */

#pragma once

enum eReflectionMapQuality {
  // Disables the reflection renderer entirely.
  REFLECTION_MAP_QUALITY_OFF,
  // Implicit state. As long as the state is not 0 (OFF), it'll activate the reflection renderer, just with no mip-maps.
  REFLECTION_MAP_QUALITY_ON,
  // Renders a low-res blur on the reflection mip-maps.
  REFLECTION_MAP_QUALITY_LOW_RES,
  // [PC Default] Renders a high-res gaussian blur on the reflection mip-maps.
  REFLECTION_MAP_QUALITY_HIGH_RES,
};
