#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkTTNode.h"
#include "RE/T/TESObjectREFR.h"
#include "RE/T/TriggerEntry_RefList.h"
#include "RE/T/TriggerEntry_TriggerEvent.h"
#include "RE/T/TriggerEntry_TriggerStatus.h"

namespace RE
{
	class hkpCollidable;

	class TriggerEntry :
		public bhkTTNode<TESObjectREFR>  // 00
	{
	public:
		using RefList = TriggerEntry_RefList;
		using TriggerEvent = TriggerEntry_TriggerEvent;
		using TriggerStatus = TriggerEntry_TriggerStatus;

		bool Update(float afDelta)
		{
			using func_t = decltype(&TriggerEntry::Update);
			static REL::Relocation<func_t> func{ Offsets::TriggerEntry::Update };
			return func(this, afDelta);
		}

		TriggerEntry* ctor(TESObjectREFR* apRef, hkpCollidable const* apCol)
		{
			using func_t = TriggerEntry*(__thiscall*)(TriggerEntry*, TESObjectREFR*, hkpCollidable const*);
			static REL::Relocation<func_t> func{ Offsets::TriggerEntry::ctor };
			return func(this, apRef, apCol);
		}

	public:
		// members
		TriggerEntry_RefList CurrentRefs;  // 10
	};
	static_assert(sizeof(TriggerEntry) == 0x2C);
}
