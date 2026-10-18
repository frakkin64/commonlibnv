#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSDistantTreeShader_InstanceData.h"
#include "RE/B/BSShader.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiDX9ShaderDeclaration;

	class BSDistantTreeShader :
		public BSShader  // 00
	{
	public:
		using InstanceData = BSDistantTreeShader_InstanceData;

		static std::uint32_t GetMaxInstances()
		{
			using func_t = decltype(&BSDistantTreeShader::GetMaxInstances);
			static REL::Relocation<func_t> func{ Offsets::BSDistantTreeShader::GetMaxInstances };
			return func();
		}

	protected:
		void LoadShaders()
		{
			using func_t = decltype(&BSDistantTreeShader::LoadShaders);
			static REL::Relocation<func_t> func{ Offsets::BSDistantTreeShader::LoadShaders };
			func(this);
		}

	public:
		// members
		NiPointer<NiD3DPass>              spPass[2];          // 6C
		NiPointer<NiD3DVertexShader>      spVertexShader[1];  // 74
		NiPointer<NiD3DPixelShader>       spPixelShader[2];   // 78
		NiPointer<NiDX9ShaderDeclaration> spDecl;             // 80
		NiColorA                          pFogPropA[2];       // 84
		std::uint32_t                     uiNumInstances;     // A4
		BSDistantTreeShader_InstanceData* pInstanceDataA;     // A8
		NiColorA                          pfAmbientColor;     // AC?
		NiColorA                          pfDiffuseDir;       // BC?
		NiColorA                          pfDiffuseColor;     // CC?
		NiColorA                          pEyeVector;         // DC?
		NiColorA                          pEyePosition;       // EC?
	};
}
