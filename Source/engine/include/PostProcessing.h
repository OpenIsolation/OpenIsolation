//
// The OpenIsolation Project
//

#pragma once

#include <cstdint>
#include "Stereo/StereoManager.h"

enum class ePredefinedSamplerState {
  DISABLED,
  ENABLED,
};

void ApplyPostProcessFilter(sGPURenderTarget&, sTexture*, sTexture*, FX_SHADER*, ePredefinedSamplerState, ePredefinedSamplerState);

class PostProcessViewProjData {
  PostProcessViewProjData();
  void eye_to_viewproj_type(Stereo::EyeType);
};

class cPostProcessing {
  ~cPostProcessing();
  cPostProcessing* GetInstance();
  cPostProcessing();
  void Create(bool);
  void Release(bool doUnload);
  void UnLoad();
  void SetupMaterial();
  sTexture* GetTextureFromName(const char* name) const;
  void invalidate_cached_shaders();
  void SetSourceTexture(sTexture* texture);
  void UpdateViewProjection(ePostProcessViewProjType, MATRIX_44&, MATRIX_44&, MATRIX_44&);
  void ApplySharedVelocityConstants(ePostProcessViewProjType, bool);
  void SetGammaCorrection(float);
  void GetDistortionRanges(float*);
  void ProcessDistortion();
  void ProcessDistortionOverlay();
  void ProcessDOF(const sPostProcessPrepareData&);
  void ProcessBloom();
  void ProcessBloomLowQuality();
  void ProcessLUTCorrection();
  void render_velocity_for_static_objects(ePostProcessViewProjType);
  void processMotionBlurHiSpec(ePostProcessViewProjType);
  void processLegacyDof();
  void ProcessFullScreenBlur();
  void DrawFullScreen();
  void Prepare(const sPostProcessPrepareData&);
  void ProcessStackSettings();
  void GetTextureFromHash(std::int32_t hash) const;
  void ApplyPostProcessingRenderState();
  void CalculateColourMatrix();
  void UpdateFilmGrainShaderConstants();
  void GetBlurryDownsampledPreviousFramebuffer() const;
  void UploadHDRScale() const;
  void Flush();
  void FrameReset();
  void AddColourSettings(const sColourSettings&);
  void AddBloomSettings(const sBloomSettings&);
  void AddFlareSettings(const sFlareSettings&);
  void AddMotionBlurSettings(const sMotionBlurSettingsHiSpec&);
  void AddFilmGrainSettings(const sFilmGrainSettings&);
  void AddVignetteSettings(const sVignetteSettings&);
  void AddDistortionSettings(const sDistortionSettings&);
  void AddSharpnessSettings(const sSharpnessSettings&);
  void AddLensDustSettings(const sLensDustSettings&);
  void AddFullScreenBlurSettings(const sFullScreenBlurSettings&);
  void AddDepthOfFieldSettings(const sDepthOfFieldSettings&);
  void AddOverlaySettings(const sOverlaySettings&);
  void AddBlendLowResFrameSettings(const sBlendLowResFrameSettings&);
  void AddChromaticAberrationSettings(const sChromaticAberrationSettings&);
  void EnablePostProcessingStackUpdate(bool);
  void ValidateSettingQuality(const Settings::cSetting*, const Settings::cQuality*);
  void SettingChangedCallback(const Settings::cSetting*);
  void FadeOutActivated();
  void FadeOutDeactivated();
  void FadeInActivated();
  void FadeInDeactivated();
  void SetScreenFadeType(std::uint32_t, cPostProcessing::eScreenFadeState fadeState);
  void FadeComplete(std::uint32_t);
  void GetNoise64x64Texture() const;
  void GetMotionBlurTexture();
  void SetupDepthOfField();
  void SetScreenSpaceReflectionSamplers() const;
  void UnsetScreenSpaceReflectionSamplers() const;
  void SetFresnelLUTSamplers() const;
  void GetFrameBufferScaleOffset(float&, float&) const;
private:
  cPostProcessing* msInstance;
};

namespace RenderToTexture {
  void setup_rendering();
};

class LegacyDoFResources {
public:
  LegacyDoFResources();
  LegacyDoFResources* Get();
private:
  LegacyDoFResources* sInstance;
};

