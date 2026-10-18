#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CombatStyleData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&CombatStyleData::Endian);
			static REL::Relocation<func_t> func{ Offsets::CombatStyleData::Endian };
			func(this);
		}

	public:
		// members
		char          cDodgeChance;                     // 00
		char          cDodgeLeftRightChance;            // 01
		std::uint16_t pad02;                            // 02
		float         fDodgeLeftRightMinTime;           // 04
		float         fDodgeLeftRightMaxTime;           // 08
		float         fDodgeForwardMinTime;             // 0C
		float         fDodgeForwardMaxTime;             // 10
		float         fDodgeBackwardMinTime;            // 14
		float         fDodgeBackwardMaxTime;            // 18
		float         fIdleMinTime;                     // 1C
		float         fIdleMaxTime;                     // 20
		char          cBlockChance;                     // 24
		char          cAttackChance;                    // 25
		std::uint16_t pad26;                            // 26
		float         fAttackDuringRecoilStaggerBonus;  // 28
		float         fAttackDuringUnconsciousBonus;    // 2C
		float         fAttackHandBonus;                 // 30
		char          cPowerAttackChance;               // 34
		std::uint8_t  pad35[0x3];                       // 35
		float         fPowerAttackRecoilStaggerBonus;   // 38
		float         fPowerAttackUnconsciousBonus;     // 3C
		char          cPowerAttackNormalChance;         // 40
		char          cPowerAttackForwardChance;        // 41
		char          cPowerAttackBackwardChance;       // 42
		char          cPowerAttackLeftChance;           // 43
		char          cPowerAttackRightChance;          // 44
		std::uint8_t  pad45[0x3];                       // 45
		float         fHoldMinTime;                     // 48
		float         fHoldMaxTime;                     // 4C
		std::uint32_t iFlags;                           // 50
		char          cAcrobaticDodgeChance;            // 54
		char          cRushingAttackPercentChance;      // 55
		std::uint16_t pad56;                            // 56
		float         fRushingAttackDistanceMult;       // 58
	};
	static_assert(sizeof(CombatStyleData) == 0x5C);
}
