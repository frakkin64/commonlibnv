#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenMorphData.h"

namespace RE
{
	class BSFaceGenMorphDifferential;
	class FffTriFileDataS;

	class BSFaceGenMorphDataHair :
		public BSFaceGenMorphData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenMorphDataHair };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenMorphDataHair };

		// override (BSFaceGenMorphData)
		virtual ~BSFaceGenMorphDataHair() = default;  // 00

		BSFaceGenMorphDataHair* ctor(FffTriFileDataS* apFaceGenTri)
		{
			using func_t = BSFaceGenMorphDataHair*(__thiscall*)(BSFaceGenMorphDataHair*, FffTriFileDataS*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenMorphDataHair::ctor };
			return func(this, apFaceGenTri);
		}

	public:
		// members
		BSFaceGenMorphDifferential* pHairMorph;  // 08
	};
	static_assert(sizeof(BSFaceGenMorphDataHair) == 0xC);
}
