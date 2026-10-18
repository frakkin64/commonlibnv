#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenMorph.h"

namespace RE
{
	class NiPoint3;

	class BSFaceGenMorphDifferential :
		public BSFaceGenMorph  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenMorphDifferential };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenMorphDifferential };

		// override (BSFaceGenMorph)
		virtual ~BSFaceGenMorphDifferential() = default;  // 00

		BSFaceGenMorphDifferential* ctor(std::uint32_t aiVertsCount)
		{
			using func_t = BSFaceGenMorphDifferential*(__thiscall*)(BSFaceGenMorphDifferential*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenMorphDifferential::ctor };
			return func(this, aiVertsCount);
		}

	public:
		// members
		NiPoint3*     pVerts;       // 04
		std::uint32_t iVertsCount;  // 08
	};
	static_assert(sizeof(BSFaceGenMorphDifferential) == 0xC);
}
