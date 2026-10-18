#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSList.h"
#include "RE/T/TriggerEntry_RefList_RefStatus.h"

namespace RE
{
	class TESObjectREFR;
	class TriggerEntry_TriggerEvent;

	class TriggerEntry_RefList
	{
	public:
		using RefStatus = TriggerEntry_RefList_RefStatus;

		TriggerEntry_RefList* ctor()
		{
			using func_t = TriggerEntry_RefList*(__thiscall*)(TriggerEntry_RefList*);
			static REL::Relocation<func_t> func{ Offsets::TriggerEntry_RefList::ctor };
			return func(this);
		}

		void ForceLeaveTrigger(TESObjectREFR* apTriggerRef)
		{
			using func_t = decltype(&TriggerEntry_RefList::ForceLeaveTrigger);
			static REL::Relocation<func_t> func{ Offsets::TriggerEntry_RefList::ForceLeaveTrigger };
			func(this, apTriggerRef);
		}

		bool Add(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TriggerEntry_RefList::Add);
			static REL::Relocation<func_t> func{ Offsets::TriggerEntry_RefList::Add };
			return func(this, apRef);
		}

	public:
		// members
		TriggerEntry_RefList_RefStatus*    pRefArray;      // 00
		std::int32_t                       iArraySize;     // 04
		std::int32_t                       iArrayMaxSize;  // 08
		BSList<TriggerEntry_TriggerEvent*> EventList;      // 0C
	};
}
