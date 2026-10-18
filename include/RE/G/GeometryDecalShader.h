#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiShaderConstantMapEntry;

	class GeometryDecalShader :
		public BSShader  // 00
	{
	public:
	protected:
		void LoadShaders()
		{
			using func_t = decltype(&GeometryDecalShader::LoadShaders);
			static REL::Relocation<func_t> func{ Offsets::GeometryDecalShader::LoadShaders };
			func(this);
		}

	public:
		// members
		NiPointer<NiD3DPass>                spGeometryDecalPass[2];          // 6C
		NiPointer<NiD3DVertexShader>        spGeometryDecalVertexShader[2];  // 74
		NiPointer<NiD3DPixelShader>         spGeometryDecalPixelShader[2];   // 7C
		NiPointer<NiShaderConstantMapEntry> spVSCMETransform;                // 84
		NiPointer<NiShaderConstantMapEntry> spVSCMESkinTransform;            // 88
		NiPointer<NiShaderConstantMapEntry> spVSCMEBoneMatrix;               // 8C
	};
}
