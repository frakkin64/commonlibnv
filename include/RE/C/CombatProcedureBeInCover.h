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
	class Projectile;

	class CombatProcedureBeInCover :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureBeInCover };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureBeInCover };

		enum class COVER_STATE : std::int32_t
		{
			kCOVER_STATE_INITIALIZING = 0x0,
			kCOVER_STATE_WAITING_BEHIND_COVER = 0x1,
			kCOVER_STATE_MOVING_OUT = 0x2,
			kCOVER_STATE_WAITING_OUT_OF_COVER = 0x3,
			kCOVER_STATE_FIRING_OUT_OF_COVER = 0x4,
			kCOVER_STATE_MOVING_IN = 0x5,
			kCOVER_STATE_MOVING_IN_AND_ROTATE = 0x6,
			kCOVER_STATE_HOLDING_GROUND = 0x7,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureBeInCover() = default;                                                                                // 00
		virtual void Update() override;                                                                                               // 01
		virtual void Shutdown() override;                                                                                             // 03
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify) override;  // 05
		virtual void FiredProjectile(Projectile* apProjectile) override;                                                              // 08
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;                                                                 // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                          // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                          // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                      // 10

		CombatProcedureBeInCover* ctor(CombatCoverLocation* apCombatCoverLocation)
		{
			using func_t = CombatProcedureBeInCover*(__thiscall*)(CombatProcedureBeInCover*, CombatCoverLocation*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureBeInCover::ctor };
			return func(this, apCombatCoverLocation);
		}

	public:
		// members
		CombatProcedureBeInCover::COVER_STATE eState;                  // 10
		CombatCoverLocation*                  pCoverLocation;          // 14
		NiPoint3                              CurrentCoverPosition;    // 18
		NiPoint3                              CurrentFirePosition;     // 24
		NiPoint3                              LookAtPosition;          // 30
		CombatTimer                           WaitBehindCoverTimer;    // 3C
		CombatTimer                           WaitingOutOfCoverTimer;  // 44
		CombatTimer                           FiringOutOfCoverTimer;   // 4C
		CombatTimer                           ReevaluateCoverTimer;    // 54
		CombatTimer                           HoldingGroundTimer;      // 5C
		CombatTimer                           TargetBlockedTimer;      // 64
	};
	static_assert(sizeof(CombatProcedureBeInCover) == 0x6C);
}
