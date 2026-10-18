#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/ShadowLightShader.h"

namespace RE
{
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class SpeedTreeBranchShader :
		public ShadowLightShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DVertexShader> pVertexShader[30];  // 8C
		NiPointer<NiD3DPixelShader>  pPixelShader[10];   // 104
	};
}
