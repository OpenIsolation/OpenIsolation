//
// The OpenIsolation Project
//

#include "UtilsGraphicsCrossPlatform.h"

GfxHandle<GfxBufferDescr> UtilGraphics::CreateVertexBuffer(std::uint8_t size, GfxEnum<eGfxUsage> usage, GfxEnum<eGfxMemoryPool> pool) {
  GfxHandle<GfxBufferDescr> handle = {};
  GfxBufferDescr bufferDescr;
  
  bufferDescr.memoryPoolType = 3;
  if (((int)usage.value | 8) != 0x28) {
    bufferDescr.memoryPoolType = 2;
  }
  /*bufferDescr._0_8_ = 1;
  bufferDescr.field3_0xc._4_4_ = 1;
  bufferDescr.field3_0xc._0_4_ = size;*/
  bufferDescr.size = size;
  //handle = Gfx_CreateBuffer(_g_gfx_device, &bufferDescr, (void *)0x0);
  return handle;
};

bool UtilGraphics::DestroyBuffer(GfxHandle<GfxBufferDescr>) {
  return false;
};

bool UtilGraphics::LockBuffer(GfxHandle<GfxBufferDescr>, unsigned int, unsigned int, void**, GfxEnum<eGfxBufferLockMode>) {
  return false;
};

bool UtilGraphics::UnlockBuffer(GfxHandle<GfxBufferDescr>) {
  return false;
};

GfxHandle<GfxBufferDescr> UtilGraphics::CreateIndexBuffer(unsigned int, GfxEnum<eGfxUsage>, GfxEnum<eGfxGPUIndexBufferFormat>, GfxEnum<eGfxMemoryPool>) {
  GfxHandle<GfxBufferDescr> handle = {};
  return handle;
};
