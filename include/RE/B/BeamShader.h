#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/B/BSShaderManager_eBSSMPassEnum.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class BeamShader :
		public BSShader  // 00
	{
	public:
		// members
		BSShaderManager_eBSSMPassEnum ePass;               // 6C?
		float                         fTimer;              // 70?
		float                         fVars[16];           // 74?
		NiPointer<NiD3DPass>          spBeamPass;          // B4?
		NiPointer<NiD3DVertexShader>  spBeamVertexShader;  // B8
		NiPointer<NiD3DPixelShader>   spBeamPixelShader;   // BC
	};
}
