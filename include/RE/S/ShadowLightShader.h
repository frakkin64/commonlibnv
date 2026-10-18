#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DShaderConstantMap;
	class NiDX9ShaderDeclaration;

	class ShadowLightShader :
		public BSShader  // 00
	{
	public:
		// members
		NiPointer<NiDX9ShaderDeclaration> spShaderDecl;                // 6C
		NiPointer<NiDX9ShaderDeclaration> spSkinnedShaderDecl;         // 70
		NiPointer<NiDX9ShaderDeclaration> spModelSpaceNormShaderDecl;  // 74
		NiPointer<NiDX9ShaderDeclaration> spSplatTexturingShaderDecl;  // 78
		NiPointer<NiD3DShaderConstantMap> spTexEffectPConstantMap;     // 7C
		NiPointer<NiD3DShaderConstantMap> spTexEffectVConstantMap;     // 80
		NiPointer<NiD3DShaderConstantMap> spDefaultPixelConstantMap;   // 84
		NiPointer<NiD3DShaderConstantMap> spDefaultVertexConstantMap;  // 88
	};
	static_assert(sizeof(ShadowLightShader) == 0x8C);
}
