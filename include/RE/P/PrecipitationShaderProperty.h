#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiBillboardNode_FaceMode.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexturingProperty_ClampMode.h"

namespace RE
{
	class NiTexture;

	class PrecipitationShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		enum class PrecipitationType : std::int32_t
		{
			kPRECIPTYPE_RAIN = 0x0,
			kPRECIPTYPE_SNOW = 0x1,
			kPRECIPTYPE_MAX = 0x2,
		};

		// members
		std::int32_t                                   iParticleCount;    // 60
		float                                          fRenderPCT;        // 64
		float                                          fRotationSpeed;    // 68
		NiPoint3                                       kMin;              // 6C
		NiPoint3                                       kMax;              // 78
		NiPoint3                                       kVelocity;         // 84
		NiPointer<NiTexture>                           spBaseTexture;     // 90
		NiTexturingProperty_ClampMode                  TextureClampMode;  // 94
		NiBillboardNode_FaceMode                       eFaceMode;         // 98
		PrecipitationShaderProperty::PrecipitationType ePrecipType;       // 9C?
	};
}
