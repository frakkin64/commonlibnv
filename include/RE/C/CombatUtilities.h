#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTOR_SEGMENT_INVIEW.h"
#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class BGSExplosion;
	class BGSProjectile;
	class CombatController;
	class CombatCoverLocation;
	class CoverReservationInfo;
	class NiAVObject;
	class NiColorA;
	class PathingCoverLocation;
	class Projectile;
	class TESObjectREFR;
	class TESObjectWEAP;

	class CombatUtilities
	{
	public:
		static void Init()
		{
			using func_t = decltype(&CombatUtilities::Init);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::Init };
			func();
		}

		static Actor* GetFacingTarget(Actor* apAttacker, float afRadius)
		{
			using func_t = decltype(&CombatUtilities::GetFacingTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetFacingTarget };
			return func(apAttacker, afRadius);
		}

		static float GetDistanceBetweenFacingActors(TESObjectREFR* apAttacker, TESObjectREFR* apTarget, bool abMeleeCombat)
		{
			using func_t = decltype(&CombatUtilities::GetDistanceBetweenFacingActors);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetDistanceBetweenFacingActors };
			return func(apAttacker, apTarget, abMeleeCombat);
		}

		static float GetAttackerTargetExtentSum(TESObjectREFR* apAttacker, TESObjectREFR* apTarget)
		{
			using func_t = decltype(&CombatUtilities::GetAttackerTargetExtentSum);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAttackerTargetExtentSum };
			return func(apAttacker, apTarget);
		}

		static float ComputeFaceTargetDistance(Actor* apAttacker, TESObjectREFR* apTarget, float afAttackerReach)
		{
			using func_t = decltype(&CombatUtilities::ComputeFaceTargetDistance);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::ComputeFaceTargetDistance };
			return func(apAttacker, apTarget, afAttackerReach);
		}

		static NiPoint3 ComputeFaceTargetLocation(Actor* result, TESObjectREFR* apAttacker, NiPoint3 const& apTarget, float arTargetLocation)
		{
			using func_t = decltype(&CombatUtilities::ComputeFaceTargetLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::ComputeFaceTargetLocation };
			return func(result, apAttacker, apTarget, arTargetLocation);
		}

		static float GetWeaponReach(Actor* apAttacker, TESObjectWEAP* apWeapon)
		{
			using func_t = decltype(&CombatUtilities::GetWeaponReach);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetWeaponReach };
			return func(apAttacker, apWeapon);
		}

		static float GetAngleForMeleeAttack(ANIM_GROUP_ENUM eAttack)
		{
			using func_t = decltype(&CombatUtilities::GetAngleForMeleeAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAngleForMeleeAttack };
			return func(eAttack);
		}

		static bool IsTargetWithinStrikeAngle(Actor* apAttacker, TESObjectREFR* apTarget, float* afDelta)
		{
			using func_t = decltype(&CombatUtilities::IsTargetWithinStrikeAngle);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::IsTargetWithinStrikeAngle };
			return func(apAttacker, apTarget, afDelta);
		}

		static bool IsTargetWithinFiringArc(Actor* apAttacker, NiPoint3 const& arTargetLocation, float afArcAngle, float afLookingAngle)
		{
			using func_t = decltype(&CombatUtilities::IsTargetWithinFiringArc);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::IsTargetWithinFiringArc };
			return func(apAttacker, arTargetLocation, afArcAngle, afLookingAngle);
		}

		static bool CalculateProjectileLOS(Actor* apActor, BGSProjectile* apProjectile, float afProjectileSpeed, NiPoint3 aStartLocation, NiPoint3 aTargetedPoint, NiPoint3* apHitLocation, TESObjectREFR** apRefHit, float* apDistanceFraction)
		{
			using func_t = decltype(&CombatUtilities::CalculateProjectileLOS);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CalculateProjectileLOS };
			return func(apActor, apProjectile, afProjectileSpeed, aStartLocation, aTargetedPoint, apHitLocation, apRefHit, apDistanceFraction);
		}

		static bool CheckProjectileArc(Actor* apAttacker, Actor* apTarget, BGSProjectile* apProjectile, NiPoint3* apReleasePoint, bool& arbHighArc, NiPoint3& arTargetedPoint, float afMinHitFraction)
		{
			using func_t = bool(__cdecl*)(Actor*, Actor*, BGSProjectile*, NiPoint3*, bool&, NiPoint3&, float);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CheckProjectileArc };
			return func(apAttacker, apTarget, apProjectile, apReleasePoint, arbHighArc, arTargetedPoint, afMinHitFraction);
		}

		static bool CheckProjectileArc(Actor* apAttacker, Actor* apTarget, BGSProjectile* apProjectile, NiPoint3 aStartLocation, NiPoint3 aTargetLocation, NiPoint3 aTargetVelocity, bool& arbHighArc, NiPoint3& arTargetedPoint, float afMinHitFraction)
		{
			using func_t = bool(__cdecl*)(Actor*, Actor*, BGSProjectile*, NiPoint3, NiPoint3, NiPoint3, bool&, NiPoint3&, float);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CheckProjectileArc_1 };
			return func(apAttacker, apTarget, apProjectile, aStartLocation, aTargetLocation, aTargetVelocity, arbHighArc, arTargetedPoint, afMinHitFraction);
		}

		static bool CalculateLOS(Actor* apAttacker, TESObjectREFR* apTarget, NiPoint3 const& arAttackerLocation, NiPoint3 const& arTargetLocation, bool abIgnoreCrouch, std::int32_t aiCollisionLayer)
		{
			using func_t = decltype(&CombatUtilities::CalculateLOS);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CalculateLOS };
			return func(apAttacker, apTarget, arAttackerLocation, arTargetLocation, abIgnoreCrouch, aiCollisionLayer);
		}

		static float FindAngleOfProjectile(float afDeltaXY, float afDeltaZ, float a_arg3, float afSpeed, bool a_arg5)
		{
			using func_t = float(__cdecl*)(float, float, float, float, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::FindAngleOfProjectile };
			return func(afDeltaXY, afDeltaZ, a_arg3, afSpeed, a_arg5);
		}

		static float FindAngleOfProjectile(Projectile* akToTarget, NiPoint3 a_arg2, float a_arg3, bool abHighArc)
		{
			using func_t = float(__cdecl*)(Projectile*, NiPoint3, float, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::FindAngleOfProjectile_1 };
			return func(akToTarget, a_arg2, a_arg3, abHighArc);
		}

		static float ComputeProjectileTime(float afDeltaXY, float afAngle, float afSpeed)
		{
			using func_t = float(__cdecl*)(float, float, float);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::ComputeProjectileTime };
			return func(afDeltaXY, afAngle, afSpeed);
		}

		static float ComputeProjectileTime(BGSProjectile* apProjectile, NiPoint3 aTargetedPoint, NiPoint3 abHighArc, bool a_arg4, float afSpeed)
		{
			using func_t = float(__cdecl*)(BGSProjectile*, NiPoint3, NiPoint3, bool, float);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::ComputeProjectileTime_1 };
			return func(apProjectile, aTargetedPoint, abHighArc, a_arg4, afSpeed);
		}

		static float GetProjectileMaximumRange(BGSProjectile* apProjectile, float afProjectileSpeed)
		{
			using func_t = decltype(&CombatUtilities::GetProjectileMaximumRange);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetProjectileMaximumRange };
			return func(apProjectile, afProjectileSpeed);
		}

		static float GetAttackerFiringZOffset(TESObjectREFR* apAttacker, bool abIgnoreCrouch)
		{
			using func_t = decltype(&CombatUtilities::GetAttackerFiringZOffset);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAttackerFiringZOffset };
			return func(apAttacker, abIgnoreCrouch);
		}

		static NiPoint3 GetAttackerFiringLocation(TESObjectREFR* result)
		{
			using func_t = decltype(&CombatUtilities::GetAttackerFiringLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAttackerFiringLocation };
			return func(result);
		}

		static NiPoint3 GetAttackerFiringLocationSimple(TESObjectREFR* result)
		{
			using func_t = decltype(&CombatUtilities::GetAttackerFiringLocationSimple);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAttackerFiringLocationSimple };
			return func(result);
		}

		static NiPoint3 GetBackProjectedAttackerFiringLocation(TESObjectREFR* result)
		{
			using func_t = decltype(&CombatUtilities::GetBackProjectedAttackerFiringLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetBackProjectedAttackerFiringLocation };
			return func(result);
		}

		static float GetTargetFiringZOffset(TESObjectREFR* apTarget, ACTOR_SEGMENT_INVIEW aeTargetSegmentInView, bool abIgnoreCrouch)
		{
			using func_t = decltype(&CombatUtilities::GetTargetFiringZOffset);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetTargetFiringZOffset };
			return func(apTarget, aeTargetSegmentInView, abIgnoreCrouch);
		}

		static NiPoint3 GetTargetFiringLocation(TESObjectREFR* result, ACTOR_SEGMENT_INVIEW apTarget)
		{
			using func_t = decltype(&CombatUtilities::GetTargetFiringLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetTargetFiringLocation };
			return func(result, apTarget);
		}

		static NiPoint3 GetTargetVelocity(TESObjectREFR* result)
		{
			using func_t = decltype(&CombatUtilities::GetTargetVelocity);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetTargetVelocity };
			return func(result);
		}

		static NiPoint3 GetAngleToProjectedTarget(TESObjectREFR* result, TESObjectREFR* apAttacker, float apTarget, float afSpeed, ACTOR_SEGMENT_INVIEW a_arg5)
		{
			using func_t = NiPoint3(__cdecl*)(TESObjectREFR*, TESObjectREFR*, float, float, ACTOR_SEGMENT_INVIEW);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAngleToProjectedTarget };
			return func(result, apAttacker, apTarget, afSpeed, a_arg5);
		}

		static NiPoint3 GetAngleToProjectedTarget(NiPoint3 result, TESObjectREFR* aStartLocation, float apTarget, float a_arg4, ACTOR_SEGMENT_INVIEW afSpeed)
		{
			using func_t = NiPoint3(__cdecl*)(NiPoint3, TESObjectREFR*, float, float, ACTOR_SEGMENT_INVIEW);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAngleToProjectedTarget_1 };
			return func(result, aStartLocation, apTarget, a_arg4, afSpeed);
		}

		static NiPoint3 GetAngleToProjectedPoint(TESObjectREFR* result, NiPoint3 aProjectedPoint)
		{
			using func_t = NiPoint3(__cdecl*)(TESObjectREFR*, NiPoint3);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAngleToProjectedPoint };
			return func(result, aProjectedPoint);
		}

		static NiPoint3 GetAngleToProjectedPoint(NiPoint3 result, NiPoint3 aStartLocation, float aPivotLocation, NiPoint3 a_arg4)
		{
			using func_t = NiPoint3(__cdecl*)(NiPoint3, NiPoint3, float, NiPoint3);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAngleToProjectedPoint_1 };
			return func(result, aStartLocation, aPivotLocation, a_arg4);
		}

		static NiPoint3 GetAngleToProjectedPoint(NiPoint3 result, NiPoint3 aProjectedPoint)
		{
			using func_t = NiPoint3(__cdecl*)(NiPoint3, NiPoint3);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetAngleToProjectedPoint_2 };
			return func(result, aProjectedPoint);
		}

		static NiPoint3 GetProjectedPointForTarget(TESObjectREFR* result, TESObjectREFR* apAttacker, NiPoint3* apTarget, BGSProjectile* apReleasePoint, float apProjectile, bool a_arg6)
		{
			using func_t = NiPoint3(__cdecl*)(TESObjectREFR*, TESObjectREFR*, NiPoint3*, BGSProjectile*, float, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetProjectedPointForTarget };
			return func(result, apAttacker, apTarget, apReleasePoint, apProjectile, a_arg6);
		}

		static NiPoint3 GetProjectedPointForTarget(TESObjectREFR* result, NiPoint3 aTargetLocation, NiPoint3 aTargetVelocity, NiPoint3* apReleasePoint, BGSProjectile* apProjectile, float a_arg6, bool a_arg7)
		{
			using func_t = NiPoint3(__cdecl*)(TESObjectREFR*, NiPoint3, NiPoint3, NiPoint3*, BGSProjectile*, float, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetProjectedPointForTarget_1 };
			return func(result, aTargetLocation, aTargetVelocity, apReleasePoint, apProjectile, a_arg6, a_arg7);
		}

		static NiPoint3 GetProjectedPointForTarget(NiPoint3 result, NiPoint3 aTargetLocation, NiPoint3 aTargetVelocity, float a_arg4, float a_arg5, bool afProjectileSpeed)
		{
			using func_t = NiPoint3(__cdecl*)(NiPoint3, NiPoint3, NiPoint3, float, float, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::GetProjectedPointForTarget_2 };
			return func(result, aTargetLocation, aTargetVelocity, a_arg4, a_arg5, afProjectileSpeed);
		}

		static void ComputeOptimalWeaponRanges(CombatController* apCombatController, TESObjectWEAP* apEquippedWeapon, float& arfMinRange, float& arfMaxRange, float& arfAbsoluteMaxRange)
		{
			using func_t = decltype(&CombatUtilities::ComputeOptimalWeaponRanges);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::ComputeOptimalWeaponRanges };
			func(apCombatController, apEquippedWeapon, arfMinRange, arfMaxRange, arfAbsoluteMaxRange);
		}

		static void CalculateCoverPositions(CombatController* apCombatController, CombatCoverLocation* apCombatCoverLocation, NiPoint3* apCoverPosition, NiPoint3* apFirePosition)
		{
			using func_t = void(__cdecl*)(CombatController*, CombatCoverLocation*, NiPoint3*, NiPoint3*);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CalculateCoverPositions };
			func(apCombatController, apCombatCoverLocation, apCoverPosition, apFirePosition);
		}

		static void CalculateCoverPositions(CombatController* apCombatController, PathingCoverLocation* apCoverLocation, CoverReservationInfo* apReservationInfo, NiPoint3* apCoverPosition, NiPoint3* apFirePosition)
		{
			using func_t = void(__cdecl*)(CombatController*, PathingCoverLocation*, CoverReservationInfo*, NiPoint3*, NiPoint3*);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CalculateCoverPositions_1 };
			func(apCombatController, apCoverLocation, apReservationInfo, apCoverPosition, apFirePosition);
		}

		static void CalculateCoverPositions(float a_arg1, PathingCoverLocation* a_arg2, CoverReservationInfo* apCoverLocation, NiPoint3* apReservationInfo, NiPoint3* apCoverPosition)
		{
			using func_t = void(__cdecl*)(float, PathingCoverLocation*, CoverReservationInfo*, NiPoint3*, NiPoint3*);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CalculateCoverPositions_2 };
			func(a_arg1, a_arg2, apCoverLocation, apReservationInfo, apCoverPosition);
		}

		static bool IsActorUsingMelee(Actor* apActor)
		{
			using func_t = decltype(&CombatUtilities::IsActorUsingMelee);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::IsActorUsingMelee };
			return func(apActor);
		}

		static bool IsActorUsingRanged(Actor* apActor)
		{
			using func_t = decltype(&CombatUtilities::IsActorUsingRanged);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::IsActorUsingRanged };
			return func(apActor);
		}

		static bool IsDangerousExplosion(BGSExplosion* apExplosion)
		{
			using func_t = decltype(&CombatUtilities::IsDangerousExplosion);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::IsDangerousExplosion };
			return func(apExplosion);
		}

		static bool CalculateAttackerCombatPositions(Actor* apTarget, Actor* apAttacker)
		{
			using func_t = decltype(&CombatUtilities::CalculateAttackerCombatPositions);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::CalculateAttackerCombatPositions };
			return func(apTarget, apAttacker);
		}

		static void AddLOSDebugGeomtry(NiPoint3& arStartLocation, NiPoint3& arEndLocation, NiAVObject* apHitObj, float afHitFraction, NiColorA* apLOSColor, NiColorA* apHitColor)
		{
			using func_t = decltype(&CombatUtilities::AddLOSDebugGeomtry);
			static REL::Relocation<func_t> func{ Offsets::CombatUtilities::AddLOSDebugGeomtry };
			func(arStartLocation, arEndLocation, apHitObj, afHitFraction, apLOSColor, apHitColor);
		}
	};
}
