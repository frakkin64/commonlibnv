#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/B/BSShaderManager_eBSSMPassEnum.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiShaderConstantMapEntry;
	class TallGrassGroup_GrassInstanceData;

	class TallGrassShader :
		public BSShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DPass>              spPass[44];               // 6C
		float                             fWindTimer;               // 11C
		BSShaderManager_eBSSMPassEnum     ePass;                    // 120
		bool                              bFirstPass;               // 124
		std::uint8_t                      pad125[0x3];              // 125
		NiPointer<NiD3DVertexShader>      spVertexShaders[24];      // 128
		NiPointer<NiD3DPixelShader>       spPixelShaders[5];        // 188
		TallGrassGroup_GrassInstanceData* pGrassInstanceData;       // 19C
		NiShaderConstantMapEntry*         pGrassInstanceDataEntry;  // 1A0
		std::uint16_t                     iInstanceDataCount;       // 1A4
		std::uint16_t                     pad1A6;                   // 1A6
		NiColorA                          pfPointLightColor;        // 1A8
		NiColorA                          pfPointLightData;         // 1B8?
		NiColorA                          pfAlphaTestRef;           // 1C8?
	};
}
