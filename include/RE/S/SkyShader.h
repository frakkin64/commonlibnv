#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class SkyShader :
		public BSShader  // 00
	{
	public:
	protected:
		void LoadShaders()
		{
			using func_t = decltype(&SkyShader::LoadShaders);
			static REL::Relocation<func_t> func{ Offsets::SkyShader::LoadShaders };
			func(this);
		}

	public:
		// members
		NiPointer<NiD3DPass>         spPass[8];          // 6C
		NiPointer<NiD3DVertexShader> spVertexShader[8];  // 8C
		NiPointer<NiD3DPixelShader>  spPixelShader[5];   // AC
		float                        pVSParam[1];        // C0
		float                        pPSParam[2];        // C4
	};
}
