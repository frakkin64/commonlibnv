#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenMorphData.h"
#include "RE/B/BS_FACEGEN_MORPH_TYPE.h"

namespace RE
{
	class BSFaceGenBaseMorphExtraData;
	class BSFaceGenMorph;
	class FffTriFileDataS;
	class NiTriBasedGeom;

	class BSFaceGenMorphDataHead :
		public BSFaceGenMorphData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenMorphDataHead };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenMorphDataHead };

		// override (BSFaceGenMorphData)
		virtual ~BSFaceGenMorphDataHead() = default;  // 00

		BSFaceGenMorphDataHead* ctor(FffTriFileDataS* apFaceGenTri)
		{
			using func_t = BSFaceGenMorphDataHead*(__thiscall*)(BSFaceGenMorphDataHead*, FffTriFileDataS*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenMorphDataHead::ctor };
			return func(this, apFaceGenTri);
		}

		void ApplyMorph(BS_FACEGEN_MORPH_TYPE aeType, std::int32_t aiIndex, NiTriBasedGeom* apGeom, BSFaceGenBaseMorphExtraData* apBaseMorph, float afModifier)
		{
			using func_t = decltype(&BSFaceGenMorphDataHead::ApplyMorph);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenMorphDataHead::ApplyMorph };
			func(this, aeType, aiIndex, apGeom, apBaseMorph, afModifier);
		}

	public:
		// members
		BSFaceGenMorph** ppExpressionMorphs;  // 08
		BSFaceGenMorph** ppModifierMorphs;    // 0C
		BSFaceGenMorph** ppPhonemeMorphs;     // 10
		BSFaceGenMorph** ppCustomMorphs;      // 14
	};
	static_assert(sizeof(BSFaceGenMorphDataHead) == 0x18);
}
