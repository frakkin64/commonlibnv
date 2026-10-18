#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class CombatGroup;
	class CombatGroupCluster;

	class CombatMember
	{
	public:
		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatMember::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatMember::SaveGame };
			func(this, apSaveGameBuffer, apGroup);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatMember::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatMember::LoadGame };
			func(this, apLoadGameBuffer, apGroup);
		}

	public:
		// members
		Actor*              pActor;                    // 00
		std::uint32_t       iGroupStrategyAssignment;  // 04
		float               fDamagePerSecond;          // 08
		float               fCombatStrength;           // 0C
		CombatGroupCluster* pCluster;                  // 10
	};
	static_assert(sizeof(CombatMember) == 0x14);
}
