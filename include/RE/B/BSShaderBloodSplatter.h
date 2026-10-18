#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class BSShaderBloodSplatter :
		public BSShader  // 00
	{
	public:
		BSShaderBloodSplatter* ctor()
		{
			using func_t = BSShaderBloodSplatter*(__thiscall*)(BSShaderBloodSplatter*);
			static REL::Relocation<func_t> func{ Offsets::BSShaderBloodSplatter::ctor };
			return func(this);
		}

	protected:
		void LoadShaders()
		{
			using func_t = decltype(&BSShaderBloodSplatter::LoadShaders);
			static REL::Relocation<func_t> func{ Offsets::BSShaderBloodSplatter::LoadShaders };
			func(this);
		}

	public:
		// members
		NiPointer<NiD3DPass>         spPass[2];          // 6C
		NiPointer<NiD3DVertexShader> spVertexShader[2];  // 74
		NiPointer<NiD3DPixelShader>  spPixelShader[2];   // 7C
	};
}
