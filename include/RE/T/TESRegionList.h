#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESRegion;

	class __declspec(novtable) TESRegionList :
		public BSSimpleList<TESRegion*>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionList };
		static constexpr auto VTABLE{ VTABLE::TESRegionList };

		// add
		virtual ~TESRegionList() = default;  // 00

		TESRegionList* ctor(bool abOwnsRegionMemory)
		{
			using func_t = TESRegionList*(__thiscall*)(TESRegionList*, bool);
			static REL::Relocation<func_t> func{ Offsets::TESRegionList::ctor };
			return func(this, abOwnsRegionMemory);
		}

	public:
		// members
		bool         bOwnsRegionMemory;  // 0C
		std::uint8_t pad0D[0x3];         // 0D
	};
	static_assert(sizeof(TESRegionList) == 0x10);
}
