/**
 * The OpenIsolation Project
 */

#ifndef _WWISE_ENVELOPE_DSP_PARAMS_H_
#define _WWISE_ENVELOPE_DSP_PARAMS_H_

#include <AK/Tools/Common/AkAssert.h>
#include <math.h>
#include <AK/SoundEngine/Common/IAkPlugin.h>

// Parameters IDs.
const AkPluginParamID AK_SRCAUDIOINPUT_FXPARAM_GAIN_ID		= 1;

// Parameter range values
const AkReal32 INPUT_GAIN_MIN			= -96.3f;	// dB FS
const AkReal32 INPUT_GAIN_MAX			= 0.f;		// db FS

// Parameters struture for this effect.
struct AkFXSrcAudioInputParams
{
	AkReal32     fGain;         // Gain (in dBFS).
};


class WWISE_ENVELOPE_DSP_PARAMS : public AK::IAkPluginParam
{
public:

    // Allow effect to call accessor functions for retrieving parameter values.
    friend class WWISE_ENVELOPE_DSP;

    // Constructor.
    //WWISE_ENVELOPE_DSP_PARAMS();

    // Copy constructor.
    //WWISE_ENVELOPE_DSP_PARAMS( const WWISE_ENVELOPE_DSP_PARAMS & in_rCopy );

    // Destructor.
    virtual ~WWISE_ENVELOPE_DSP_PARAMS();

    // Create parameter object duplicate.
    virtual AK::IAkPluginParam * Clone( AK::IAkPluginMemAlloc * in_pAllocator );

    // Initialization.
    virtual AKRESULT Init( AK::IAkPluginMemAlloc *	in_pAllocator,		// Memory allocator.						    
                   const void *				in_pParamsBlock,	// Pointer to param block.
                   AkUInt32					in_ulBlockSize		// Sise of the parm block.
                   );
   
    // Termination.
    virtual AKRESULT Term( AK::IAkPluginMemAlloc * in_pAllocator );

    // Set all parameters at once.
    virtual AKRESULT SetParamsBlock( const void * in_pParamsBlock, 
                             AkUInt32 in_ulBlockSize
                             );

    // Update one parameter.
    virtual AKRESULT SetParam( AkPluginParamID in_ParamID,
                       const void * in_pValue, 
                       AkUInt32 in_ulParamSize
                       );

private:

    // Parameter structure.
    AkFXSrcAudioInputParams	m_Params;
};

#endif // _WWISE_ENVELOPE_DSP_PARAMS_H_

