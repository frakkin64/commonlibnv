#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"
#include "RE/C/CombatTimer.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CombatLocation;
	class IDebugText;
	class PathingAvoidNodeArray;
	class PathingRequest;
	class TESObjectREFR;

	class CombatProcedureMove :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureMove };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureMove };

		enum class MOVE_STATE : std::int32_t
		{
			kMOVE_STATE_INITIALIZING = 0x0,
			kMOVE_STATE_MOVING = 0x1,
			kMOVE_STATE_MOVING_USING_COVER = 0x2,
			kMOVE_STATE_HIDING_BEHIND_COVER = 0x3,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureMove() = default;                                                                                     // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Shutdown() override;                                                                                             // 03
		virtual void ClearReferencePointers(TESObjectREFR* apRef) override;                                                           // 04
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual void StartedPlanning() override;                                                                                      // 0B
		virtual void FinishedPlanning() override;                                                                                     // 0C
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureMove* ctor(CombatLocation* apCombatLocation, float a_arg2, std::int32_t a_arg3)
		{
			using func_t = CombatProcedureMove*(__thiscall*)(CombatProcedureMove*, CombatLocation*, float, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureMove::ctor };
			return func(this, apCombatLocation, a_arg2, a_arg3);
		}

		bool CreatePath()
		{
			using func_t = bool (CombatProcedureMove::*)();
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureMove::CreatePath };
			return func(this);
		}

		bool CreatePath(NiPointer<PathingAvoidNodeArray>& arspAvoidNodeArray)
		{
			using func_t = bool (CombatProcedureMove::*)(NiPointer<PathingAvoidNodeArray>&);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureMove::CreatePath_1 };
			return func(this, arspAvoidNodeArray);
		}

		void CreateAvoidNodeArray(NiPointer<PathingAvoidNodeArray>& arspAvoidNodeArray)
		{
			using func_t = decltype(&CombatProcedureMove::CreateAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureMove::CreateAvoidNodeArray };
			func(this, arspAvoidNodeArray);
		}

	public:
		// members
		CombatProcedureMove::MOVE_STATE eState;                      // 10
		BGSWorldLocation                Destination;                 // 14
		BGSWorldLocation                CurrentDestination;          // 24
		float                           fTargetRadius;               // 34
		TESObjectREFR*                  pTargetRef;                  // 38
		std::int32_t                    iLocation;                   // 3C
		CombatTimer                     HidingTimer;                 // 40
		NiPoint3                        LookAtPosition;              // 48
		bool                            bReservedSecondaryLocation;  // 54
		std::uint8_t                    pad55[0x3];                  // 55
		NiPointer<PathingRequest>       spQueuedPathingRequest;      // 58
		bool                            bHasQueuedPathingRequest;    // 5C
		std::uint8_t                    pad5D[0x3];                  // 5D
		std::int32_t                    iCurrentNode;                // 60
		CombatTimer                     CoveredMoveSearchTimer;      // 64
		CombatTimer                     CheckCoverTimer;             // 6C
		CombatTimer                     CheckDestinationTimer;       // 74
	};
	static_assert(sizeof(CombatProcedureMove) == 0x7C);
}
