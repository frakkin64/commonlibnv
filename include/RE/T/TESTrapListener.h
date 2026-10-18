#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSZoneTargetListener.h"
#include "RE/B/bhkTrapListener.h"

namespace RE
{
	class TESObjectREFR;
	class TriggerEntry;
	class ZoneEntry;
	class hkpCollidable;

	class TESTrapListener :
		public BGSZoneTargetListener,  // 00
		public bhkTrapListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::TESTrapListener };
		static constexpr auto VTABLE{ VTABLE::TESTrapListener };

		// override (BGSZoneTargetListener)
		virtual ~TESTrapListener() = default;                                                            // 00
		virtual ZoneEntry* CreateZoneEntry(TESObjectREFR* apZone, hkpCollidable const* apCol) override;  // 01

		TESTrapListener* ctor()
		{
			using func_t = TESTrapListener*(__thiscall*)(TESTrapListener*);
			static REL::Relocation<func_t> func{ Offsets::TESTrapListener::ctor };
			return func(this);
		}

	public:
		// members
		TriggerEntry* pTriggers;  // 20
	};
	static_assert(sizeof(TESTrapListener) == 0x24);
}
