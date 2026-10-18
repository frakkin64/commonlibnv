#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class VolumetricFogShader :
		public BSShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DPass>         spPass[3];          // 6C
		NiPointer<NiD3DVertexShader> spVertexShader[2];  // 78
		NiPointer<NiD3DPixelShader>  spPixelShader[4];   // 80
		NiColorA                     fVars;              // 90?
		NiColorA                     fFogProps;          // A0?
	};
}
