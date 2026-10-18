#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/ShadowLightShader.h"

namespace RE
{
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class SkinShader :
		public ShadowLightShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DVertexShader> pVertexShader[26];  // 8C
		NiPointer<NiD3DPixelShader>  pPixelShader[13];   // F4
	};
}
