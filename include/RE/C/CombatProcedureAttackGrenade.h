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
	class BGSExplosion;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;
	class Projectile;

	class CombatProcedureAttackGrenade :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureAttackGrenade };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureAttackGrenade };

		enum class ATTACK_STATE : std::int32_t
		{
			kATTACK_STATE_IDLE = 0x0,
			kATTACK_STATE_FIRING = 0x1,
			kATTACK_STATE_COOLDOWN = 0x2,
			kATTACK_STATE_SUPPRESSIVE_FIRE = 0x3,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureAttackGrenade() = default;                                                                            // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Shutdown() override;                                                                                             // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual bool GetTargetedPoint(NiPoint3& arTargetedPoint, NiPoint3& arReleasePoint) override;                                  // 06
		virtual void FiredProjectile(Projectile* apProjectile) override;                                                              // 08
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureAttackGrenade* ctor()
		{
			using func_t = CombatProcedureAttackGrenade*(__thiscall*)(CombatProcedureAttackGrenade*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackGrenade::ctor };
			return func(this);
		}

		CombatProcedureAttackGrenade* ctor(NiPoint3 const& aTargetLocation, bool abHighArc)
		{
			using func_t = CombatProcedureAttackGrenade*(__thiscall*)(CombatProcedureAttackGrenade*, NiPoint3 const&, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackGrenade::ctor_1 };
			return func(this, aTargetLocation, abHighArc);
		}

		bool CheckExplosion(BGSExplosion* apExplosion, NiPoint3 const& arLocation, float afTime)
		{
			using func_t = decltype(&CombatProcedureAttackGrenade::CheckExplosion);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackGrenade::CheckExplosion };
			return func(this, apExplosion, arLocation, afTime);
		}

		NiPoint3 CalculateTargetedPoint()
		{
			using func_t = decltype(&CombatProcedureAttackGrenade::CalculateTargetedPoint);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackGrenade::CalculateTargetedPoint };
			return func(this);
		}

	public:
		// members
		CombatProcedureAttackGrenade::ATTACK_STATE eState;                           // 10
		bool                                       bTargetLocation;                  // 14
		std::uint8_t                               pad15[0x3];                       // 15
		NiPoint3                                   TargetLocation;                   // 18
		NiPoint3                                   TargetedPoint;                    // 24
		bool                                       bHighArc;                         // 30
		std::uint8_t                               pad31[0x3];                       // 31
		CombatTimer                                ExplosiveProjectileBlockedTimer;  // 34
	};
	static_assert(sizeof(CombatProcedureAttackGrenade) == 0x3C);
}
