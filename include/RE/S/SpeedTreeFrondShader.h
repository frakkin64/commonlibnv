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

	class SpeedTreeFrondShader :
		public BSShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DVertexShader> pVertexShader[4];  // 6C
		NiPointer<NiD3DPixelShader>  pPixelShader[2];   // 7C?
		NiPointer<NiD3DPass>         sp1StagePass;      // 84?
		NiColorA                     pLightPosition;    // 88?
		NiColorA                     pLightDirection;   // 98?
	};
}
