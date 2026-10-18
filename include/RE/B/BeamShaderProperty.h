#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiGeometry;
	class NiTexture;

	// not confirmed: no named code in the executable refers to this type
	class BeamShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		// members
		float                fLength;       // 60?
		float                fWidth;        // 64?
		float                fAspectRatio;  // 68?
		float                fAlpha;        // 6C?
		NiGeometry*          pMyGeometry;   // 70?
		NiPointer<NiTexture> spTexture;     // 74?
	};
}
