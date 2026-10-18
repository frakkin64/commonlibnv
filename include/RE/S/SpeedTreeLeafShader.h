#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class SpeedTreeLeafShader :
		public BSShader  // 00
	{
	public:
		// members
		float                        pLeafMaps[48][4];  // 6C
		NiPointer<NiD3DVertexShader> pVertexShader[4];  // 36C
		NiPointer<NiD3DPixelShader>  pPixelShader[2];   // 37C?
		NiPointer<NiD3DPass>         sp1StagePass[2];   // 384?
	};
}
