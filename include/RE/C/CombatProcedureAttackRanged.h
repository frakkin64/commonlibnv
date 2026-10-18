#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"
#include "RE/C/CombatTimer.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;
	class Projectile;

	class CombatProcedureAttackRanged :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureAttackRanged };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureAttackRanged };

		enum class ATTACK_STATE : std::int32_t
		{
			kATTACK_STATE_IDLE = 0x0,
			kATTACK_STATE_FIRING = 0x1,
			kATTACK_STATE_COOLDOWN = 0x2,
			kATTACK_STATE_SUPPRESSIVE_FIRE = 0x3,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureAttackRanged() = default;                                                                             // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Shutdown() override;                                                                                             // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual bool GetTargetedPoint(NiPoint3& arTargetedPoint, NiPoint3& arReleasePoint) override;                                  // 06
		virtual void Disarmed(Actor* apOpponent) override;                                                                            // 07
		virtual void FiredProjectile(Projectile* apProjectile) override;                                                              // 08
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureAttackRanged* ctor()
		{
			using func_t = CombatProcedureAttackRanged*(__thiscall*)(CombatProcedureAttackRanged*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackRanged::ctor };
			return func(this);
		}

		NiPoint3 CalculateTargetedPoint(NiPoint3* result)
		{
			using func_t = decltype(&CombatProcedureAttackRanged::CalculateTargetedPoint);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackRanged::CalculateTargetedPoint };
			return func(this, result);
		}

		bool AimAtTarget()
		{
			using func_t = decltype(&CombatProcedureAttackRanged::AimAtTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackRanged::AimAtTarget };
			return func(this);
		}

	public:
		// members
		CombatProcedureAttackRanged::ATTACK_STATE eState;                           // 10
		NiPoint3                                  TargetedPoint;                    // 14
		CombatTimer                               ExplosiveProjectileBlockedTimer;  // 20
		CombatTimer                               FiringTimer;                      // 28
		CombatTimer                               CooldownTimer;                    // 30
		CombatTimer                               FireDelayTimer;                   // 38
		CombatTimer                               SuppressiveFireTimer;             // 40
	};
	static_assert(sizeof(CombatProcedureAttackRanged) == 0x48);
}
