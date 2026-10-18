#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiTexture;

	class BSShaderPPLightingProperty_TextureEffectData :
		public NiRefObject  // 00
	{
	public:
		// members
		NiPointer<NiTexture> spTexture;          // 08?
		NiColorA             CurrentFillColor;   // 0C?
		NiColorA             CurrentRimColor;    // 1C?
		NiColorA             FillColor;          // 2C?
		NiColorA             RimColor;           // 3C?
		float                fTextureUOffset;    // 4C?
		float                fTextureVOffset;    // 50?
		float                fEdgeExponent;      // 54?
		float                fBoundDiameter;     // 58?
		std::uint32_t        eSrcBlendMode;      // 5C?
		std::uint32_t        eDestBlendMode;     // 60?
		std::uint32_t        eBlendOperation;    // 64?
		std::uint32_t        eZTestFunction;     // 68?
		NiPointer<NiTexture> spBlockOutTexture;  // 6C?
		std::uint32_t        iAlphaTest;         // 70?
	};
}
