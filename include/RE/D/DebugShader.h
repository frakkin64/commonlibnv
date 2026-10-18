#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiScreenElements;
	class NiTexture;

	class DebugShader :
		public BSShader  // 00
	{
	public:
	private:
		void LoadShaders()
		{
			using func_t = decltype(&DebugShader::LoadShaders);
			static REL::Relocation<func_t> func{ Offsets::DebugShader::LoadShaders };
			func(this);
		}

	public:
		// members
		NiPointer<NiTexture>         spTextureToRender[16];  // 6C?
		NiPointer<NiScreenElements>  spScreenTriShape;       // AC
		NiPointer<NiD3DVertexShader> spVertexShader;         // B0
		NiPointer<NiD3DPixelShader>  spPixelShader[2];       // B4
		std::uint32_t                curTexIdx;              // BC?
	};
}
