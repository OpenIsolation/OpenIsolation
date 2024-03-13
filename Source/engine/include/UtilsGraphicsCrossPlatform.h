//
// The OpenIsolation Project
//

#pragma once

#include <gfx_api.h>

namespace UtilGraphics {
    GfxHandle<GfxBufferDescr> CreateVertexBuffer(std::uint8_t size, GfxEnum<eGfxUsage> usage, GfxEnum<eGfxMemoryPool> pool);
	bool DestroyBuffer(GfxHandle<GfxBufferDescr>);
	bool LockBuffer(GfxHandle<GfxBufferDescr>, unsigned int, unsigned int, void**, GfxEnum<eGfxBufferLockMode>);
	bool UnlockBuffer(GfxHandle<GfxBufferDescr>);
	GfxHandle<GfxBufferDescr> CreateIndexBuffer(unsigned int, GfxEnum<eGfxUsage>, GfxEnum<eGfxGPUIndexBufferFormat>, GfxEnum<eGfxMemoryPool>);
};

/*c2DQuadGrid::c2DQuadGrid(unsigned int, unsigned int)
c2DQuadGrid::AcquireVertexBuffer()
UtilGraphics::CreateVertexBuffer(unsigned int, GfxEnum<eGfxUsage>, GfxEnum<eGfxMemoryPool>)
c2DQuadGrid::ReleaseVertexBuffer()
UtilGraphics::DestroyBuffer(GfxHandle<GfxBufferDescr>)
c2DQuadGrid::CalculateVertexBuffer()
UtilGraphics::LockBuffer(GfxHandle<GfxBufferDescr>, unsigned int, unsigned int, void**, GfxEnum<eGfxBufferLockMode>)
UtilGraphics::UnlockBuffer(GfxHandle<GfxBufferDescr>)
c2DQuadGrid::Draw()
UtilGraphics::CreateIndexBuffer(unsigned int, GfxEnum<eGfxUsage>, GfxEnum<eGfxGPUIndexBufferFormat>, GfxEnum<eGfxMemoryPool>)
DrawFullScreenQuad()
RenderTextureRect(sTexture*, TEXTURE_RECT const*, unsigned int, GfxHandle<GfxRenderTargetDescr>, TEXTURE_RECT const&, FX_SHADER*, GfxHandle<GfxDepthBufferDescr>, sTexture*, ePredefinedSamplerState)
get_matrix_for_reflection_plane(VECTOR_4 const&)*/
