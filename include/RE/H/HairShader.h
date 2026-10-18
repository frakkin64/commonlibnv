#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/ShadowLightShader.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiDX9ShaderDeclaration;

	class HairShader :
		public ShadowLightShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DPass>              spHairPass[2];           // 8C
		NiPointer<NiD3DVertexShader>      spHairVertexShader[7];   // 94
		NiPointer<NiD3DPixelShader>       spHairPixelShader[3];    // B0?
		NiPointer<NiD3DVertexShader>      spHairVertexShader2[7];  // BC?
		NiPointer<NiD3DPixelShader>       spHairPixelShader2[3];   // D8?
		NiPointer<NiDX9ShaderDeclaration> spShaderDecl;            // E4?
		NiPointer<NiDX9ShaderDeclaration> spSkinnedShaderDecl;     // E8?
	};
}
