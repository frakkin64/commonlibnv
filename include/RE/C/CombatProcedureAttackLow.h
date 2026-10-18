#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;
	class TESObjectWEAP;

	class CombatProcedureAttackLow :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureAttackLow };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureAttackLow };

		enum class ATTACK_STATE : std::int32_t
		{
			kATTACK_STATE_INITIALIZING = 0x0,
			kATTACK_STATE_ATTACKING = 0x1,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureAttackLow() = default;                                                                                // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Shutdown() override;                                                                                             // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F

		CombatProcedureAttackLow* ctor()
		{
			using func_t = CombatProcedureAttackLow*(__thiscall*)(CombatProcedureAttackLow*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureAttackLow::ctor };
			return func(this);
		}

	public:
		// members
		CombatProcedureAttackLow::ATTACK_STATE eState;            // 10
		float                                  fWeaponDPS;        // 14
		float                                  fWeaponCondition;  // 18
		TESObjectWEAP*                         pWeapon;           // 1C
	};
	static_assert(sizeof(CombatProcedureAttackLow) == 0x20);
}
