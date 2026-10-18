#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTOR_SEGMENT_INVIEW.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/C/COMBAT_WEAPON_TYPE.h"
#include "RE/C/COVER_STATE.h"
#include "RE/C/CombatCoverSearchInfo.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/C/CombatTimer.h"
#include "RE/L/LOCATION_TARGET_TYPE.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PROCESS_TYPE.h"
#include "RE/U/UnreachableCoverLocation.h"
#include "RE/U/UnreachableLocation.h"

namespace RE
{
	class Actor;
	class ActorPathingMessageQueue;
	class BGSExplosion;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BGSWorldLocation;
	class CombatController;
	class CombatCoverLocation;
	class CombatItem;
	class CombatLocation;
	class CombatLocationTarget;
	class CoverReservationInfo;
	class PathingAvoidNodeArray;
	class PathingCoverLocation;
	class PathingLocation;
	class PathingRequestCoveredMove;
	class Projectile;
	class TESBoundObject;
	class TESObjectREFR;
	class TESObjectWEAP;

	class CombatState
	{
	public:
		void SetExplosiveProjectileBlocked(BGSExplosion* apExplosion)
		{
			using func_t = decltype(&CombatState::SetExplosiveProjectileBlocked);
			static REL::Relocation<func_t> func{ Offsets::CombatState::SetExplosiveProjectileBlocked };
			func(this, apExplosion);
		}

		bool GetTargetSpaceDifferent()
		{
			using func_t = decltype(&CombatState::GetTargetSpaceDifferent);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetTargetSpaceDifferent };
			return func(this);
		}

