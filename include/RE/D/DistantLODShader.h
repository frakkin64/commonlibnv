#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/B/BSShaderManager_eBSSMPassEnum.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class DistantLODGroup_DistantLODInstanceData;
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiShaderConstantMapEntry;

	class DistantLODShader :
		public BSShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DPass>                    spPass[1];                     // 6C
		float                                   fWindTimer;                    // 70
		BSShaderManager_eBSSMPassEnum           ePass;                         // 74
		bool                                    bFirstPass;                    // 78
		std::uint8_t                            pad79[0x3];                    // 79
		NiPointer<NiD3DVertexShader>            spVertexShaders[4];            // 7C
		NiPointer<NiD3DPixelShader>             spPixelShaders[2];             // 8C
		DistantLODGroup_DistantLODInstanceData* pDistantLODInstanceData;       // 94
		NiShaderConstantMapEntry*               pDistantLODInstanceDataEntry;  // 98
		std::uint16_t                           iInstanceDataCount;            // 9C
		std::uint16_t                           pad9E;                         // 9E
		NiColorA                                pfAmbientColor;                // A0?
		NiColorA                                pfDiffuseDir;                  // B0?
		NiColorA                                pfDiffuseColor;                // C0?
		NiColorA                                pfAlphaTestRef;                // D0?
		NiColorA                                pEyeVector;                    // E0?
		NiColorA                                pEyePosition;                  // F0?
		float                                   fNumVertices;                  // 100?
	};
}
