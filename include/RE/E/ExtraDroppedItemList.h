#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraDroppedItemList :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraDroppedItemList };
		static constexpr auto VTABLE{ VTABLE::ExtraDroppedItemList };

		// override (BSExtraData)
		virtual ~ExtraDroppedItemList() = default;  // 00

		ExtraDroppedItemList* ctor()
		{
			using func_t = ExtraDroppedItemList*(__thiscall*)(ExtraDroppedItemList*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDroppedItemList::ctor };
			return func(this);
		}

	public:
		// members
		BSSimpleList<TESObjectREFR*> DroppedItemList;  // 0C
	};
	static_assert(sizeof(ExtraDroppedItemList) == 0x14);
}
