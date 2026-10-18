#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectWEAP;

	class CombatProcedureSwitchWeapon :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureSwitchWeapon };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureSwitchWeapon };

		// override (CombatProcedure)
		virtual ~CombatProcedureSwitchWeapon() = default;                         // 00
		virtual void Update() override;                                           // 01
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;             // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 10

		CombatProcedureSwitchWeapon* ctor(TESObjectWEAP* apWeapon)
		{
			using func_t = CombatProcedureSwitchWeapon*(__thiscall*)(CombatProcedureSwitchWeapon*, TESObjectWEAP*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureSwitchWeapon::ctor };
			return func(this, apWeapon);
		}

	public:
		// members
		TESObjectWEAP* pWeapon;       // 10
		bool           bEquipQueued;  // 14
		std::uint8_t   pad15[0x3];    // 15
	};
	static_assert(sizeof(CombatProcedureSwitchWeapon) == 0x18);
}
