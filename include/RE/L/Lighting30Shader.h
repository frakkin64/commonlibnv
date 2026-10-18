#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DShaderConstantMap;
	class NiDX9ShaderDeclaration;
	class NiGeometryData_RendererData;

	class Lighting30Shader :
		public BSShader  // 00
	{
	public:
		// members
		NiPointer<NiD3DShaderConstantMap> spTexEffectPConstantMap;     // 6C?
		NiPointer<NiD3DShaderConstantMap> spTexEffectVConstantMap;     // 70?
		NiPointer<NiD3DShaderConstantMap> spDefaultPixelConstantMap;   // 74?
		NiPointer<NiD3DShaderConstantMap> spDefaultVertexConstantMap;  // 78?
		NiPointer<NiDX9ShaderDeclaration> spShaderDecl;                // 7C?
		NiPointer<NiDX9ShaderDeclaration> spShaderDeclNC;              // 80?
		NiPointer<NiDX9ShaderDeclaration> spShaderDeclVC;              // 84?
		NiPointer<NiDX9ShaderDeclaration> spShaderDeclVCNC;            // 88?
		NiPointer<NiDX9ShaderDeclaration> spSkinnedShaderDecl;         // 8C?
		NiPointer<NiDX9ShaderDeclaration> spSkinnedShaderDeclNC;       // 90?
		NiPointer<NiDX9ShaderDeclaration> spSkinnedShaderDeclVC;       // 94?
		NiPointer<NiDX9ShaderDeclaration> spSkinnedShaderDeclVCNC;     // 98?
		NiGeometryData_RendererData*      pLastGeometryBufferData;     // 9C?
		std::uint32_t                     iZWriteEnable;               // A0?
	};
}
