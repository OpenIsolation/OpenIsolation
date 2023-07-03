/**
 * The OpenIsolation Project
 */

#pragma once

#include <cstdint>
#include <cassert>

static constexpr std::uint32_t GRAPHICS_UNKNOWN_VALUE = 0x3f18fff7;

template<typename T>
struct GfxHandle {
  T* handle;
};

template<typename T>
struct GfxEnum {
  T value;
};

enum eGfxFeatureLevel {
  FEATURE_LEVEL_UNKNOWN,
  FEATURE_LEVEL_D3D10,
  FEATURE_LEVEL_D3D11,
  FEATURE_LEVEL_UNSUPPORTED,
};

enum eGfxUsage {
  USAGE_UNKNOWN,
};

enum eGfxMemoryPool {
  MEMORY_POOL_UNKNOWN,
};

enum eGfxBufferLockMode {
  BUFFER_LOCK_MODE_UNKNOWN,
};

enum eGfxGPUIndexBufferFormat {
  GPU_INDEX_BUFFER_FORMAT_UNKNOWN,
};

enum eGfxQueryType {
  QUERY_TYPE_EVENT,
  QUERY_TYPE_OCCLUSION,
  QUERY_TYPE_TIMESTAMP_DISJOINT = 3,
  QUERY_TYPE_UNKNOWN_VALUE = GRAPHICS_UNKNOWN_VALUE,
};

enum eGfxRenderStateOptionsCompare {
  RENDER_STATE_OPTIONS_COMPARE_UNKNOWN_VALUE = GRAPHICS_UNKNOWN_VALUE,
};

enum eGfxSamplerStateOptionsAddress {
  SAMPLER_STATE_OPTIONS_ADDRESS_UNKNOWN_VALUE = GRAPHICS_UNKNOWN_VALUE,
};

enum eGfxSamplerStateOptionsMaxAnisotropy {
  SAMPLER_STATE_OPTIONS_MAX_ANISOTROPY_UNKNOWN_VALUE = GRAPHICS_UNKNOWN_VALUE,
};

enum eGfxShaderType {
  SHADER_TYPE_COMPUTE,
  SHADER_TYPE_PIXEL,
  SHADER_TYPE_VERTEX,
  SHADER_TYPE_GEOMETRY,
  SHADER_TYPE_HULL,
  SHADER_TYPE_DOMAIN,
};

struct GfxBufferDescr {
  std::uint32_t unk0;
  std::int32_t unk1;
  std::uint32_t memoryPoolType;
  std::uint64_t size;
};
static_assert(sizeof(GfxBufferDescr) == 24, "Invalid size!");

struct GfxQueryDescr {
  GfxEnum<eGfxQueryType> queryType;
};
static_assert(sizeof(GfxQueryDescr) == 4, "Invalid size!");

struct GfxSamplerStateDescr {
  GfxEnum<eGfxSamplerStateOptionsAddress> address1;
  GfxEnum<eGfxSamplerStateOptionsAddress> address2;
  GfxEnum<eGfxSamplerStateOptionsAddress> address3;
  GfxEnum<eGfxRenderStateOptionsCompare> optionsCompare;
  GfxEnum<eGfxSamplerStateOptionsMaxAnisotropy> maxAnisotropy;
  // Pretty sure there's more to this struct, but this is all I've worked out so far.
};
