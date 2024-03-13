//
// The OpenIsolation Project
//

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

enum class eGfxBufferLockMode {
  UNKNOWN,
};

enum class eGfxClear {
  UNKNOWN,
};

/// <summary>
/// Defines supported device feature levels.
/// Use this in code or render passes that require specific feature levels.
/// For instance, the game code will detect lack of D3D11 support and will dynamically disable the Depth of Field pass.
/// </summary>
enum class eGfxFeatureLevel {
  UNKNOWN,
  D3D10,
  D3D11,
  UNSUPPORTED,
};

enum class eGfxGPUIndexBufferFormat {
  UNKNOWN,
};

enum class eGfxMapFlags {
  UNKNOWN,
};

enum class eGfxMemoryPool {
  UNKNOWN,
};

enum class eGfxMultisample {
  UNKNOWN,
};

enum class eGfxPrimType {
  UNKNOWN,
};

enum class eGfxQueryType {
  EVENT,
  OCCLUSION,
  TIMESTAMP,
  TIMESTAMP_DISJOINT,
  UNKNOWN = GRAPHICS_UNKNOWN_VALUE,
};

enum class eGfxRenderStateOptionsBlend {
  UNKNOWN,
};

enum class eGfxRenderStateOptionsBlendOperation {
  UNKNOWN,
};

enum class eGfxRenderStateOptionsColorWrite {
  UNKNOWN,
};

enum class eGfxRenderStateOptionsCompare {
  UNKNOWN = GRAPHICS_UNKNOWN_VALUE,
};

enum class eGfxRenderStateOptionsCullMode {
  UNKNOWN,
};

enum class eGfxRenderStateOptionsFillMode {
  UNKNOWN,
};

enum class eGfxRenderStateOptionsStencil {
  UNKNOWN,
};

enum class eGfxResourceViewType {
  UNKNOWN,
};

enum class eGfxSamplerStateOptionsAddress {
  UNKNOWN = GRAPHICS_UNKNOWN_VALUE,
};

enum class eGfxSamplerStateOptionsFilter {
  UNKNOWN = GRAPHICS_UNKNOWN_VALUE,
};

enum class eGfxSamplerStateOptionsMaxAnisotropy {
  UNKNOWN = GRAPHICS_UNKNOWN_VALUE,
};

enum class eGfxShaderType {
  COMPUTE,
  PIXEL,
  VERTEX,
  GEOMETRY,
  HULL,
  DOMAIN,
};

enum class eGfxSurfaceFormat {
  UNKNOWN,
};

enum class eGfxTextureFormat {
  UNKNOWN,
};

enum class eGfxUsage {
  UNKNOWN,
};

enum class eGfxVertexFormatType {
  UNKNOWN,
};

enum class eGfxVertexFormatUsage {
  UNKNOWN,
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
  GfxEnum<eGfxRenderStateOptionsCompare> compare;
  GfxEnum<eGfxSamplerStateOptionsMaxAnisotropy> maxAnisotropy;
  // Pretty sure there's more to this struct, but this is all I've worked out so far.
};
