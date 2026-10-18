#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AdvancedCombatStyleData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&AdvancedCombatStyleData::Endian);
			static REL::Relocation<func_t> func{ Offsets::AdvancedCombatStyleData::Endian };
			func(this);
		}

	public:
		// members
		float fDodgeFatigueMult;                // 00
		float fDodgeFatigueBase;                // 04
		float fDodgeSpeedBase;                  // 08
		float fDodgeSpeedMult;                  // 0C
		float fDodgeDuringAttackMult;           // 10
		float fDodgeNoAttackMult;               // 14
		float fDodgeBackDuringAttackMult;       // 18
		float fDodgeBackNoAttackMult;           // 1C
		float fDodgeForwardWhileAttackingMult;  // 20
		float fDodgeForwardNotAttackingMult;    // 24
		float fBlockSkillMult;                  // 28
		float fBlockSkillBase;                  // 2C
		float fBlockDuringAttackMult;           // 30
		float fBlockNoAttackMult;               // 34
		float fAttackSkillMult;                 // 38
		float fAttackSkillBase;                 // 3C
		float fAttackDuringAttackMult;          // 40
		float fAttackNoAttackMult;              // 44
		float fAttackDuringBlockMult;           // 48
		float fPowerAttackFatigueBase;          // 4C
		float fPowerAttackFatigueMult;          // 50
	};
	static_assert(sizeof(AdvancedCombatStyleData) == 0x54);
}
