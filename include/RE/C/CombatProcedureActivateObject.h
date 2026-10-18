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
	class TESObjectREFR;

	class CombatProcedureActivateObject :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureActivateObject };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureActivateObject };

		// override (CombatProcedure)
		virtual ~CombatProcedureActivateObject() = default;                                                                           // 00
		virtual void Update() override;                                                                                               // 01
		virtual void ClearReferencePointers(TESObjectREFR* apRef) override;                                                           // 04
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureActivateObject* ctor(TESObjectREFR* apTargetRef, TESBoundObject* apBoundObject)
		{
			using func_t = CombatProcedureActivateObject*(__thiscall*)(CombatProcedureActivateObject*, TESObjectREFR*, TESBoundObject*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureActivateObject::ctor };
			return func(this, apTargetRef, apBoundObject);
		}

	public:
		// members
		TESObjectREFR*  pTargetRef;    // 10
		TESBoundObject* pBoundObject;  // 14
		char            cAnimating;    // 18
		std::uint8_t    pad19[0x3];    // 19
	};
	static_assert(sizeof(CombatProcedureActivateObject) == 0x1C);
}
