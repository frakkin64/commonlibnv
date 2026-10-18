#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class CombatGroup;

	class StartCombatStates
	{
	public:
		StartCombatStates* ctor()
		{
			using func_t = StartCombatStates*(__thiscall*)(StartCombatStates*);
			static REL::Relocation<func_t> func{ Offsets::StartCombatStates::ctor };
			return func(this);
		}

	public:
		// members
		Actor*        pTarget;                  // 00
		CombatGroup*  pGroup;                   // 04
		bool          bMustEntercombat;         // 08
		bool          bSendAlarm;               // 09
		bool          bForceFlee;               // 0A
		bool          bFleeing;                 // 0B
		bool          bIgnoreDefensivePackage;  // 0C
		bool          bSpectatorOfCombat;       // 0D
		std::uint16_t pad0E;                    // 0E
		std::int32_t  iPriority;                // 10
	};
	static_assert(sizeof(StartCombatStates) == 0x14);
}
