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

struct GfxQueryDescr {
  GfxEnum<eGfxQueryType> queryType;
};
static_assert(sizeof GfxQueryDescr == 1, "Invalid size!");

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

enum eGfxQueryType {
  QUERY_TYPE_UNKNOWN,
  QUERY_TYPE_OCCLUSION,
  QUERY_TYPE_TIMESTAMP_DISJOINT = 3,
};

enum eGfxShaderType {
  SHADER_TYPE_COMPUTE,
  SHADER_TYPE_PIXEL,
  SHADER_TYPE_VERTEX,
  SHADER_TYPE_GEOMETRY,
  SHADER_TYPE_HULL,
  SHADER_TYPE_DOMAIN,
};
