#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatTimer.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class CombatController;

	class CombatMovementRestrictions
	{
	public:
		bool CanMove(std::uint16_t asMoveMode)
		{
			using func_t = decltype(&CombatMovementRestrictions::CanMove);
			static REL::Relocation<func_t> func{ Offsets::CombatMovementRestrictions::CanMove };
			return func(this, asMoveMode);
		}

		std::int32_t CheckMovementRestrictions(Actor* apAttacker, std::int32_t aiWhichDirection)
		{
			using func_t = decltype(&CombatMovementRestrictions::CheckMovementRestrictions);
			static REL::Relocation<func_t> func{ Offsets::CombatMovementRestrictions::CheckMovementRestrictions };
			return func(this, apAttacker, aiWhichDirection);
		}

		bool IsLocationSafe(Actor* apAttacker, NiPoint3& aLocation)
		{
			using func_t = decltype(&CombatMovementRestrictions::IsLocationSafe);
			static REL::Relocation<func_t> func{ Offsets::CombatMovementRestrictions::IsLocationSafe };
			return func(this, apAttacker, aLocation);
		}

		void Update(CombatController* apCombatController)
		{
			using func_t = decltype(&CombatMovementRestrictions::Update);
			static REL::Relocation<func_t> func{ Offsets::CombatMovementRestrictions::Update };
			func(this, apCombatController);
		}

	public:
		// members
		bool          bReset;                // 00
		bool          bInitialized;          // 01
		std::uint16_t pad02;                 // 02
		std::uint32_t cCurrentUpdate;        // 04
		std::uint16_t sRestrictedMoves;      // 08
		bool          bHasMoveLeftAnim;      // 0A
		bool          bHasMoveRightAnim;     // 0B
		bool          bHasMoveForwardAnim;   // 0C
		bool          bHasMoveBackwardAnim;  // 0D
		std::uint16_t pad0E;                 // 0E
		NiPoint3      Location;              // 10
		CombatTimer   UpdateTimer;           // 1C
	};
}
