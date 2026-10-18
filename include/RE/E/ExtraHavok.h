#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class CellMopp;
	class bhkWorld;

	class ExtraHavok :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraHavok };
		static constexpr auto VTABLE{ VTABLE::ExtraHavok };

		// override (BSExtraData)
		virtual ~ExtraHavok() = default;  // 00

		ExtraHavok* ctor(bhkWorld* apWorld)
		{
			using func_t = ExtraHavok*(__thiscall*)(ExtraHavok*, bhkWorld*);
			static REL::Relocation<func_t> func{ Offsets::ExtraHavok::ctor };
			return func(this, apWorld);
		}

	public:
		// members
		NiPointer<bhkWorld> spWorld;     // 0C
		NiPointer<CellMopp> spCellMopp;  // 10
	};
	static_assert(sizeof(ExtraHavok) == 0x14);
}
