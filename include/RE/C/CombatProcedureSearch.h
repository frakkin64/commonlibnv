#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"
#include "RE/C/CombatTimer.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;
	class TESBoundObject;
	class TESObjectREFR;

	class CombatProcedureSearch :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureSearch };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureSearch };

		enum class SEARCH_STATE : std::int32_t
		{
			kSEARCH_STATE_INITIALIZING = 0x0,
			kSEARCH_STATE_INVESTIGATING = 0x1,
			kSEARCH_STATE_SEARCHING_DOOR = 0x2,
			kSEARCH_STATE_SEARCHING = 0x3,
			kSEARCH_STATE_LOOKING_DOOR_FADE = 0x4,
			kSEARCH_STATE_LOOKING_DOOR = 0x5,
			kSEARCH_STATE_LOOKING = 0x6,
			kSEARCH_STATE_LOOKING_AROUND_NEW_SPACE = 0x7,
			kSEARCH_STATE_MOVING_TO_SEARCH_CENTER = 0x8,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureSearch() = default;                                                                                                  // 00
		virtual void Update() override;                                                                                                              // 01
		virtual void Shutdown() override;                                                                                                            // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;                 // 05
		virtual void ActivatedReference(TESObjectREFR* apRef, TESBoundObject* apObject, std::int32_t aiCount, bool abActivatedScriptOnly) override;  // 0A
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                                // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                         // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                         // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                     // 10

		CombatProcedureSearch* ctor()
		{
			using func_t = CombatProcedureSearch*(__thiscall*)(CombatProcedureSearch*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureSearch::ctor };
			return func(this);
		}

	public:
		// members
		CombatProcedureSearch::SEARCH_STATE eState;                 // 10
		CombatTimer                         CheckDestinationTimer;  // 14
		CombatTimer                         LookingTimer;           // 1C
		CombatTimer                         CheckSearchDoorTimer;   // 24
		BGSWorldLocation                    InvestigateLocation;    // 2C
		TESObjectREFR*                      pSearchDoor;            // 3C
	};
	static_assert(sizeof(CombatProcedureSearch) == 0x40);
}
