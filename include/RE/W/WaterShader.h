#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiTexture;

	class WaterShader :
		public BSShader  // 00
	{
	public:
	protected:
		void LoadShaders()
		{
			using func_t = decltype(&WaterShader::LoadShaders);
			static REL::Relocation<func_t> func{ Offsets::WaterShader::LoadShaders };
			func(this);
		}

	public:
		// members
		NiPointer<NiD3DPass>         spPass[74];                    // 6C?
		NiPointer<NiD3DVertexShader> spWaterVertexShader;           // 194?
		NiPointer<NiD3DVertexShader> spWaterVertexShader_Vc;        // 198?
		NiPointer<NiD3DVertexShader> spWaterVertexShader_Lighting;  // 19C?
		NiPointer<NiD3DPixelShader>  spWaterPixelShader[38];        // 1A0?
		NiPointer<NiTexture>         pNormalMapTexture;             // 238?
		NiPointer<NiTexture>         pReflectionTexture;            // 23C?
		NiPointer<NiTexture>         pRefractionTexture;            // 240?
		NiPointer<NiTexture>         pInteriorReflectionTexture;    // 244?
		NiPointer<NiTexture>         pDetailTexture;                // 248?
		NiPointer<NiTexture>         pNoiseMap;                     // 24C?
	};
}
