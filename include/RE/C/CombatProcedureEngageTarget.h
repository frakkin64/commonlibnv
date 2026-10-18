#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/C/CombatTimer.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;

	class CombatProcedureEngageTarget :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureEngageTarget };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureEngageTarget };

		enum class ENGAGE_STATE : std::int32_t
		{
			kENGAGE_STATE_INITIALIZING = 0x0,
			kENGAGE_STATE_HOLDING = 0x1,
			kENGAGE_STATE_CROUCHING = 0x2,
			kENGAGE_STATE_MOVING_OPTIMAL_CLOSE = 0x3,
			kENGAGE_STATE_MOVING_OPTIMAL_FAR = 0x4,
			kENGAGE_STATE_APPROACHING_TARGET = 0x5,
			kENGAGE_STATE_DODGING_FORWARD_BACKWARD = 0x6,
			kENGAGE_STATE_DODGING_LEFT_RIGHT = 0x7,
			kENGAGE_STATE_MOVING_TO_TARGET = 0x8,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureEngageTarget() = default;                                                                             // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Shutdown() override;                                                                                             // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureEngageTarget* ctor()
		{
			using func_t = CombatProcedureEngageTarget*(__thiscall*)(CombatProcedureEngageTarget*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureEngageTarget::ctor };
			return func(this);
		}

		bool CanAttackerSneak()
		{
			using func_t = decltype(&CombatProcedureEngageTarget::CanAttackerSneak);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureEngageTarget::CanAttackerSneak };
			return func(this);
		}

		bool CreateOptimalLocationPath(bool abOutsideAbsoluteRange)
		{
			using func_t = decltype(&CombatProcedureEngageTarget::CreateOptimalLocationPath);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureEngageTarget::CreateOptimalLocationPath };
			return func(this, abOutsideAbsoluteRange);
		}

	public:
		// members
		CombatProcedureEngageTarget::ENGAGE_STATE eState;                                  // 10
		float                                     fMinOptimalRange;                        // 14
		float                                     fMaxOptimalRange;                        // 18
		float                                     fAbsoluteMaxRange;                       // 1C
		CombatTimer                               HoldingTimer;                            // 20
		CombatTimer                               LeftRightDodgeLOSTimer;                  // 28
		bool                                      bLeftRightDodgeHadLOS;                   // 30
		bool                                      bLeftRightDodgeCheckLOS;                 // 31
		bool                                      bLeftRightDodgeLostLOS;                  // 32
		char                                      cCheckedOptimalPath;                     // 33
		NiPoint3                                  LeftRightDodgeStartLocation;             // 34
		BGSWorldLocation                          Destination;                             // 40
		BGSWorldLocation                          TargetOptimalWorldLoc;                   // 50
		CombatTimeStamp                           fOptimalLocationPathingFailedTimeStamp;  // 60
	};
	static_assert(sizeof(CombatProcedureEngageTarget) == 0x64);
}
