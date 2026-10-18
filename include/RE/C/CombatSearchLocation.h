#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/N/NiColorA.h"

namespace RE
{
	class CombatSearchLocation
	{
	public:
		float GetModifiedScore(BGSWorldLocation const& arMemberWorldLoc)
		{
			using func_t = decltype(&CombatSearchLocation::GetModifiedScore);
			static REL::Relocation<func_t> func{ Offsets::CombatSearchLocation::GetModifiedScore };
			return func(this, arMemberWorldLoc);
		}

		float GetScore()
		{
			using func_t = decltype(&CombatSearchLocation::GetScore);
			static REL::Relocation<func_t> func{ Offsets::CombatSearchLocation::GetScore };
			return func(this);
		}

		NiColorA GetColor()
		{
			using func_t = decltype(&CombatSearchLocation::GetColor);
			static REL::Relocation<func_t> func{ Offsets::CombatSearchLocation::GetColor };
			return func(this);
		}

		CombatSearchLocation* ctor()
		{
			using func_t = CombatSearchLocation*(__thiscall*)(CombatSearchLocation*);
			static REL::Relocation<func_t> func{ Offsets::CombatSearchLocation::ctor };
			return func(this);
		}

	public:
		// members
		BGSWorldLocation WorldLoc;    // 00
		CombatTimeStamp  fTimeStamp;  // 10
		std::uint32_t    iTargetID;   // 14
		float            fScore;      // 18
	};
	static_assert(sizeof(CombatSearchLocation) == 0x1C);
}