void std::__1::__sort<std::__1::__less<sColourSettings, sColourSettings>&, sColourSettings*>(sColourSettings*, sColourSettings*, std::__1::__less<sColourSettings, sColourSettings>&)
unsigned int std::__1::__sort4<std::__1::__less<sColourSettings, sColourSettings>&, sColourSettings*>(sColourSettings*, sColourSettings*, sColourSettings*, sColourSettings*, std::__1::__less<sColourSettings, sColourSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sColourSettings, sColourSettings>&, sColourSettings*>(sColourSettings*, sColourSettings*, std::__1::__less<sColourSettings, sColourSettings>&)
void std::__1::__sort<std::__1::__less<sBloomSettings, sBloomSettings>&, sBloomSettings*>(sBloomSettings*, sBloomSettings*, std::__1::__less<sBloomSettings, sBloomSettings>&)
unsigned int std::__1::__sort4<std::__1::__less<sBloomSettings, sBloomSettings>&, sBloomSettings*>(sBloomSettings*, sBloomSettings*, sBloomSettings*, sBloomSettings*, std::__1::__less<sBloomSettings, sBloomSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sBloomSettings, sBloomSettings>&, sBloomSettings*>(sBloomSettings*, sBloomSettings*, std::__1::__less<sBloomSettings, sBloomSettings>&)
void std::__1::__sort<std::__1::__less<sFlareSettings, sFlareSettings>&, sFlareSettings*>(sFlareSettings*, sFlareSettings*, std::__1::__less<sFlareSettings, sFlareSettings>&)
unsigned int std::__1::__sort4<std::__1::__less<sFlareSettings, sFlareSettings>&, sFlareSettings*>(sFlareSettings*, sFlareSettings*, sFlareSettings*, sFlareSettings*, std::__1::__less<sFlareSettings, sFlareSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sFlareSettings, sFlareSettings>&, sFlareSettings*>(sFlareSettings*, sFlareSettings*, std::__1::__less<sFlareSettings, sFlareSettings>&)
void std::__1::__sort<std::__1::__less<sMotionBlurSettingsHiSpec, sMotionBlurSettingsHiSpec>&, sMotionBlurSettingsHiSpec*>(sMotionBlurSettingsHiSpec*, sMotionBlurSettingsHiSpec*, std::__1::__less<sMotionBlurSettingsHiSpec, sMotionBlurSettingsHiSpec>&)
unsigned int std::__1::__sort4<std::__1::__less<sMotionBlurSettingsHiSpec, sMotionBlurSettingsHiSpec>&, sMotionBlurSettingsHiSpec*>(sMotionBlurSettingsHiSpec*, sMotionBlurSettingsHiSpec*, sMotionBlurSettingsHiSpec*, sMotionBlurSettingsHiSpec*, std::__1::__less<sMotionBlurSettingsHiSpec, sMotionBlurSettingsHiSpec>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sMotionBlurSettingsHiSpec, sMotionBlurSettingsHiSpec>&, sMotionBlurSettingsHiSpec*>(sMotionBlurSettingsHiSpec*, sMotionBlurSettingsHiSpec*, std::__1::__less<sMotionBlurSettingsHiSpec, sMotionBlurSettingsHiSpec>&)
void std::__1::__sort<std::__1::__less<sFilmGrainSettings, sFilmGrainSettings>&, sFilmGrainSettings*>(sFilmGrainSettings*, sFilmGrainSettings*, std::__1::__less<sFilmGrainSettings, sFilmGrainSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sFilmGrainSettings, sFilmGrainSettings>&, sFilmGrainSettings*>(sFilmGrainSettings*, sFilmGrainSettings*, std::__1::__less<sFilmGrainSettings, sFilmGrainSettings>&)
void std::__1::__sort<std::__1::__less<sVignetteSettings, sVignetteSettings>&, sVignetteSettings*>(sVignetteSettings*, sVignetteSettings*, std::__1::__less<sVignetteSettings, sVignetteSettings>&)
unsigned int std::__1::__sort4<std::__1::__less<sVignetteSettings, sVignetteSettings>&, sVignetteSettings*>(sVignetteSettings*, sVignetteSettings*, sVignetteSettings*, sVignetteSettings*, std::__1::__less<sVignetteSettings, sVignetteSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sVignetteSettings, sVignetteSettings>&, sVignetteSettings*>(sVignetteSettings*, sVignetteSettings*, std::__1::__less<sVignetteSettings, sVignetteSettings>&)
void std::__1::__sort<std::__1::__less<sDistortionSettings, sDistortionSettings>&, sDistortionSettings*>(sDistortionSettings*, sDistortionSettings*, std::__1::__less<sDistortionSettings, sDistortionSettings>&)
unsigned int std::__1::__sort4<std::__1::__less<sDistortionSettings, sDistortionSettings>&, sDistortionSettings*>(sDistortionSettings*, sDistortionSettings*, sDistortionSettings*, sDistortionSettings*, std::__1::__less<sDistortionSettings, sDistortionSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sDistortionSettings, sDistortionSettings>&, sDistortionSettings*>(sDistortionSettings*, sDistortionSettings*, std::__1::__less<sDistortionSettings, sDistortionSettings>&)
void std::__1::__sort<std::__1::__less<sSharpnessSettings, sSharpnessSettings>&, sSharpnessSettings*>(sSharpnessSettings*, sSharpnessSettings*, std::__1::__less<sSharpnessSettings, sSharpnessSettings>&)
unsigned int std::__1::__sort4<std::__1::__less<sSharpnessSettings, sSharpnessSettings>&, sSharpnessSettings*>(sSharpnessSettings*, sSharpnessSettings*, sSharpnessSettings*, sSharpnessSettings*, std::__1::__less<sSharpnessSettings, sSharpnessSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sSharpnessSettings, sSharpnessSettings>&, sSharpnessSettings*>(sSharpnessSettings*, sSharpnessSettings*, std::__1::__less<sSharpnessSettings, sSharpnessSettings>&)
void std::__1::__sort<std::__1::__less<sLensDustSettings, sLensDustSettings>&, sLensDustSettings*>(sLensDustSettings*, sLensDustSettings*, std::__1::__less<sLensDustSettings, sLensDustSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sLensDustSettings, sLensDustSettings>&, sLensDustSettings*>(sLensDustSettings*, sLensDustSettings*, std::__1::__less<sLensDustSettings, sLensDustSettings>&)
void std::__1::__sort<std::__1::__less<sFullScreenBlurSettings, sFullScreenBlurSettings>&, sFullScreenBlurSettings*>(sFullScreenBlurSettings*, sFullScreenBlurSettings*, std::__1::__less<sFullScreenBlurSettings, sFullScreenBlurSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sFullScreenBlurSettings, sFullScreenBlurSettings>&, sFullScreenBlurSettings*>(sFullScreenBlurSettings*, sFullScreenBlurSettings*, std::__1::__less<sFullScreenBlurSettings, sFullScreenBlurSettings>&)
void std::__1::__sort<std::__1::__less<sDepthOfFieldSettings, sDepthOfFieldSettings>&, sDepthOfFieldSettings*>(sDepthOfFieldSettings*, sDepthOfFieldSettings*, std::__1::__less<sDepthOfFieldSettings, sDepthOfFieldSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sDepthOfFieldSettings, sDepthOfFieldSettings>&, sDepthOfFieldSettings*>(sDepthOfFieldSettings*, sDepthOfFieldSettings*, std::__1::__less<sDepthOfFieldSettings, sDepthOfFieldSettings>&)
void std::__1::__sort<std::__1::__less<sOverlaySettings, sOverlaySettings>&, sOverlaySettings*>(sOverlaySettings*, sOverlaySettings*, std::__1::__less<sOverlaySettings, sOverlaySettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sOverlaySettings, sOverlaySettings>&, sOverlaySettings*>(sOverlaySettings*, sOverlaySettings*, std::__1::__less<sOverlaySettings, sOverlaySettings>&)
void std::__1::__sort<std::__1::__less<sBlendLowResFrameSettings, sBlendLowResFrameSettings>&, sBlendLowResFrameSettings*>(sBlendLowResFrameSettings*, sBlendLowResFrameSettings*, std::__1::__less<sBlendLowResFrameSettings, sBlendLowResFrameSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sBlendLowResFrameSettings, sBlendLowResFrameSettings>&, sBlendLowResFrameSettings*>(sBlendLowResFrameSettings*, sBlendLowResFrameSettings*, std::__1::__less<sBlendLowResFrameSettings, sBlendLowResFrameSettings>&)
void std::__1::__sort<std::__1::__less<sChromaticAberrationSettings, sChromaticAberrationSettings>&, sChromaticAberrationSettings*>(sChromaticAberrationSettings*, sChromaticAberrationSettings*, std::__1::__less<sChromaticAberrationSettings, sChromaticAberrationSettings>&)
bool std::__1::__insertion_sort_incomplete<std::__1::__less<sChromaticAberrationSettings, sChromaticAberrationSettings>&, sChromaticAberrationSettings*>(sChromaticAberrationSettings*, sChromaticAberrationSettings*, std::__1::__less<sChromaticAberrationSettings, sChromaticAberrationSettings>&)
___cxx_global_array_dtor
___cxx_global_array_dtor.24
__GLOBAL__sub_I_PostProcessing.cpp
GCC_except_table3
GCC_except_table12
GCC_except_table13
GCC_except_table15
GCC_except_table17
GCC_except_table40
GCC_except_table41
GCC_except_table47
GCC_except_table77
GCC_except_table78
GCC_except_table101
GCC_except_table144
typeinfo name for cPostProcessing
vtable for cPostProcessing
typeinfo for cPostProcessing
_g_cur_tone_mapping_operator
LegacyDoFResources::Get()::sInstance
guard variable for LegacyDoFResources::Get()::sInstance
__MergedGlobals
_g_postproc_rt
_g_postproc_rt_srgb
_g_intermediate_upscaler_rt
_g_BloomChain
_g_VelocityDilationChain
_g_afterImageBuffer
cPostProcessing::msInstance
_g_hdr_scale_disabled
