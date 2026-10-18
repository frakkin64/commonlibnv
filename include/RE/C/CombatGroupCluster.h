#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class CombatGroup;

	class CombatGroupCluster
	{
	public:
		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatGroupCluster::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupCluster::SaveGame };
			func(this, apSaveGameBuffer, apGroup);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatGroupCluster::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupCluster::LoadGame };
			func(this, apLoadGameBuffer, apGroup);
		}

		CombatGroupCluster* ctor()
		{
			using func_t = CombatGroupCluster*(__thiscall*)(CombatGroupCluster*);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupCluster::ctor };
			return func(this);
		}

	public:
		// members
		BGSWorldLocation Center;        // 00
		std::uint32_t    iMemberCount;  // 10
	};
	static_assert(sizeof(CombatGroupCluster) == 0x14);
}
