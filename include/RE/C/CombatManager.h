#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatTimeStamp.h"
#include "RE/C/CombatTimer.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTMap.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class Actor;
	class BGSExplosion;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class CombatController;
	class CombatCoverMap;
	class CombatGroup;
	class CombatTargetMap;
	class CombatThreatMap;
	class NiNode;
	class TESObjectREFR;
	class TESPackage;

	class CombatManager
	{
	public:
		static void Create()
		{
			using func_t = decltype(&CombatManager::Create);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::Create };
			func();
		}

		static void Destroy()
		{
			using func_t = decltype(&CombatManager::Destroy);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::Destroy };
			func();
		}

		CombatManager* ctor()
		{
			using func_t = CombatManager*(__thiscall*)(CombatManager*);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::ctor };
			return func(this);
		}

		void Update(bool abTimeStopped)
		{
			using func_t = decltype(&CombatManager::Update);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::Update };
			func(this, abTimeStopped);
		}

		void UpdateMainThread(bool abTimeStopped)
		{
			using func_t = decltype(&CombatManager::UpdateMainThread);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::UpdateMainThread };
			func(this, abTimeStopped);
		}

		void UpdateDebugGeometry()
		{
			using func_t = decltype(&CombatManager::UpdateDebugGeometry);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::UpdateDebugGeometry };
			func(this);
		}

		CombatGroup* CreateCombatGroup()
		{
			using func_t = decltype(&CombatManager::CreateCombatGroup);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::CreateCombatGroup };
			return func(this);
		}

		CombatGroup* SplitPlayerCombatGroup(Actor* apMember)
		{
			using func_t = decltype(&CombatManager::SplitPlayerCombatGroup);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::SplitPlayerCombatGroup };
			return func(this, apMember);
		}

		CombatController* AddCombatant(Actor* apActor, Actor* apTarget, std::uint32_t aiPriority, bool abHighPriority)
		{
			using func_t = decltype(&CombatManager::AddCombatant);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::AddCombatant };
			return func(this, apActor, apTarget, aiPriority, abHighPriority);
		}

		CombatController* AddGroupMember(Actor* apActor, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatManager::AddGroupMember);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::AddGroupMember };
			return func(this, apActor, apGroup);
		}

		CombatController* AddPretendCombatant(Actor* apActor, TESPackage* apPackage)
		{
			using func_t = decltype(&CombatManager::AddPretendCombatant);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::AddPretendCombatant };
			return func(this, apActor, apPackage);
		}

		void AddSpectatorForCombatGroup(Actor* apSpectator, Actor* apCombatant)
		{
			using func_t = decltype(&CombatManager::AddSpectatorForCombatGroup);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::AddSpectatorForCombatGroup };
			func(this, apSpectator, apCombatant);
		}

		bool GetWanttoHelpGroup(Actor* apActor, Actor* apActorToHelp)
		{
			using func_t = decltype(&CombatManager::GetWanttoHelpGroup);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::GetWanttoHelpGroup };
			return func(this, apActor, apActorToHelp);
		}

		void NotifyCombatGroupRemovedTarget(CombatGroup* apGroup, Actor* apTarget)
		{
			using func_t = decltype(&CombatManager::NotifyCombatGroupRemovedTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::NotifyCombatGroupRemovedTarget };
			func(this, apGroup, apTarget);
		}

		bool CheckExplosionAttack(Actor* apAttacker, BGSExplosion* apExplosion, NiPoint3 const& arTargetedPoint, float afTime)
		{
			using func_t = decltype(&CombatManager::CheckExplosionAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::CheckExplosionAttack };
			return func(this, apAttacker, apExplosion, arTargetedPoint, afTime);
		}

		void ClearReferencePointers(TESObjectREFR* apRef)
		{
			using func_t = decltype(&CombatManager::ClearReferencePointers);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::ClearReferencePointers };
			func(this, apRef);
		}

		void AddLocalActor(Actor* apActor)
		{
			using func_t = decltype(&CombatManager::AddLocalActor);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::AddLocalActor };
			func(this, apActor);
		}

		void TargetLocalActor(Actor* apActor, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatManager::TargetLocalActor);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::TargetLocalActor };
			func(this, apActor, apGroup);
		}

		void UntargetLocalActor(Actor* apActor, CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatManager::UntargetLocalActor);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::UntargetLocalActor };
			func(this, apActor, apGroup);
		}

		std::uint32_t FindLocalActorsInRadius(NiPoint3 aLocation, float afRadius, float a_arg3, Actor* apAttackingActor, std::uint32_t* apOutNumSelf, std::uint32_t* afTime, std::uint32_t* a_arg7, std::uint32_t* a_arg8)
		{
			using func_t = decltype(&CombatManager::FindLocalActorsInRadius);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::FindLocalActorsInRadius };
			return func(this, aLocation, afRadius, a_arg3, apAttackingActor, apOutNumSelf, afTime, a_arg7, a_arg8);
		}

		bool ShouldPlayCombatMusic()
		{
			using func_t = decltype(&CombatManager::ShouldPlayCombatMusic);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::ShouldPlayCombatMusic };
			return func(this);
		}

		std::uint32_t GetCombatantCount(Actor* apActor, std::uint32_t* apNumLost)
		{
			using func_t = decltype(&CombatManager::GetCombatantCount);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::GetCombatantCount };
			return func(this, apActor, apNumLost);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatManager::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatManager::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatManager::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatManager::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		NiTPrimitiveArray<CombatGroup*> CombatGroups;                  // 00
		NiTMap<Actor*, std::int64_t>*   pLocalActorTargetingMap;       // 10
		CombatThreatMap*                pThreatMap;                    // 14
		CombatCoverMap*                 pCoverMap;                     // 18
		CombatTargetMap*                pTargetMap;                    // 1C
		CombatTimeStamp                 fCombatMusicStartedTimeStamp;  // 20
		CombatTimer                     CombatMusicStopTimer;          // 24
		CombatTimer                     CombatMusicUpdateTimer;        // 2C
		std::uint32_t                   iNextGroupID;                  // 34
		NiPointer<NiNode>               spDebugGeometry;               // 38
	};
	static_assert(sizeof(CombatManager) == 0x3C);
}
