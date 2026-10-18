#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/C/CombatMember.h"
#include "RE/C/CombatSearchDoor.h"
#include "RE/C/CombatSearchLocation.h"
#include "RE/C/CombatTarget.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/C/CombatTimer.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class CombatController;
	class CombatGoal;
	class CombatGroupCluster;
	class CombatGroupStrategy;
	class NiNode;
	class PathingAvoidNodeArray;
	class PathingLOSGridMap;
	class TESObjectREFR;

	class CombatGroup
	{
	public:
		Actor* GetMember(std::uint32_t aiIndex)
		{
			using func_t = decltype(&CombatGroup::GetMember);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetMember };
			return func(this, aiIndex);
		}

		Actor* GetTarget(std::uint32_t aiIndex)
		{
			using func_t = decltype(&CombatGroup::GetTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetTarget };
			return func(this, aiIndex);
		}

		bool IsSearching()
		{
			using func_t = decltype(&CombatGroup::IsSearching);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::IsSearching };
			return func(this);
		}

		CombatGroup* ctor(std::uint32_t aiGroupID)
		{
			using func_t = CombatGroup*(__thiscall*)(CombatGroup*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ctor };
			return func(this, aiGroupID);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(CombatGroup*);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::dtor };
			func(this);
		}

		void Update()
		{
			using func_t = decltype(&CombatGroup::Update);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::Update };
			func(this);
		}

		void ForceCombatGroupStrategy(CombatGroupStrategy* apStrategy)
		{
			using func_t = decltype(&CombatGroup::ForceCombatGroupStrategy);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ForceCombatGroupStrategy };
			func(this, apStrategy);
		}

		bool AddTarget(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::AddTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::AddTarget };
			return func(this, apActor);
		}

		void RemoveTarget(Actor* apActor)
		{
			using func_t = void (CombatGroup::*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::RemoveTarget };
			func(this, apActor);
		}

		bool IsTarget(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::IsTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::IsTarget };
			return func(this, apActor);
		}

		bool CanAddTarget(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::CanAddTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CanAddTarget };
			return func(this, apActor);
		}

		void CopyTargets(CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatGroup::CopyTargets);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CopyTargets };
			func(this, apGroup);
		}

		bool AddMember(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::AddMember);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::AddMember };
			return func(this, apActor);
		}

		void RemoveMember(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::RemoveMember);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::RemoveMember };
			func(this, apActor);
		}

		bool IsMember(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::IsMember);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::IsMember };
			return func(this, apActor);
		}

		Actor* GetBestTarget(Actor* apMember)
		{
			using func_t = decltype(&CombatGroup::GetBestTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetBestTarget };
			return func(this, apMember);
		}

		void IncrementAttackerCount(Actor* apTarget)
		{
			using func_t = decltype(&CombatGroup::IncrementAttackerCount);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::IncrementAttackerCount };
			func(this, apTarget);
		}

		bool MergeGroup(CombatGroup* apCombatGroup)
		{
			using func_t = decltype(&CombatGroup::MergeGroup);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::MergeGroup };
			return func(this, apCombatGroup);
		}

		void ClearReferencePointers(TESObjectREFR* apRef)
		{
			using func_t = decltype(&CombatGroup::ClearReferencePointers);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ClearReferencePointers };
			func(this, apRef);
		}

		void UpdateDebugGeometry(bool abForceClear)
		{
			using func_t = decltype(&CombatGroup::UpdateDebugGeometry);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateDebugGeometry };
			func(this, abForceClear);
		}

		std::uint32_t GetSearchLocationCount()
		{
			using func_t = decltype(&CombatGroup::GetSearchLocationCount);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetSearchLocationCount };
			return func(this);
		}

		CombatSearchLocation& GetSearchLocation(std::uint32_t aiIndex)
		{
			using func_t = decltype(&CombatGroup::GetSearchLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetSearchLocation };
			return func(this, aiIndex);
		}

		void GetTargetDetectionLevel(Actor* apAttacker, Actor* apTarget, std::int32_t& ariDetectionLevel, CombatTimeStamp& arfLastTargetDetectedTimeStamp, bool& arbTargetLineOfSight, bool& arbTarget360LineOfSight)
		{
			using func_t = void (CombatGroup::*)(Actor*, Actor*, std::int32_t&, CombatTimeStamp&, bool&, bool&);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetTargetDetectionLevel };
			func(this, apAttacker, apTarget, ariDetectionLevel, arfLastTargetDetectedTimeStamp, arbTargetLineOfSight, arbTarget360LineOfSight);
		}

		std::int32_t GetTargetDetectionLevel(Actor* apTarget)
		{
			using func_t = std::int32_t (CombatGroup::*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetTargetDetectionLevel_1 };
			return func(this, apTarget);
		}

		bool GetTargetLastDetectedLocation(Actor* apTarget, BGSWorldLocation& arLastDetectedLocation)
		{
			using func_t = decltype(&CombatGroup::GetTargetLastDetectedLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetTargetLastDetectedLocation };
			return func(this, apTarget, arLastDetectedLocation);
		}

		void NotifyMemberPlanFinished(CombatController* apCombatController, CombatGoal* apGoal)
		{
			using func_t = decltype(&CombatGroup::NotifyMemberPlanFinished);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::NotifyMemberPlanFinished };
			func(this, apCombatController, apGoal);
		}

		void NotifyMemberHit(Actor* apMember, Actor* apAttacker)
		{
			using func_t = decltype(&CombatGroup::NotifyMemberHit);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::NotifyMemberHit };
			func(this, apMember, apAttacker);
		}

		PathingAvoidNodeArray* CreateMovementAvoidNodeArray(Actor* apActor, NiPoint3 const& arDestination, float afExtraRadius, PathingAvoidNodeArray* apExistingAvoidNodeArray, Actor* apIgnoreActor)
		{
			using func_t = decltype(&CombatGroup::CreateMovementAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CreateMovementAvoidNodeArray };
			return func(this, apActor, arDestination, afExtraRadius, apExistingAvoidNodeArray, apIgnoreActor);
		}

		PathingAvoidNodeArray* CreateFlankingAvoidNodeArray(Actor* apActor, NiPoint3 const& arDestination, float a_arg3, PathingAvoidNodeArray* a_arg4)
		{
			using func_t = decltype(&CombatGroup::CreateFlankingAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CreateFlankingAvoidNodeArray };
			return func(this, apActor, arDestination, a_arg3, a_arg4);
		}

		PathingAvoidNodeArray* CreateFleeAvoidNodeArray(Actor* apActor, PathingAvoidNodeArray* apExistingAvoidNodeArray)
		{
			using func_t = decltype(&CombatGroup::CreateFleeAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CreateFleeAvoidNodeArray };
			return func(this, apActor, apExistingAvoidNodeArray);
		}

		Actor* FindTargetNearLocation(BGSWorldLocation const& arWorldLoc, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&CombatGroup::FindTargetNearLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindTargetNearLocation };
			return func(this, arWorldLoc, a_arg2, a_arg3);
		}

		Actor* FindMemberNearLocation(BGSWorldLocation const& arWorldLoc, float a_arg2, Actor* a_arg3)
		{
			using func_t = decltype(&CombatGroup::FindMemberNearLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindMemberNearLocation };
			return func(this, arWorldLoc, a_arg2, a_arg3);
		}

		Actor* FindMemberNearActor(Actor* apActor, float afRadius)
		{
			using func_t = decltype(&CombatGroup::FindMemberNearActor);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindMemberNearActor };
			return func(this, apActor, afRadius);
		}

		Actor* FindClosestMemberToLocation(BGSWorldLocation const& arWorldLoc, Actor* apIgnoreMember, float afMaxDistance)
		{
			using func_t = decltype(&CombatGroup::FindClosestMemberToLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindClosestMemberToLocation };
			return func(this, arWorldLoc, apIgnoreMember, afMaxDistance);
		}

		Actor* FindClosestMemberToActor(Actor* apActor, float afMaxDistance)
		{
			using func_t = decltype(&CombatGroup::FindClosestMemberToActor);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindClosestMemberToActor };
			return func(this, apActor, afMaxDistance);
		}

		bool CheckMemberTargetIntersection()
		{
			using func_t = decltype(&CombatGroup::CheckMemberTargetIntersection);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CheckMemberTargetIntersection };
			return func(this);
		}

		float ComputeMemberBoundingSphere(NiPoint3& arCenter)
		{
			using func_t = decltype(&CombatGroup::ComputeMemberBoundingSphere);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ComputeMemberBoundingSphere };
			return func(this, arCenter);
		}

		float ComputeTargetBoundingSphere(NiPoint3& arCenter)
		{
			using func_t = decltype(&CombatGroup::ComputeTargetBoundingSphere);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ComputeTargetBoundingSphere };
			return func(this, arCenter);
		}

		void ComputeMemberBoundingBox(NiPoint3* apCorners, bool abAlreadyInitialized)
		{
			using func_t = decltype(&CombatGroup::ComputeMemberBoundingBox);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ComputeMemberBoundingBox };
			func(this, apCorners, abAlreadyInitialized);
		}

		void ComputeTargetBoundingBox(NiPoint3* apCorners, bool abAlreadyInitialized)
		{
			using func_t = decltype(&CombatGroup::ComputeTargetBoundingBox);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ComputeTargetBoundingBox };
			func(this, apCorners, abAlreadyInitialized);
		}

		std::uint32_t GetMemberGroupStrategyAssignment(Actor* apMember)
		{
			using func_t = std::uint32_t (CombatGroup::*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetMemberGroupStrategyAssignment };
			return func(this, apMember);
		}

		std::uint32_t GetMemberGroupStrategyAssignment(std::uint32_t aiIndex)
		{
			using func_t = std::uint32_t (CombatGroup::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetMemberGroupStrategyAssignment_1 };
			return func(this, aiIndex);
		}

		void SetMemberGroupStrategyAssignment(std::uint32_t aiIndex, std::uint32_t aiGroupStrategyAssignment)
		{
			using func_t = decltype(&CombatGroup::SetMemberGroupStrategyAssignment);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::SetMemberGroupStrategyAssignment };
			func(this, aiIndex, aiGroupStrategyAssignment);
		}

		Actor* FindMemberWithStrategyAssignment(std::uint32_t aiAssigment)
		{
			using func_t = decltype(&CombatGroup::FindMemberWithStrategyAssignment);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindMemberWithStrategyAssignment };
			return func(this, aiAssigment);
		}

		bool CheckGroupStrategyChosenTimeStamp(std::uint32_t aiIndex, float afMinimumTimePassed)
		{
			using func_t = decltype(&CombatGroup::CheckGroupStrategyChosenTimeStamp);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CheckGroupStrategyChosenTimeStamp };
			return func(this, aiIndex, afMinimumTimePassed);
		}

		void UpdateSearch()
		{
			using func_t = decltype(&CombatGroup::UpdateSearch);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateSearch };
			func(this);
		}

		void StartSearch()
		{
			using func_t = decltype(&CombatGroup::StartSearch);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::StartSearch };
			func(this);
		}

		bool UpdateSearchArea()
		{
			using func_t = decltype(&CombatGroup::UpdateSearchArea);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateSearchArea };
			return func(this);
		}

		void GetMinMaxSearchRadius(BGSWorldLocation& arSearchLocation, float& arfMinRadius, float& arfMaxRadius)
		{
			using func_t = decltype(&CombatGroup::GetMinMaxSearchRadius);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetMinMaxSearchRadius };
			func(this, arSearchLocation, arfMinRadius, arfMaxRadius);
		}

		void ComputeSearchArea()
		{
			using func_t = decltype(&CombatGroup::ComputeSearchArea);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::ComputeSearchArea };
			func(this);
		}

		void BuildSearchTeleportDoorArray()
		{
			using func_t = decltype(&CombatGroup::BuildSearchTeleportDoorArray);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::BuildSearchTeleportDoorArray };
			func(this);
		}

		CombatSearchLocation* FindSearchLocation(Actor* apMember, std::uint8_t acMinScore, BGSWorldLocation* apCurrentSearchLocation)
		{
			using func_t = decltype(&CombatGroup::FindSearchLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindSearchLocation };
			return func(this, apMember, acMinScore, apCurrentSearchLocation);
		}

		void InvestigatedSearchLocation(BGSWorldLocation const& arLocation)
		{
			using func_t = decltype(&CombatGroup::InvestigatedSearchLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::InvestigatedSearchLocation };
			func(this, arLocation);
		}

		void AddSearchLocation(BGSWorldLocation const& arLocation, float a_arg2, std::uint32_t a_arg3)
		{
			using func_t = decltype(&CombatGroup::AddSearchLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::AddSearchLocation };
			func(this, arLocation, a_arg2, a_arg3);
		}

		void UpdateSearchLocations()
		{
			using func_t = decltype(&CombatGroup::UpdateSearchLocations);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateSearchLocations };
			func(this);
		}

		TESObjectREFR* FindSearchDoor(Actor* apMember, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&CombatGroup::FindSearchDoor);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindSearchDoor };
			return func(this, apMember, a_arg2, a_arg3);
		}

		CombatSearchDoor* GetCombatSearchDoor(TESObjectREFR* apDoor)
		{
			using func_t = decltype(&CombatGroup::GetCombatSearchDoor);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetCombatSearchDoor };
			return func(this, apDoor);
		}

		bool CalculateSearchIgnoreLocations(Actor* apSearcher, BSSimpleArray<NiPoint3, 1024>* apIgnoreLocations)
		{
			using func_t = decltype(&CombatGroup::CalculateSearchIgnoreLocations);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CalculateSearchIgnoreLocations };
			return func(this, apSearcher, apIgnoreLocations);
		}

		void UpdateCombatStrength()
		{
			using func_t = decltype(&CombatGroup::UpdateCombatStrength);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateCombatStrength };
			func(this);
		}

		float GetMemberCombatStrength(Actor* apMember)
		{
			using func_t = decltype(&CombatGroup::GetMemberCombatStrength);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetMemberCombatStrength };
			return func(this, apMember);
		}

		float GetAverageMemberDamagePerSecond(Actor* apMember)
		{
			using func_t = decltype(&CombatGroup::GetAverageMemberDamagePerSecond);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetAverageMemberDamagePerSecond };
			return func(this, apMember);
		}

		Actor* FindClusterPartner(Actor* apMember, Actor* apCurrentPartner, float afMaxDistance)
		{
			using func_t = decltype(&CombatGroup::FindClusterPartner);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FindClusterPartner };
			return func(this, apMember, apCurrentPartner, afMaxDistance);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatGroup::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatGroup::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatGroup::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

		void FinishLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatGroup::FinishLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::FinishLoadGame };
			func(this, apLoadGameBuffer);
		}

	private:
		void RemoveTarget(std::uint32_t aiIndex)
		{
			using func_t = void (CombatGroup::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::RemoveTarget_1 };
			func(this, aiIndex);
		}

		CombatTarget* GetCombatTargetForActor(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::GetCombatTargetForActor);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetCombatTargetForActor };
			return func(this, apActor);
		}

		CombatMember* GetCombatMemberForActor(Actor* apActor)
		{
			using func_t = decltype(&CombatGroup::GetCombatMemberForActor);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetCombatMemberForActor };
			return func(this, apActor);
		}

		CombatTarget* GetCombatTargetForNumericID(std::uint32_t aiTargetID)
		{
			using func_t = decltype(&CombatGroup::GetCombatTargetForNumericID);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetCombatTargetForNumericID };
			return func(this, aiTargetID);
		}

		CombatTarget* GetCombatTarget(std::uint32_t aiIndex)
		{
			using func_t = decltype(&CombatGroup::GetCombatTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetCombatTarget };
			return func(this, aiIndex);
		}

		bool CheckRemoveCombatTarget(CombatTarget* apCombatTarget)
		{
			using func_t = decltype(&CombatGroup::CheckRemoveCombatTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::CheckRemoveCombatTarget };
			return func(this, apCombatTarget);
		}

		CombatMember* GetCombatMember(std::uint32_t aiIndex)
		{
			using func_t = decltype(&CombatGroup::GetCombatMember);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::GetCombatMember };
			return func(this, aiIndex);
		}

		void UpdateCounts()
		{
			using func_t = decltype(&CombatGroup::UpdateCounts);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateCounts };
			func(this);
		}

		void UpdateAttackerCounts()
		{
			using func_t = decltype(&CombatGroup::UpdateAttackerCounts);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateAttackerCounts };
			func(this);
		}

		void UpdateTargets()
		{
			using func_t = decltype(&CombatGroup::UpdateTargets);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateTargets };
			func(this);
		}

		void UpdateGroupStrategy()
		{
			using func_t = decltype(&CombatGroup::UpdateGroupStrategy);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateGroupStrategy };
			func(this);
		}

		void UpdateClusters()
		{
			using func_t = decltype(&CombatGroup::UpdateClusters);
			static REL::Relocation<func_t> func{ Offsets::CombatGroup::UpdateClusters };
			func(this);
		}

	public:
		// members
		std::uint32_t                             iGroupNum;                          // 00
		std::uint32_t                             iGroupID;                           // 04
		BSSimpleArray<CombatTarget, 1024>         TargetArray;                        // 08
		BSSimpleArray<CombatMember, 1024>         MemberArray;                        // 18
		CombatGroupStrategy*                      pGroupStrategy;                     // 28
		bool                                      bStrategyForced;                    // 2C
		std::uint8_t                              pad2D[0x3];                         // 2D
		CombatTimer                               ChooseStrategyTimer;                // 30
		CombatTimer                               UpdateStrategyTimer;                // 38
		std::uint32_t                             iLastGroupStrategyChosenIndex;      // 40
		CombatTimeStamp                           fLastGroupStrategyChosenTimeStamp;  // 44
		CombatTimer                               AvoidThreatDialogueTimer;           // 48
		CombatTimer                               CombatStrengthTimer;                // 50
		CombatTimer                               DetectionDialogueTimers[10];        // 58
		CombatTimer                               TargetUpdateTimer;                  // A8
		CombatTimer                               ClusterUpdateTimer;                 // B0
		CombatTimer                               CombatMusicUpdateTimer;             // B8
		float                                     fMemberCombatStrength;              // C0
		float                                     fAverageMemberDamagePerSecond;      // C4
		float                                     fTargetCombatStrength;              // C8
		float                                     fAverageTargetCombatStrength;       // CC
		std::uint32_t                             iSearchCount;                       // D0
		NiPointer<PathingLOSGridMap>              spPathingLOSGridMap;                // D4
		CombatTimer                               SearchUpdateTimer;                  // D8
		CombatTimer                               SearchAreaUpdateTimer;              // E0
		CombatTimeStamp                           fSearchStartedTimeStamp;            // E8
		Actor*                                    pSearchingMember;                   // EC
		BGSWorldLocation                          SearchCenter;                       // F0
		NiPoint3                                  SearchFocalPoint;                   // 100
		float                                     fSearchRadius;                      // 10C
		BSSimpleArray<CombatSearchLocation, 1024> SearchLocations;                    // 110
		BSSimpleArray<CombatSearchDoor, 1024>     SearchTeleportDoors;                // 120
		NiPointer<NiNode>                         spSearchDebugGeometry;              // 130
		bool                                      bUpdateSearchDebugGeometry;         // 134
		std::uint8_t                              pad135[0x3];                        // 135
		BSSimpleArray<CombatGroupCluster*, 1024>  ClusterArray;                       // 138
		std::uint32_t                             iInitializedMemberCount;            // 148
		std::uint32_t                             iFleeingMemberCount;                // 14C
		std::uint32_t                             iNonFleeingMemberCount;             // 150
		char                                      cCombatMusicState;                  // 154
		std::uint8_t                              pad155[0x3];                        // 155
		NiPointer<NiNode>                         spDebugGeometry;                    // 158
	};
	static_assert(sizeof(CombatGroup) == 0x15C);
}
