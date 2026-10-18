#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CombatCoverLocation;
	class CombatLocation;
	class CombatPlanLinkData;
	class CombatPlanner;

	class CombatPlannerData
	{
	public:
		CombatPlannerData* ctor()
		{
			using func_t = CombatPlannerData*(__thiscall*)(CombatPlannerData*);
			static REL::Relocation<func_t> func{ Offsets::CombatPlannerData::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(CombatPlannerData*);
			static REL::Relocation<func_t> func{ Offsets::CombatPlannerData::dtor };
			func(this);
		}

	public:
		// members
		CombatPlanner*       pPlanner;                  // 00
		CombatPlanLinkData*  pLinkData;                 // 04
		CombatLocation*      pCombatLocation[22];       // 08
		CombatCoverLocation* pCombatCoverLocation[22];  // 60?
		float                fCombatLocationCost[22];   // B8?
	};
}
