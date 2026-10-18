#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiDX9ShaderDeclaration;

	class TileShader :
		public BSShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DPass>              spTileShaderPass[1];    // 6C
		NiPointer<NiD3DVertexShader>      spTileVertexShader[3];  // 70
		NiPointer<NiD3DPixelShader>       spTilePixelShader[3];   // 7C
		NiPointer<NiDX9ShaderDeclaration> spShaderDecl;           // 88?
		NiPointer<NiDX9ShaderDeclaration> spShaderDeclVC;         // 8C?
	};
}
