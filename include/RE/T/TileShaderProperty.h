#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/B/BSStringT.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiTexture;

	class TileShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		void SetUseTexScroll(bool abUseTexScroll)
		{
			using func_t = decltype(&TileShaderProperty::SetUseTexScroll);
			static REL::Relocation<func_t> func{ Offsets::TileShaderProperty::SetUseTexScroll };
			func(this, abUseTexScroll);
		}

		void SetTileTexture(NiTexture* apTexture)
		{
			using func_t = decltype(&TileShaderProperty::SetTileTexture);
			static REL::Relocation<func_t> func{ Offsets::TileShaderProperty::SetTileTexture };
			func(this, apTexture);
		}

	public:
		// members
		// not placed: fAlpha, fTexScrollX, fTexScrollY, fTexScaleX, fTexScaleY, TexClampMode, bNoBlend
		NiPointer<NiTexture> spTileTexture;          // 60
		NiPointer<NiTexture> spAlphaMap;             // 64
		NiColorA             TintColor;              // 68
		std::uint8_t         pad78[0x18];            // 78
		bool                 bUseTexScroll;          // 90
		bool                 bUseVertexColors;       // 91
		bool                 bUseTexturingProperty;  // 92
		std::uint8_t         pad93;                  // 93
		BSStringT<char>      TextureFilename;        // 94
		tagRECT              ScissorRect;            // 9C
		bool                 bUseScissor;            // AC
		std::uint8_t         padAD[0x3];             // AD
	};
}
