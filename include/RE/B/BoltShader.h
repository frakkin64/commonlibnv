#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/B/BSShaderManager_eBSSMPassEnum.h"
#include "RE/B/BoltShader_SegmentData.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class BoltShader :
		public BSShader  // 00
	{
	public:
		using SegmentData = BoltShader_SegmentData;

		// members
		BSShaderManager_eBSSMPassEnum ePass;               // 6C?
		BoltShader_SegmentData*       pSegmentData;        // 70
		float                         fTimer;              // 74
		float                         fTortuosity[40];     // 78
		NiColorA                      EyePosition;         // 118
		float                         fVars[16];           // 128
		NiPointer<NiD3DPass>          spBoltPass;          // 168
		NiColorA                      CoreColor;           // 16C
		NiColorA                      GlowColor;           // 17C
		NiPointer<NiD3DVertexShader>  spBoltVertexShader;  // 18C
		NiPointer<NiD3DPixelShader>   spBoltPixelShader;   // 190
	};
}
