#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderLightingProperty.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexturingProperty_ClampMode.h"

namespace RE
{
	class NiTexture;
	class STSPData;

	// not confirmed: no named code in the executable refers to this type
	class SpeedTreeShaderLightingProperty :
		public BSShaderLightingProperty  // 00
	{
	public:
		// members
		NiPointer<NiTexture>          spBaseTexture;     // 7C?
		NiTexturingProperty_ClampMode TextureClampMode;  // 80?
		NiPointer<STSPData>           spData;            // 84?
	};
}
