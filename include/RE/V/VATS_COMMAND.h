#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActionPoints_Action.h"
#include "RE/A/ActorValue_Index.h"

namespace RE
{
	class HitData;
	class TESObjectREFR;

	class VATS_COMMAND
	{
	public:
		VATS_COMMAND* ctor()
		{
			using func_t = VATS_COMMAND*(__thiscall*)(VATS_COMMAND*);
			static REL::Relocation<func_t> func{ Offsets::VATS_COMMAND::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(VATS_COMMAND*);
			static REL::Relocation<func_t> func{ Offsets::VATS_COMMAND::dtor };
			func(this);
		}

	public:
		// members
		ActionPoints_Action eAction;            // 00
		bool                bSuccess;           // 04
		bool                bIronSights;        // 05
		bool                bStranger;          // 06
		bool                bParalyzingPalm;    // 07
		std::uint8_t        cFireShots;         // 08
		std::uint8_t        cFakeFireShots;     // 09
		std::uint16_t       pad0A;              // 0A
		TESObjectREFR*      pTarget;            // 0C
		ActorValue_Index    eLimb;              // 10
		HitData*            pHitData;           // 14
		float               fTotalDamage;       // 18
		float               fCumulativeDamage;  // 1C
		float               fActionPoints;      // 20
		bool                bMissFortune;       // 24
		std::uint8_t        pad25[0x3];         // 25
	};
	static_assert(sizeof(VATS_COMMAND) == 0x28);
}
