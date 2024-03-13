//
// The OpenIsolation Project
//

#include <AK/Tools/Common/AkAssert.h>
#include <AK/Tools/Common/AkBankReadHelpers.h>
#include <math.h>
#include "wwise_envelope_dsp_params.h"


// Destructor.
WWISE_ENVELOPE_DSP_PARAMS::~WWISE_ENVELOPE_DSP_PARAMS()
{
}

// Create parameter node duplicate.
AK::IAkPluginParam* WWISE_ENVELOPE_DSP_PARAMS::Clone(AK::IAkPluginMemAlloc* in_pAllocator)
{
    return AK_PLUGIN_NEW(in_pAllocator, WWISE_ENVELOPE_DSP_PARAMS(*this));
}

// Parameter node initialization.
AKRESULT WWISE_ENVELOPE_DSP_PARAMS::Init(	
    AK::IAkPluginMemAlloc* in_pAllocator,									   
    const void* in_pParamsBlock, 
    AkUInt32 in_ulBlockSize
) {
    if (in_ulBlockSize == 0) {
      // Init default parameters.
      return AK_Success;
    }
    return SetParamsBlock(in_pParamsBlock, in_ulBlockSize);
}

// Parameter interface termination.
AKRESULT WWISE_ENVELOPE_DSP_PARAMS::Term(AK::IAkPluginMemAlloc* in_pAllocator)
{
    AK_PLUGIN_DELETE(in_pAllocator, this);
    return AK_Success;
}

// Parameter block set.
AKRESULT WWISE_ENVELOPE_DSP_PARAMS::SetParamsBlock( 
	const void * in_pParamsBlock, 
	AkUInt32 in_ulBlockSize )
{
	AKRESULT eResult = AK_Success;
	AkUInt8 * pParamsBlock = (AkUInt8 *)in_pParamsBlock;
	NonRTPC.fDelayTime = READBANKDATA( AkReal32, pParamsBlock, in_ulBlockSize );
	RTPC.fFeedback = READBANKDATA( AkReal32, pParamsBlock, in_ulBlockSize );
	RTPC.fWetDryMix = READBANKDATA( AkReal32, pParamsBlock, in_ulBlockSize );
	RTPC.fOutputLevel = AK_DBTOLIN( READBANKDATA( AkReal32, pParamsBlock, in_ulBlockSize ) );
	RTPC.bFeedbackEnabled = READBANKDATA( bool, pParamsBlock, in_ulBlockSize );
	NonRTPC.bProcessLFE = READBANKDATA( bool, pParamsBlock, in_ulBlockSize );
	CHECKBANKDATASIZE( in_ulBlockSize, eResult );

	// Range translation
	RTPC.fFeedback *= ONEOVER_DELAYFXPARAM_PERCENT_MAX;					// From percentage to linear gain
	RTPC.fWetDryMix *= ONEOVER_DELAYFXPARAM_PERCENT_MAX;				// From percentage to linear gain

	RTPC.bHasChanged = true;
	NonRTPC.bHasChanged = true;

    return eResult;
}

// Update a single parameter.
AKRESULT WWISE_ENVELOPE_DSP_PARAMS::SetParam(
    AkPluginParamID in_ParamID,
    const void* in_pValue, 
    AkUInt32 in_ulParamSize
) {
    AKRESULT eResult = AK_Success;

    switch (in_ParamID)
    {
	case AK_DELAYFXPARAM_DELAYTIME_ID:	
		NonRTPC.fDelayTime = *(AkReal32*)(in_pValue);
		NonRTPC.bHasChanged = true;
		break;
	case AK_DELAYFXPARAM_FEEDBACK_ID:	// RTPC
	{
		AkReal32 fValue = *(AkReal32*)(in_pValue);
		fValue = AkClamp( fValue, 0.f, 100.f );
		RTPC.fFeedback = fValue * ONEOVER_DELAYFXPARAM_PERCENT_MAX;
		RTPC.bHasChanged = true;
		break;
	}
	case AK_DELAYFXPARAM_WETDRYMIX_ID:	// RTPC
	{
		AkReal32 fValue = *(AkReal32*)(in_pValue);
		fValue = AkClamp( fValue, 0.f, 100.f );
		RTPC.fWetDryMix = fValue * ONEOVER_DELAYFXPARAM_PERCENT_MAX;	
		break;
	}
	case AK_DELAYFXPARAM_OUTPUTGAIN_ID:	// RTPC
	{
		AkReal32 fValue = *(AkReal32*)(in_pValue);
		fValue = AkClamp( fValue, -96.3f, 0.f );
		RTPC.fOutputLevel = powf( 10.f, ( fValue * 0.05f ) ); // Make it a linear value	
		break;
	}
	case AK_DELAYFXPARAM_FEEDBACKENABLED_ID:
		// Note RTPC parameters are always of type float regardless of property type in XML plugin description
		RTPC.bFeedbackEnabled = (*(AkReal32*)(in_pValue)) != 0;
		RTPC.bHasChanged = true;
		break;
	case AK_DELAYFXPARAM_PROCESSLFE_ID:
		NonRTPC.bProcessLFE = *(bool*)(in_pValue);
		NonRTPC.bHasChanged = true;
		break;
	default:
		AKASSERT(!"Invalid parameter.");
		eResult = AK_InvalidParameter;
	}

	return eResult;
}

