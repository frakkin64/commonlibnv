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
	class TESBoundObject;

	class CombatProcedureUseCombatItem :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureUseCombatItem };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureUseCombatItem };

		// override (CombatProcedure)
		virtual ~CombatProcedureUseCombatItem() = default;                                                                            // 00
		virtual void Update() override;                                                                                               // 01
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureUseCombatItem* ctor(TESBoundObject* apItem)
		{
			using func_t = CombatProcedureUseCombatItem*(__thiscall*)(CombatProcedureUseCombatItem*, TESBoundObject*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureUseCombatItem::ctor };
			return func(this, apItem);
		}

	public:
		// members
		TESBoundObject* pItem;       // 10
		bool            bAnimating;  // 14
		std::uint8_t    pad15[0x3];  // 15
	};
	static_assert(sizeof(CombatProcedureUseCombatItem) == 0x18);
}
