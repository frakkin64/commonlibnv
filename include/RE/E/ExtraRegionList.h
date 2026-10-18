#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESRegionList;

	class ExtraRegionList :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRegionList };
		static constexpr auto VTABLE{ VTABLE::ExtraRegionList };

		// override (BSExtraData)
		virtual ~ExtraRegionList() = default;  // 00

		ExtraRegionList* ctor(TESRegionList* apList)
		{
			using func_t = ExtraRegionList*(__thiscall*)(ExtraRegionList*, TESRegionList*);
			static REL::Relocation<func_t> func{ Offsets::ExtraRegionList::ctor };
			return func(this, apList);
		}

	public:
		// members
		TESRegionList* pList;  // 0C
	};
	static_assert(sizeof(ExtraRegionList) == 0x10);
}
