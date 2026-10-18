#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenMorph.h"

namespace RE
{
	class BSFaceGenMorphStatistical :
		public BSFaceGenMorph  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenMorphStatistical };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenMorphStatistical };

		// override (BSFaceGenMorph)
		virtual ~BSFaceGenMorphStatistical() = default;  // 00

		BSFaceGenMorphStatistical* ctor(std::uint32_t aiVertsCount, std::uint32_t aiFirstIndex)
		{
			using func_t = BSFaceGenMorphStatistical*(__thiscall*)(BSFaceGenMorphStatistical*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenMorphStatistical::ctor };
			return func(this, aiVertsCount, aiFirstIndex);
		}

	public:
		// members
		std::uint32_t* pWhichMeshVerts;  // 04
		std::uint32_t  iVertsCount;      // 08
		std::uint32_t  iFirstIndex;      // 0C
	};
	static_assert(sizeof(BSFaceGenMorphStatistical) == 0x10);
}
