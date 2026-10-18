#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiRenderedTexture;

	class ExtraCellCanopyShadowMask :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCellCanopyShadowMask };
		static constexpr auto VTABLE{ VTABLE::ExtraCellCanopyShadowMask };

		enum class CELL_STATE : std::int32_t
		{
			kCS_NONE = 0x0,
			kCS_PARTIAL = 0x1,
			kCS_FULL = 0x2,
		};

		// override (BSExtraData)
		virtual ~ExtraCellCanopyShadowMask() = default;  // 00

		ExtraCellCanopyShadowMask* ctor(ExtraCellCanopyShadowMask::CELL_STATE aeState, NiRenderedTexture* apTex)
		{
			using func_t = ExtraCellCanopyShadowMask*(__thiscall*)(ExtraCellCanopyShadowMask*, ExtraCellCanopyShadowMask::CELL_STATE, NiRenderedTexture*);
			static REL::Relocation<func_t> func{ Offsets::ExtraCellCanopyShadowMask::ctor };
			return func(this, aeState, apTex);
		}

	public:
		// members
		ExtraCellCanopyShadowMask::CELL_STATE eState;     // 0C
		NiPointer<NiRenderedTexture>          spMask;     // 10
		std::uint8_t                          Rect[0x8];  // 14 opaque
	};
	static_assert(sizeof(ExtraCellCanopyShadowMask) == 0x1C);
}
