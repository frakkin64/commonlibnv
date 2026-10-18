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
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CombatCoverLocation;
	class IDebugText;

	class CombatProcedureHideFromTarget :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureHideFromTarget };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureHideFromTarget };

		enum class HIDE_STATE : std::int32_t
		{
			kHIDE_STATE_INITIALIZING = 0x0,
			kHIDE_STATE_MOVING_TO_COVER = 0x1,
			kHIDE_STATE_HIDING = 0x2,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureHideFromTarget() = default;                                                                           // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Shutdown() override;                                                                                             // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureHideFromTarget* ctor(CombatCoverLocation* apCombatCoverLocation, float a_arg2, bool a_arg3, bool abIgnoreLOS)
		{
			using func_t = CombatProcedureHideFromTarget*(__thiscall*)(CombatProcedureHideFromTarget*, CombatCoverLocation*, float, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureHideFromTarget::ctor };
			return func(this, apCombatCoverLocation, a_arg2, a_arg3, abIgnoreLOS);
		}

	public:
		// members
		CombatProcedureHideFromTarget::HIDE_STATE eState;                   // 10
		float                                     fNumSecondsToHide;        // 14
		CombatTimer                               HidingTimer;              // 18
		NiPoint3                                  HidePosition;             // 20
		NiPoint3                                  LookAtPosition;           // 2C
		CombatCoverLocation*                      pCoverLocation;           // 38
		bool                                      bIgnoreLOS;               // 3C
		bool                                      bClearCoverWhenFinished;  // 3D
		std::uint16_t                             pad3E;                    // 3E
	};
	static_assert(sizeof(CombatProcedureHideFromTarget) == 0x40);
}
