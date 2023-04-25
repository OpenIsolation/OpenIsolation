/**
 * The OpenIsolation Project
 */

#pragma once

#include <cstdint>
#include <cassert>

template<typename T>
struct GfxHandle {
  T* handle;
};

template<typename T>
struct GfxEnum {
  T value;
};

struct GfxBufferDescr {
  std::uint32_t unk0;
  std::int32_t unk1;
  std::uint32_t memoryPoolType;
  std::uint64_t size;
};
static_assert(sizeof GfxBufferDescr == 24, "Invalid size!");

enum eGfxUsage {
  USAGE_UNKNOWN,
};

enum eGfxMemoryPool {
  POOL_UNKNOWN,
};

enum eGfxBufferLockMode {
  LOCK_MODE_UNKNOWN,
};

enum eGfxGPUIndexBufferFormat {
  INDEX_BUFFER_FORMAT_UNKNOWN,
};