		bool GetTargetBlocked()
		{
			using func_t = decltype(&CombatState::GetTargetBlocked);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetTargetBlocked };
			return func(this);
		}

		float GetCombatWeaponDPS(COMBAT_WEAPON_TYPE aeType)
		{
			using func_t = decltype(&CombatState::GetCombatWeaponDPS);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetCombatWeaponDPS };
			return func(this, aeType);
		}

		CombatCoverLocation* GetCoverLocation()
		{
			using func_t = decltype(&CombatState::GetCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetCoverLocation };
			return func(this);
		}

		TESObjectWEAP* GetCombatWeapon(COMBAT_WEAPON_TYPE aeType)
		{
			using func_t = decltype(&CombatState::GetCombatWeapon);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetCombatWeapon };
			return func(this, aeType);
		}

		CombatItem* GetCombatItem(std::int32_t aiCombatItem)
		{
			using func_t = decltype(&CombatState::GetCombatItem);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetCombatItem };
			return func(this, aiCombatItem);
		}

		bool GetHasBufferedDetection()
		{
			using func_t = decltype(&CombatState::GetHasBufferedDetection);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetHasBufferedDetection };
			return func(this);
		}

		void SetInventoryDirty(bool abValue)
		{
			using func_t = decltype(&CombatState::SetInventoryDirty);
			static REL::Relocation<func_t> func{ Offsets::CombatState::SetInventoryDirty };
			func(this, abValue);
		}

		bool GetHasTarget360LineOfSight()
		{
			using func_t = decltype(&CombatState::GetHasTarget360LineOfSight);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetHasTarget360LineOfSight };
			return func(this);
		}

		CombatCoverLocation* GetSecondaryCoverLocation()
		{
			using func_t = decltype(&CombatState::GetSecondaryCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetSecondaryCoverLocation };
			return func(this);
		}

		bool GetTargetUnreachable()
		{
			using func_t = decltype(&CombatState::GetTargetUnreachable);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetTargetUnreachable };
			return func(this);
		}

		void ClearCombatItem(std::int32_t aiCombatItem)
		{
			using func_t = decltype(&CombatState::ClearCombatItem);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ClearCombatItem };
			func(this, aiCombatItem);
		}

		CombatState* ctor(CombatController* apCombatController, float afTimerDelay)
		{
			using func_t = CombatState*(__thiscall*)(CombatState*, CombatController*, float);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ctor };
			return func(this, apCombatController, afTimerDelay);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(CombatState*);
			static REL::Relocation<func_t> func{ Offsets::CombatState::dtor };
			func(this);
		}

		void ChangeProcessLevel(PROCESS_TYPE aeOldLevel, PROCESS_TYPE aeNewLevel)
		{
			using func_t = decltype(&CombatState::ChangeProcessLevel);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ChangeProcessLevel };
			func(this, aeOldLevel, aeNewLevel);
		}

		void DoInitialUpdate()
		{
			using func_t = decltype(&CombatState::DoInitialUpdate);
			static REL::Relocation<func_t> func{ Offsets::CombatState::DoInitialUpdate };
			func(this);
		}

		void Update()
		{
			using func_t = decltype(&CombatState::Update);
			static REL::Relocation<func_t> func{ Offsets::CombatState::Update };
			func(this);
		}

		void UpdateImmediateData()
		{
			using func_t = decltype(&CombatState::UpdateImmediateData);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdateImmediateData };
			func(this);
		}

		bool GetHasBuffered360LineOfSight()
		{
			using func_t = decltype(&CombatState::GetHasBuffered360LineOfSight);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetHasBuffered360LineOfSight };
			return func(this);
		}

		void UpdatePeriodicData()
		{
			using func_t = decltype(&CombatState::UpdatePeriodicData);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdatePeriodicData };
			func(this);
		}

		void UpdateLow()
		{
			using func_t = decltype(&CombatState::UpdateLow);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdateLow };
			func(this);
		}

		void UpdateCombatPermissions()
		{
			using func_t = decltype(&CombatState::UpdateCombatPermissions);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdateCombatPermissions };
			func(this);
		}

		void UpdateInventoryData()
		{
			using func_t = decltype(&CombatState::UpdateInventoryData);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdateInventoryData };
			func(this);
		}

		TESObjectWEAP* GetBestCombatWeapon()
		{
			using func_t = decltype(&CombatState::GetBestCombatWeapon);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetBestCombatWeapon };
			return func(this);
		}

		void ClearReferencePointer(TESObjectREFR* apRef, bool abSelf)
		{
			using func_t = decltype(&CombatState::ClearReferencePointer);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ClearReferencePointer };
			func(this, apRef, abSelf);
		}

		void CheckReferences()
		{
			using func_t = decltype(&CombatState::CheckReferences);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckReferences };
			func(this);
		}

		void FiredProjectile(Projectile* apProjectile)
		{
			using func_t = decltype(&CombatState::FiredProjectile);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FiredProjectile };
			func(this, apProjectile);
		}

		void DamagedByAttacker(Actor* apAttacker, float afDamage)
		{
			using func_t = decltype(&CombatState::DamagedByAttacker);
			static REL::Relocation<func_t> func{ Offsets::CombatState::DamagedByAttacker };
			func(this, apAttacker, afDamage);
		}

		void Disarmed()
		{
			using func_t = decltype(&CombatState::Disarmed);
			static REL::Relocation<func_t> func{ Offsets::CombatState::Disarmed };
			func(this);
		}

		void PreActivateReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&CombatState::PreActivateReference);
			static REL::Relocation<func_t> func{ Offsets::CombatState::PreActivateReference };
			func(this, apRef);
		}

		void ActivatedReference(TESObjectREFR* apRef, TESBoundObject* apObject, std::int32_t aiCount, bool abActivatedScriptOnly)
		{
			using func_t = decltype(&CombatState::ActivatedReference);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ActivatedReference };
			func(this, apRef, apObject, aiCount, abActivatedScriptOnly);
		}

		void UsedCombatItem(TESBoundObject* apCombatItem)
		{
			using func_t = decltype(&CombatState::UsedCombatItem);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UsedCombatItem };
			func(this, apCombatItem);
		}

		void TargetChanged()
		{
			using func_t = decltype(&CombatState::TargetChanged);
			static REL::Relocation<func_t> func{ Offsets::CombatState::TargetChanged };
			func(this);
		}

		void PlanUpdated()
		{
			using func_t = decltype(&CombatState::PlanUpdated);
			static REL::Relocation<func_t> func{ Offsets::CombatState::PlanUpdated };
			func(this);
		}

		void ReachedDestination(BGSWorldLocation const& arDestination, std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatState::ReachedDestination);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ReachedDestination };
			func(this, arDestination, aiLocation);
		}

		bool FindCombatLocation(std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatState::FindCombatLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindCombatLocation };
			return func(this, aiLocation);
		}

		bool FindGrenadeThrowLocation(CombatLocation* apRetLocation, bool& arbHighArc, TESObjectWEAP* apGrenade)
		{
			using func_t = decltype(&CombatState::FindGrenadeThrowLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindGrenadeThrowLocation };
			return func(this, apRetLocation, arbHighArc, apGrenade);
		}

		bool FindBestCoverLocation(TESObjectWEAP* apWeapon, CombatCoverSearchInfo* apCoverSearchInfo, CombatCoverLocation* apCombatCoverLocation, CombatLocation* apRetLocation, std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatState::FindBestCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindBestCoverLocation };
			return func(this, apWeapon, apCoverSearchInfo, apCombatCoverLocation, apRetLocation, aiLocation);
		}

		bool CheckCoverLocation(PathingCoverLocation& arCoverLocation, CombatLocation* apRetLocation, CoverReservationInfo* apReservationInfo, NiPoint3& arCoverSearchTargetLocation, std::uint32_t aiCoverKey, std::uint32_t aiCurrentCoverLocationKey, std::int32_t aiLocation, Actor* afMinRange, Actor* afMaxRange, float apAttacker, float apTarget, COVER_STATE& areCoverState, float& arfSquaredDistance, bool abHideCover)
		{
			using func_t = decltype(&CombatState::CheckCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckCoverLocation };
			return func(this, arCoverLocation, apRetLocation, apReservationInfo, arCoverSearchTargetLocation, aiCoverKey, aiCurrentCoverLocationKey, aiLocation, afMinRange, afMaxRange, apAttacker, apTarget, areCoverState, arfSquaredDistance, abHideCover);
		}

		bool CheckTargetsCoverLOS(PathingLocation& arCoverPathingLocation, Actor* apIgnoreTarget)
		{
			using func_t = decltype(&CombatState::CheckTargetsCoverLOS);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckTargetsCoverLOS };
			return func(this, arCoverPathingLocation, apIgnoreTarget);
		}

		void BuildTargetLOSLocationsArray(BSSimpleArray<NiPoint3, 1024>* apLocationsArray)
		{
			using func_t = decltype(&CombatState::BuildTargetLOSLocationsArray);
			static REL::Relocation<func_t> func{ Offsets::CombatState::BuildTargetLOSLocationsArray };
			func(this, apLocationsArray);
		}

		static bool CheckCoverLOS(PathingLocation& arCoverPathingLocation, NiPoint3 const& arTargetLocation, bool abSkipDistanceCheck)
		{
			using func_t = decltype(&CombatState::CheckCoverLOS);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckCoverLOS };
			return func(arCoverPathingLocation, arTargetLocation, abSkipDistanceCheck);
		}

		bool CheckCoverSafe(PathingCoverLocation const& arCoverLocation, NiPoint3 const& arCoverPoint, Actor* apTarget, bool abUseViewCone)
		{
			using func_t = decltype(&CombatState::CheckCoverSafe);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckCoverSafe };
			return func(this, arCoverLocation, arCoverPoint, apTarget, abUseViewCone);
		}

		bool CheckLedgeCoverAngle(PathingCoverLocation const& arCoverLocation, NiPoint3 const& arCoverPoint, NiPoint3 const& arTargetLocation, Actor* apTarget)
		{
			using func_t = decltype(&CombatState::CheckLedgeCoverAngle);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckLedgeCoverAngle };
			return func(this, arCoverLocation, arCoverPoint, arTargetLocation, apTarget);
		}

		bool FindBestAdvanceLocation(CombatCoverSearchInfo* apCoverSearchInfo, CombatCoverLocation* apCombatCoverLocation, CombatLocation* apRetLocation, std::int32_t aiLocation, NiPoint3 const& arDestination, float afMinDistance, PathingAvoidNodeArray* apPathingAvoidNodeArray)
		{
			using func_t = bool (CombatState::*)(CombatCoverSearchInfo*, CombatCoverLocation*, CombatLocation*, std::int32_t, NiPoint3 const&, float, PathingAvoidNodeArray*);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindBestAdvanceLocation };
			return func(this, apCoverSearchInfo, apCombatCoverLocation, apRetLocation, aiLocation, arDestination, afMinDistance, apPathingAvoidNodeArray);
		}

		void BuildCoveredMoveRequest(PathingRequestCoveredMove* apCoveredMoveRequest)
		{
			using func_t = decltype(&CombatState::BuildCoveredMoveRequest);
			static REL::Relocation<func_t> func{ Offsets::CombatState::BuildCoveredMoveRequest };
			func(this, apCoveredMoveRequest);
		}

		static bool FindBestAdvanceLocation(PathingRequestCoveredMove* apCoveredMoveRequest, float afMinDistance, bool abBackgroundThread)
		{
			using func_t = bool(__cdecl*)(PathingRequestCoveredMove*, float, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindBestAdvanceLocation_1 };
			return func(apCoveredMoveRequest, afMinDistance, abBackgroundThread);
		}

		bool FindCoveredMoveLocation(PathingCoverLocation* apCoverLocation, NiPoint3 const& arDestination, std::uint32_t aiLocation, float afMinDistance, PathingAvoidNodeArray* apPathingAvoidNodeArray)
		{
			using func_t = decltype(&CombatState::FindCoveredMoveLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindCoveredMoveLocation };
			return func(this, apCoverLocation, arDestination, aiLocation, afMinDistance, apPathingAvoidNodeArray);
		}

		bool FindBestDodgeLocation(CombatLocation* apRetLocation, std::uint32_t aiDodgeDirections, std::uint32_t aiDodgeDirectionLOSCheck, float afDodgeDistance, float afMinDodgeDistance)
		{
			using func_t = decltype(&CombatState::FindBestDodgeLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindBestDodgeLocation };
			return func(this, apRetLocation, aiDodgeDirections, aiDodgeDirectionLOSCheck, afDodgeDistance, afMinDodgeDistance);
		}

		bool FindOptimalLocation(float afMinRange, float afMaxRange, float afAbsoluteMinRange, float a_arg4, CombatLocation* afAbsoluteMaxRange, bool apRetLocation)
		{
			using func_t = decltype(&CombatState::FindOptimalLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindOptimalLocation };
			return func(this, afMinRange, afMaxRange, afAbsoluteMinRange, a_arg4, afAbsoluteMaxRange, apRetLocation);
		}

		bool FindBestFleeLocation(CombatCoverLocation* apCombatCoverLocation, CombatLocation* apRetLocation, std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatState::FindBestFleeLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindBestFleeLocation };
			return func(this, apCombatCoverLocation, apRetLocation, aiLocation);
		}

		bool FindLOSLocation(CombatLocation* apRetLocation, std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatState::FindLOSLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindLOSLocation };
			return func(this, apRetLocation, aiLocation);
		}

		bool FindBetterWeapon()
		{
			using func_t = decltype(&CombatState::FindBetterWeapon);
			static REL::Relocation<func_t> func{ Offsets::CombatState::FindBetterWeapon };
			return func(this);
		}

		bool CheckMovement(BGSWorldLocation const& arWorldLocation, bool abCheckLocationReachable, bool abIgnoreCombatAreaCheck)
		{
			using func_t = decltype(&CombatState::CheckMovement);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckMovement };
			return func(this, arWorldLocation, abCheckLocationReachable, abIgnoreCombatAreaCheck);
		}

		void ClearCoverLocation(bool abInvalidateCover)
		{
			using func_t = decltype(&CombatState::ClearCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ClearCoverLocation };
			func(this, abInvalidateCover);
		}

		void ClearSecondaryCoverLocation(bool abInvalidateCover)
		{
			using func_t = decltype(&CombatState::ClearSecondaryCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ClearSecondaryCoverLocation };
			func(this, abInvalidateCover);
		}

		void ReserveCoverLocation(CombatCoverLocation* apCoverLocation)
		{
			using func_t = decltype(&CombatState::ReserveCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ReserveCoverLocation };
			func(this, apCoverLocation);
		}

		void UnreserveCoverLocation(CombatCoverLocation* apCoverLocation)
		{
			using func_t = decltype(&CombatState::UnreserveCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UnreserveCoverLocation };
			func(this, apCoverLocation);
		}

		void ClearCombatLocation()
		{
			using func_t = decltype(&CombatState::ClearCombatLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ClearCombatLocation };
			func(this);
		}

		void SetCombatItem(std::int32_t aiCombatItem, TESObjectREFR* apRef, TESBoundObject* apBoundObject)
		{
			using func_t = decltype(&CombatState::SetCombatItem);
			static REL::Relocation<func_t> func{ Offsets::CombatState::SetCombatItem };
			func(this, aiCombatItem, apRef, apBoundObject);
		}

		void SetLocationTargetRef(TESObjectREFR* apRef, LOCATION_TARGET_TYPE aeType, float afMin, float afMax)
		{
			using func_t = decltype(&CombatState::SetLocationTargetRef);
			static REL::Relocation<func_t> func{ Offsets::CombatState::SetLocationTargetRef };
			func(this, apRef, aeType, afMin, afMax);
		}

		void SetLocationTargetLocation(BGSWorldLocation const& arLocation, LOCATION_TARGET_TYPE aeType, float afMin, float afMax)
		{
			using func_t = decltype(&CombatState::SetLocationTargetLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::SetLocationTargetLocation };
			func(this, arLocation, aeType, afMin, afMax);
		}

		void ClearLocationTarget()
		{
			using func_t = decltype(&CombatState::ClearLocationTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ClearLocationTarget };
			func(this);
		}

		bool CheckUseLocationTargetMaxDistance()
		{
			using func_t = decltype(&CombatState::CheckUseLocationTargetMaxDistance);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckUseLocationTargetMaxDistance };
			return func(this);
		}

		float GetLocationTargetDistance()
		{
			using func_t = decltype(&CombatState::GetLocationTargetDistance);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetLocationTargetDistance };
			return func(this);
		}

		void UpdateCombatArea(bool abForceUpdate)
		{
			using func_t = decltype(&CombatState::UpdateCombatArea);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdateCombatArea };
			func(this, abForceUpdate);
		}

		void AddUnreachableCoverLocation(std::uint32_t aiCoverKey)
		{
			using func_t = decltype(&CombatState::AddUnreachableCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::AddUnreachableCoverLocation };
			func(this, aiCoverKey);
		}

		void UpdateCombatStrength()
		{
			using func_t = decltype(&CombatState::UpdateCombatStrength);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdateCombatStrength };
			func(this);
		}

		void UpdateThreatRatio()
		{
			using func_t = decltype(&CombatState::UpdateThreatRatio);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UpdateThreatRatio };
			func(this);
		}

		void BoostConfidence(bool abChangeFleeStatus)
		{
			using func_t = decltype(&CombatState::BoostConfidence);
			static REL::Relocation<func_t> func{ Offsets::CombatState::BoostConfidence };
			func(this, abChangeFleeStatus);
		}

		bool CheckShouldFlee()
		{
			using func_t = decltype(&CombatState::CheckShouldFlee);
			static REL::Relocation<func_t> func{ Offsets::CombatState::CheckShouldFlee };
			return func(this);
		}

		bool QueuePathCheck(std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatState::QueuePathCheck);
			static REL::Relocation<func_t> func{ Offsets::CombatState::QueuePathCheck };
			return func(this, aiLocation);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatState::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatState::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatState::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatState::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatState::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatState::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

		bool GetInitializing()
		{
			using func_t = decltype(&CombatState::GetInitializing);
			static REL::Relocation<func_t> func{ Offsets::CombatState::GetInitializing };
			return func(this);
		}

		void SetTargetFlushed(bool abValue)
		{
			using func_t = decltype(&CombatState::SetTargetFlushed);
			static REL::Relocation<func_t> func{ Offsets::CombatState::SetTargetFlushed };
			func(this, abValue);
		}

		void UnreserveSecondaryCoverLocation()
		{
			using func_t = decltype(&CombatState::UnreserveSecondaryCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::UnreserveSecondaryCoverLocation };
			func(this);
		}

		void ReserveSecondaryCoverLocation()
		{
			using func_t = decltype(&CombatState::ReserveSecondaryCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatState::ReserveSecondaryCoverLocation };
			func(this);
		}

	public:
		// members
		bool                                          bBlocking;                           // 00
		std::uint8_t                                  pad01[0x3];                          // 01
		std::int32_t                                  iLocationUnreachable;                // 04
		float                                         fThreatRatio;                        // 08
		TESObjectWEAP*                                pCombatWeapons[6];                   // 0C
		BSSimpleArray<TESObjectWEAP*, 1024>           EmbeddedWeaponsArray;                // 24
		TESObjectWEAP*                                pCurrentEmbeddedWeapon;              // 34
		std::uint32_t                                 iHasCombatWeapon;                    // 38
		float                                         fCombatWeaponsDPS[7];                // 3C
		float                                         fMaxCombatWeaponDPS;                 // 58
		float                                         fMaxRangedWeaponDPS;                 // 5C
		float                                         fMaxModifiedCombatWeaponDPS;         // 60
		float                                         fDisarmedDPS;                        // 64
		float                                         fBetterWeaponOutOfRangeDistance;     // 68
		std::int32_t                                  iTargetDetectionLevel;               // 6C
		bool                                          bTargetLineOfSight;                  // 70
		bool                                          bTarget360LineOfSight;               // 71
		bool                                          bTargetBlocked;                      // 72
		char                                          cTargetFlushed;                      // 73
		bool                                          bTargetSpaceDifferent;               // 74
		bool                                          bHasHandToHandEquip;                 // 75
		bool                                          bGrenadeThrowHighArc;                // 76
		bool                                          bInventoryDirty;                     // 77
		BGSExplosion*                                 pExplosiveProjectileBlocked;         // 78
		ACTOR_SEGMENT_INVIEW                          eTargetSegmentInView;                // 7C
		float                                         fThreatScore;                        // 80
		NiPoint3                                      LastSeenTargetLocation;              // 84
		std::uint32_t                                 iCombatPermissions;                  // 90
		CombatTimeStamp                               fLastTargetDetectedTimeStamp;        // 94
		CombatTimeStamp                               fLastTarget360LineOfSightTimeStamp;  // 98
		CombatTimeStamp                               fLastAttackTimeStamp;                // 9C
		CombatTimeStamp                               fLastDamagedByAttackerTimeStamp;     // A0
		CombatTimeStamp                               fFiringStartedTimeStamp;             // A4
		CombatTimer                                   AttackDialogueTimer;                 // A8
		CombatTimer                                   FireExplosiveDialogueTimer;          // B0
		CombatTimer                                   FleeDialogueTimer;                   // B8
		CombatTimeStamp                               fThreatsConsideredTimeStamp;         // C0
		CombatLocationTarget*                         pLocationTarget;                     // C4
		std::uint8_t                                  cStartingConfidence;                 // C8
		std::uint8_t                                  cCurrentConfidence;                  // C9
		std::uint16_t                                 padCA;                               // CA
		float                                         fConfidenceModifier;                 // CC
		float                                         fCombatStrength;                     // D0
		float                                         fDamagePerSecond;                    // D4
		std::uint8_t                                  cFleeState;                          // D8
		std::uint8_t                                  padD9[0x3];                          // D9
		std::uint32_t                                 iLastFleeDoor;                       // DC
		CombatTimeStamp                               fLastFleeDoorTimeStamp;              // E0
		CombatCoverLocation*                          pCoverLocation;                      // E4
		CombatCoverLocation*                          pSecondaryCoverLocation;             // E8
		CombatCoverSearchInfo                         CoverSearchInfo;                     // EC
		CombatCoverSearchInfo                         SecondaryCoverSearchInfo;            // 128
		BSSimpleArray<UnreachableCoverLocation, 1024> UnreachableCoverLocations;           // 164
		BSSimpleArray<UnreachableLocation, 1024>      UnreachableLocations;                // 174
		CombatTimeStamp                               fLastDodgeSearch;                    // 184
		char                                          cLastDodgeDirection;                 // 188
		std::uint8_t                                  pad189[0x3];                         // 189
		CombatLocation*                               pCombatLocation;                     // 18C
		CombatItem*                                   pCombatItems[5];                     // 190
		TESBoundObject*                               pUsableCombatItems[2];               // 1A4
		CombatTimer                                   UsableCombatItemTimers[2];           // 1AC
		std::uint32_t                                 iHasCombatItem;                      // 1BC
		Actor*                                        pLastTarget;                         // 1C0
		CombatController*                             pCombatController;                   // 1C4
		bool                                          bInitializing;                       // 1C8
		std::uint8_t                                  pad1C9[0x3];                         // 1C9
		CombatTimer                                   TargetUnreachableTimer;              // 1CC
		CombatTimer                                   FindBetterWeaponTimer;               // 1D4
		CombatTimer                                   ExplosiveProjectileBlockedTimer;     // 1DC
		CombatTimer                                   CombatPermissionsTimer5sec;          // 1E4
		CombatTimer                                   CombatPermissionsTimer10sec;         // 1EC
		CombatTimer                                   GuardSneakTimer;                     // 1F4
		CombatTimer                                   DynamicCoverLostTimer;               // 1FC
		CombatTimer                                   CombatStrengthUpdateTimer;           // 204
		CombatTimer                                   ThreatRatioUpdateTimer;              // 20C
		CombatTimer                                   EmbeddedWeaponUpdateTimer;           // 214
		CombatTimer                                   UpdateInventoryTimer;                // 21C
		NiPointer<ActorPathingMessageQueue>           spPathCheckQueue;                    // 224
		std::int32_t                                  iQueuedPathCheck;                    // 228
	};
	static_assert(sizeof(CombatState) == 0x22C);
}
