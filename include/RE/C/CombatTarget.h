#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/C/CombatTimeStamp.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class CombatGroup;

	class CombatTarget
	{
	public:
		CombatTarget* ctor(Actor* apActor, std::uint32_t aiSearch)
		{
			using func_t = CombatTarget*(__thiscall*)(CombatTarget*, Actor*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::CombatTarget::ctor };
			return func(this, apActor, aiSearch);
		}

		void CopyData(CombatTarget* apCombatTarget)
		{
			using func_t = decltype(&CombatTarget::CopyData);
			static REL::Relocation<func_t> func{ Offsets::CombatTarget::CopyData };
			func(this, apCombatTarget);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatTarget::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatTarget::SaveGame };
			func(this, apSaveGameBuffer, apGroup);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatTarget::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatTarget::LoadGame };
			func(this, apLoadGameBuffer, apGroup);
		}

		void InitLoadGame(BGSLoadGameBuffer* apLoadGameBuffer, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatTarget::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatTarget::InitLoadGame };
			func(this, apLoadGameBuffer, apGroup);
		}

		CombatTarget* ctor()
		{
			using func_t = CombatTarget*(__thiscall*)(CombatTarget*);
			static REL::Relocation<func_t> func{ Offsets::CombatTarget::ctor_1 };
			return func(this);
		}

	public:
		// members
		Actor*           pActor;                          // 00
		std::int32_t     iDetectionLevel;                 // 04
		BGSWorldLocation LastNoticedLocation;             // 08
		BGSWorldLocation LastDetectedLocation;            // 18
		BGSWorldLocation LastSeenLocation;                // 28
		BGSWorldLocation LastAttackedMemberLocation;      // 38
		std::uint16_t    sLastSearchNoticed;              // 48
		std::uint16_t    sAttackerCount;                  // 4A
		CombatTimeStamp  fLastSeenTimeStamp;              // 4C
		CombatTimeStamp  fLastDetectedTimeStamp;          // 50
		CombatTimeStamp  fDetectionLevelUpdateTimeStamp;  // 54
		CombatTimeStamp  fLastNoticedTimeStamp;           // 58
		CombatTimeStamp  fDetectionEventTimeStamp;        // 5C
		CombatTimeStamp  fLastAttackedMemberTimeStamp;    // 60
		std::uint8_t     cMemberLOSCount;                 // 64
		std::uint8_t     cMember360LOSCount;              // 65
		std::uint16_t    pad66;                           // 66
	};
	static_assert(sizeof(CombatTarget) == 0x68);
}
