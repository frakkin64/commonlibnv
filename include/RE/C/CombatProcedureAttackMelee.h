#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/C/CombatMovementRestrictions.h"
#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/C/CombatTimer.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CombatController;
	class IDebugText;
	class NiPoint3;

	class CombatProcedureAttackMelee :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureAttackMelee };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureAttackMelee };

		enum class CombatState : std::int32_t
		{
			kPOSTPONED = 0x0,
			kDONE = 0x1,
		};

		enum class Maneuver : std::int32_t
		{
			kENGAGE = 0x0,
			kIDLE = 0x1,
			kDODGE = 0x2,
			kCLOSE = 0x3,
			kADVANCE = 0x4,
			kMANEUVER_COUNT = 0x5,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureAttackMelee() = default;                                                                              // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Initialize(CombatController* apCombatController) override;                                                       // 02
		virtual void Shutdown() override;                                                                                             // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureAttackMelee* ctor()
		{
			using func_t = CombatProcedureAttackMelee*(__thiscall*)(CombatProcedureAttackMelee*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::ctor };
			return func(this);
		}

	private:
		void MeleeDecision()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::MeleeDecision);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::MeleeDecision };
			func(this);
		}

		ANIM_GROUP_ENUM SelectAttack(bool abMidAttack, float afDistance, float afReach, bool abTargetAttacking, bool abTargetPostAttack, bool abTargetRecoiling, bool& abDoPowerAttack, bool& abSwitchAttack)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::SelectAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::SelectAttack };
			return func(this, abMidAttack, afDistance, afReach, abTargetAttacking, abTargetPostAttack, abTargetRecoiling, abDoPowerAttack, abSwitchAttack);
		}

		void StartAttack(ANIM_GROUP_ENUM aeAttack, bool abSwitchAttack)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::StartAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::StartAttack };
			func(this, aeAttack, abSwitchAttack);
		}

		void HandleAttack()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleAttack };
			func(this);
		}

		void HandleBlock()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleBlock);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleBlock };
			func(this);
		}

		void CheckStopBlocking()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::CheckStopBlocking);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::CheckStopBlocking };
			func(this);
		}

		void HandleHold()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleHold);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleHold };
			func(this);
		}

		void StartEngage()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::StartEngage);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::StartEngage };
			func(this);
		}

		void HandleEngage()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleEngage);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleEngage };
			func(this);
		}

		void ManeuverDecision()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::ManeuverDecision);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::ManeuverDecision };
			func(this);
		}

		void HandleDodge()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleDodge);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleDodge };
			func(this);
		}

		void HandleIdle()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleIdle);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleIdle };
			func(this);
		}

		void StartClose()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::StartClose);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::StartClose };
			func(this);
		}

		void HandleClose()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleClose);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleClose };
			func(this);
		}

		void StartAdvance()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::StartAdvance);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::StartAdvance };
			func(this);
		}

		void HandleAdvance()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::HandleAdvance);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::HandleAdvance };
			func(this);
		}

		float GetCurrentAttackReach()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::GetCurrentAttackReach);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::GetCurrentAttackReach };
			return func(this);
		}

		void MoveToFaceTargetLocation(NiPoint3& arFaceTargetLocation)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::MoveToFaceTargetLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::MoveToFaceTargetLocation };
			func(this, arFaceTargetLocation);
		}

		ANIM_GROUP_ENUM SelectPowerAttack(float afDistance, float afReach, bool abTargetAttacking, bool abtargetPostAttack, bool abForwardOnly)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::SelectPowerAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::SelectPowerAttack };
			return func(this, afDistance, afReach, abTargetAttacking, abtargetPostAttack, abForwardOnly);
		}

		bool WithinAttackRange(float afDistance, float afReach, ANIM_GROUP_ENUM* aeAttackWithinReach)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::WithinAttackRange);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::WithinAttackRange };
			return func(this, afDistance, afReach, aeAttackWithinReach);
		}

		bool OutsideAttackRange(float afDistance, float afReach, ANIM_GROUP_ENUM* aeAttackWithinReach)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::OutsideAttackRange);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::OutsideAttackRange };
			return func(this, afDistance, afReach, aeAttackWithinReach);
		}

		void CheckForwardPowerAttack(float a_arg1, float a_arg2)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::CheckForwardPowerAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::CheckForwardPowerAttack };
			func(this, a_arg1, a_arg2);
		}

		bool CanDoPowerAttack(ANIM_GROUP_ENUM aePowerAttack)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::CanDoPowerAttack);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::CanDoPowerAttack };
			return func(this, aePowerAttack);
		}

		void AttackDecision()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::AttackDecision);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::AttackDecision };
			func(this);
		}

		void SetManeuverState(CombatProcedureAttackMelee::Maneuver aeManeuverState)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::SetManeuverState);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::SetManeuverState };
			func(this, aeManeuverState);
		}

		void SetCombatState(CombatProcedureAttackMelee::CombatState aeCombatState)
		{
			using func_t = decltype(&CombatProcedureAttackMelee::SetCombatState);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::SetCombatState };
			func(this, aeCombatState);
		}

		void CheckResetMovementRestrictions()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::CheckResetMovementRestrictions);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::CheckResetMovementRestrictions };
			func(this);
		}

		void StopMoving()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::StopMoving);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::StopMoving };
			func(this);
		}

		void CheckMovementRestrictionsDistance()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::CheckMovementRestrictionsDistance);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::CheckMovementRestrictionsDistance };
			func(this);
		}

		float GetFacingTargetDistance()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::GetFacingTargetDistance);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::GetFacingTargetDistance };
			return func(this);
		}

		bool IsTargetMovingAway()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::IsTargetMovingAway);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::IsTargetMovingAway };
			return func(this);
		}

		float GetMovingTargetVelocity()
		{
			using func_t = decltype(&CombatProcedureAttackMelee::GetMovingTargetVelocity);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackMelee::GetMovingTargetVelocity };
			return func(this);
		}

	public:
		// members
		CombatProcedureAttackMelee::Maneuver    eManeuverState;              // 10
		CombatProcedureAttackMelee::CombatState eCombatState;                // 14
		CombatProcedureAttackMelee::CombatState eLastCombatState;            // 18
		ANIM_GROUP_ENUM                         eCurrentAttack;              // 1C
		CombatTimer                             MeleeTimer;                  // 20
		CombatTimer                             ManeuverTimer;               // 28
		CombatTimer                             DodgeTimer;                  // 30
		CombatTimer                             AdvanceTimer;                // 38
		CombatTimer                             CloseTimer;                  // 40
		CombatTimer                             TargetUnreachableTimer;      // 48
		bool                                    bRangedAllyWantsToShoot;     // 50
		std::uint8_t                            pad51[0x3];                  // 51
		std::int32_t                            iAdvanceMoveMode;            // 54
		float                                   fCurrentAttackReach;         // 58
		float                                   fFacingTargetDistance;       // 5C
		CombatTimeStamp                         fAttackPickFailedTimestamp;  // 60
		CombatMovementRestrictions              MovementRestrictions;        // 64
	};
	static_assert(sizeof(CombatProcedureAttackMelee) == 0x88);
}
