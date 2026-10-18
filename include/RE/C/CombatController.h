#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/C/COMBAT_LOW_STATE.h"
#include "RE/C/COMBAT_MOVE_MODE.h"
#include "RE/C/CombatTimer.h"
#include "RE/F/FailedCombatProcedure.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PROCESS_TYPE.h"
#include "RE/T/TESPackage.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CombatAction;
	class CombatGoal;
	class CombatGroup;
	class CombatPlan;
	class CombatPlannerData;
	class CombatProcedure;
	class CombatState;
	class ItemChange;
	class NiNode;
	class TESCombatStyle;
	class TESObjectREFR;
	class TESObjectWEAP;

	class CombatController :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatController };
		static constexpr auto VTABLE{ VTABLE::CombatController };

		// override (TESPackage)
		virtual ~CombatController() = default;                                      // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;        // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;        // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 19
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 21

		CombatGroup* GetCombatGroup()
		{
			using func_t = decltype(&CombatController::GetCombatGroup);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetCombatGroup };
			return func(this);
		}

		CombatState* GetCombatState()
		{
			using func_t = decltype(&CombatController::GetCombatState);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetCombatState };
			return func(this);
		}

		static bool GetShowVerboseMessages()
		{
			using func_t = decltype(&CombatController::GetShowVerboseMessages);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetShowVerboseMessages };
			return func();
		}

		void ForceStopCombat()
		{
			using func_t = decltype(&CombatController::ForceStopCombat);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ForceStopCombat };
			func(this);
		}

		CombatPlannerData* GetCombatPlannerData()
		{
			using func_t = decltype(&CombatController::GetCombatPlannerData);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetCombatPlannerData };
			return func(this);
		}

		TESObjectWEAP* GetCurrentWeapon()
		{
			using func_t = decltype(&CombatController::GetCurrentWeapon);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetCurrentWeapon };
			return func(this);
		}

		void ForceFlee(Actor* apFleeFrom, bool abSwimFlee)
		{
			using func_t = decltype(&CombatController::ForceFlee);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ForceFlee };
			func(this, apFleeFrom, abSwimFlee);
		}

		Actor* GetAttacker()
		{
			using func_t = decltype(&CombatController::GetAttacker);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetAttacker };
			return func(this);
		}

		CombatController* ctor(Actor* apAttacker, CombatGroup* apCombatGroup, TESPackage* apCurrentPackage)
		{
			using func_t = CombatController*(__thiscall*)(CombatController*, Actor*, CombatGroup*, TESPackage*);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ctor };
			return func(this, apAttacker, apCombatGroup, apCurrentPackage);
		}

		void FirstUpdate()
		{
			using func_t = decltype(&CombatController::FirstUpdate);
			static REL::Relocation<func_t> func{ Offsets::CombatController::FirstUpdate };
			func(this);
		}

		void CalculateAttackerInfo()
		{
			using func_t = decltype(&CombatController::CalculateAttackerInfo);
			static REL::Relocation<func_t> func{ Offsets::CombatController::CalculateAttackerInfo };
			func(this);
		}

		void Update()
		{
			using func_t = decltype(&CombatController::Update);
			static REL::Relocation<func_t> func{ Offsets::CombatController::Update };
			func(this);
		}

		void UpdateLow()
		{
			using func_t = decltype(&CombatController::UpdateLow);
			static REL::Relocation<func_t> func{ Offsets::CombatController::UpdateLow };
			func(this);
		}

		void UpdateLowMovement()
		{
			using func_t = decltype(&CombatController::UpdateLowMovement);
			static REL::Relocation<func_t> func{ Offsets::CombatController::UpdateLowMovement };
			func(this);
		}

		void ChangeProcessLevel(PROCESS_TYPE aeOldLevel, PROCESS_TYPE aeNewLevel)
		{
			using func_t = decltype(&CombatController::ChangeProcessLevel);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ChangeProcessLevel };
			func(this, aeOldLevel, aeNewLevel);
		}

		void ForcePlanUpdate()
		{
			using func_t = decltype(&CombatController::ForcePlanUpdate);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ForcePlanUpdate };
			func(this);
		}

		bool HasLineOfSight()
		{
			using func_t = decltype(&CombatController::HasLineOfSight);
			static REL::Relocation<func_t> func{ Offsets::CombatController::HasLineOfSight };
			return func(this);
		}

		static bool CheckHasEquip(Actor* apAttacker, ItemChange* apWeapon)
		{
			using func_t = decltype(&CombatController::CheckHasEquip);
			static REL::Relocation<func_t> func{ Offsets::CombatController::CheckHasEquip };
			return func(apAttacker, apWeapon);
		}

		void UpdateCurrentWeapon()
		{
			using func_t = decltype(&CombatController::UpdateCurrentWeapon);
			static REL::Relocation<func_t> func{ Offsets::CombatController::UpdateCurrentWeapon };
			func(this);
		}

		void UpdateCurrentCombatStyle()
		{
			using func_t = decltype(&CombatController::UpdateCurrentCombatStyle);
			static REL::Relocation<func_t> func{ Offsets::CombatController::UpdateCurrentCombatStyle };
			func(this);
		}

		void CheckCurrentWeapon()
		{
			using func_t = decltype(&CombatController::CheckCurrentWeapon);
			static REL::Relocation<func_t> func{ Offsets::CombatController::CheckCurrentWeapon };
			func(this);
		}

		bool StopCombat(Actor* apTarget)
		{
			using func_t = decltype(&CombatController::StopCombat);
			static REL::Relocation<func_t> func{ Offsets::CombatController::StopCombat };
			return func(this, apTarget);
		}

		void TakeHit(Actor* apAttacker, ActiveEffect* apEffect)
		{
			using func_t = decltype(&CombatController::TakeHit);
			static REL::Relocation<func_t> func{ Offsets::CombatController::TakeHit };
			func(this, apAttacker, apEffect);
		}

		void DamagedByAttacker(Actor* apAttacker, float afDamage)
		{
			using func_t = decltype(&CombatController::DamagedByAttacker);
			static REL::Relocation<func_t> func{ Offsets::CombatController::DamagedByAttacker };
			func(this, apAttacker, afDamage);
		}

		void AddTarget(Actor* apTarget, std::int32_t iPriority, bool abHighPriority, float afDamageDone, float afDamageTaken)
		{
			using func_t = decltype(&CombatController::AddTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatController::AddTarget };
			func(this, apTarget, iPriority, abHighPriority, afDamageDone, afDamageTaken);
		}

		void RemoveTarget(Actor* apActor)
		{
			using func_t = decltype(&CombatController::RemoveTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatController::RemoveTarget };
			func(this, apActor);
		}

		bool IsActoraCombatTarget(Actor* apActor)
		{
			using func_t = decltype(&CombatController::IsActoraCombatTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatController::IsActoraCombatTarget };
			return func(this, apActor);
		}

		void DebugCombatPlan()
		{
			using func_t = decltype(&CombatController::DebugCombatPlan);
			static REL::Relocation<func_t> func{ Offsets::CombatController::DebugCombatPlan };
			func(this);
		}

		std::int32_t GetAttackSkill()
		{
			using func_t = decltype(&CombatController::GetAttackSkill);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetAttackSkill };
			return func(this);
		}

		static bool GetPowerAttackDelta(Actor* apActor, ANIM_GROUP_ENUM aePowerAttack, NiPoint3& aNewPos)
		{
			using func_t = bool(__cdecl*)(Actor*, ANIM_GROUP_ENUM, NiPoint3&);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetPowerAttackDelta };
			return func(apActor, aePowerAttack, aNewPos);
		}

		static float GetPowerAttackHitTime(Actor* apActor, ANIM_GROUP_ENUM aePowerAttack)
		{
			using func_t = decltype(&CombatController::GetPowerAttackHitTime);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetPowerAttackHitTime };
			return func(apActor, aePowerAttack);
		}

		void DeterminePowerAttackDeltas()
		{
			using func_t = decltype(&CombatController::DeterminePowerAttackDeltas);
			static REL::Relocation<func_t> func{ Offsets::CombatController::DeterminePowerAttackDeltas };
			func(this);
		}

		TESCombatStyle* GetCurrentCombatStyle()
		{
			using func_t = decltype(&CombatController::GetCurrentCombatStyle);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetCurrentCombatStyle };
			return func(this);
		}

		bool GetPowerAttackDelta(ANIM_GROUP_ENUM aePowerAttack, NiPoint3& aNewPos)
		{
			using func_t = bool (CombatController::*)(ANIM_GROUP_ENUM, NiPoint3&);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetPowerAttackDelta_1 };
			return func(this, aePowerAttack, aNewPos);
		}

		void SetActionProcedure(CombatProcedure* apActionProcedure)
		{
			using func_t = decltype(&CombatController::SetActionProcedure);
			static REL::Relocation<func_t> func{ Offsets::CombatController::SetActionProcedure };
			func(this, apActionProcedure);
		}

		void SetMovementProcedure(CombatProcedure* apMovementProcedure)
		{
			using func_t = decltype(&CombatController::SetMovementProcedure);
			static REL::Relocation<func_t> func{ Offsets::CombatController::SetMovementProcedure };
			func(this, apMovementProcedure);
		}

		void ClearProcedures()
		{
			using func_t = decltype(&CombatController::ClearProcedures);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ClearProcedures };
			func(this);
		}

		bool GetProcedureFailed()
		{
			using func_t = decltype(&CombatController::GetProcedureFailed);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetProcedureFailed };
			return func(this);
		}

		void ClearCombatPlan()
		{
			using func_t = decltype(&CombatController::ClearCombatPlan);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ClearCombatPlan };
			func(this);
		}

		void InitializeCombatPlanData()
		{
			using func_t = decltype(&CombatController::InitializeCombatPlanData);
			static REL::Relocation<func_t> func{ Offsets::CombatController::InitializeCombatPlanData };
			func(this);
		}

		void SetTarget(Actor* apTarget)
		{
			using func_t = decltype(&CombatController::SetTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatController::SetTarget };
			func(this, apTarget);
		}

		void ClearReferencePointers(TESObjectREFR* apRef)
		{
			using func_t = decltype(&CombatController::ClearReferencePointers);
			static REL::Relocation<func_t> func{ Offsets::CombatController::ClearReferencePointers };
			func(this, apRef);
		}

		void UpdatePackageData(TESPackage* apCurrentPackage)
		{
			using func_t = decltype(&CombatController::UpdatePackageData);
			static REL::Relocation<func_t> func{ Offsets::CombatController::UpdatePackageData };
			func(this, apCurrentPackage);
		}

		void FinishedPackageTask()
		{
			using func_t = decltype(&CombatController::FinishedPackageTask);
			static REL::Relocation<func_t> func{ Offsets::CombatController::FinishedPackageTask };
			func(this);
		}

		bool IsSearching()
		{
			using func_t = decltype(&CombatController::IsSearching);
			static REL::Relocation<func_t> func{ Offsets::CombatController::IsSearching };
			return func(this);
		}

		void SetMoveMode(COMBAT_MOVE_MODE aeCombatMoveMode)
		{
			using func_t = decltype(&CombatController::SetMoveMode);
			static REL::Relocation<func_t> func{ Offsets::CombatController::SetMoveMode };
			func(this, aeCombatMoveMode);
		}

		void SetActualMoveMode(std::uint32_t aiMoveMode)
		{
			using func_t = decltype(&CombatController::SetActualMoveMode);
			static REL::Relocation<func_t> func{ Offsets::CombatController::SetActualMoveMode };
			func(this, aiMoveMode);
		}

		void UpdateLookAtTarget()
		{
			using func_t = decltype(&CombatController::UpdateLookAtTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatController::UpdateLookAtTarget };
			func(this);
		}

		bool IsTargetUndetectable()
		{
			using func_t = decltype(&CombatController::IsTargetUndetectable);
			static REL::Relocation<func_t> func{ Offsets::CombatController::IsTargetUndetectable };
			return func(this);
		}

		void SetBlock(bool abBlocking)
		{
			using func_t = decltype(&CombatController::SetBlock);
			static REL::Relocation<func_t> func{ Offsets::CombatController::SetBlock };
			func(this, abBlocking);
		}

		bool GetBlocking()
		{
			using func_t = decltype(&CombatController::GetBlocking);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetBlocking };
			return func(this);
		}

		bool CombatPlanContainsAction(std::int32_t aiAction)
		{
			using func_t = decltype(&CombatController::CombatPlanContainsAction);
			static REL::Relocation<func_t> func{ Offsets::CombatController::CombatPlanContainsAction };
			return func(this, aiAction);
		}

		bool IsSwitchingWeapons()
		{
			using func_t = decltype(&CombatController::IsSwitchingWeapons);
			static REL::Relocation<func_t> func{ Offsets::CombatController::IsSwitchingWeapons };
			return func(this);
		}

		bool IsFleeing()
		{
			using func_t = decltype(&CombatController::IsFleeing);
			static REL::Relocation<func_t> func{ Offsets::CombatController::IsFleeing };
			return func(this);
		}

		void LoadProcedure(CombatProcedure*& arpProcedure, BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatController::LoadProcedure);
			static REL::Relocation<func_t> func{ Offsets::CombatController::LoadProcedure };
			func(this, arpProcedure, apLoadGameBuffer);
		}

		bool GetAttackerCanSneak()
		{
			using func_t = decltype(&CombatController::GetAttackerCanSneak);
			static REL::Relocation<func_t> func{ Offsets::CombatController::GetAttackerCanSneak };
			return func(this);
		}

	public:
		// members
		CombatGroup*                          pCombatGroup;                  // 80
		CombatProcedure*                      pActionProcedure;              // 84
		CombatProcedure*                      pMovementProcedure;            // 88
		BSSimpleArray<CombatProcedure*, 1024> BackgroundProcedures;          // 8C
		CombatState*                          pCombatState;                  // 9C
		CombatPlan*                           pCombatPlan;                   // A0
		CombatPlannerData*                    pCombatPlannerData;            // A4
		CombatAction*                         pCurrentAction;                // A8
		CombatGoal*                           pCurrentGoal;                  // AC
		std::int32_t                          iCurrentActionValue;           // B0
		CombatTimer                           PlanTimer;                     // B4
		Actor*                                pAttacker;                     // BC
		Actor*                                pTarget;                       // C0
		bool                                  bForceCombat;                  // C4
		bool                                  bUpdatedDetection;             // C5
		char                                  cUseIronSights;                // C6
		bool                                  bForceSneak;                   // C7
		std::uint32_t                         iMoveMode;                     // C8
		float                                 fAttackerHeight;               // CC
		float                                 fAttackerSneakHeight;          // D0
		bool                                  bAttackerCanSneak;             // D4
		bool                                  bAttackerCanMove;              // D5
		std::uint16_t                         padD6;                         // D6
		float                                 fWalkSpeedMult;                // D8
		float                                 fRunSpeedMult;                 // DC
		float                                 fCombatPosition;               // E0
		bool                                  bFirstUpdate;                  // E4
		std::uint8_t                          padE5[0x3];                    // E5
		NiPointer<NiNode>                     spDebugGeometry;               // E8
		NiPointer<NiNode>                     spCellDebugGeometry;           // EC
		TESObjectWEAP*                        pCurrentWeapon;                // F0
		TESCombatStyle*                       pCurrentCombatStyle;           // F4
		bool                                  bDestructing;                  // F8
		bool                                  bDeterminedPowerAttackDeltas;  // F9
		std::uint16_t                         padFA;                         // FA
		float                                 fPowerAttackRanges[5];         // FC
		float                                 fPowerAttackHitTimes[5];       // 110
		bool                                  bHasForwardAttacks;            // 124
		bool                                  bStopCombat;                   // 125
		bool                                  bStoppingCombat;               // 126
		std::uint8_t                          pad127;                        // 127
		NiPoint3                              LookAtTarget[2];               // 128
		std::uint8_t                          cLookAtTargetPriority[2];      // 140
		std::uint8_t                          cIgnoreLookAtTarget;           // 142
		std::uint8_t                          pad143;                        // 143
		COMBAT_LOW_STATE                      eLowState;                     // 144
		float                                 fLowMovementDelta;             // 148
		FailedCombatProcedure                 FailedCombatProcedures[5];     // 14C
	};
	static_assert(sizeof(CombatController) == 0x188);
}
