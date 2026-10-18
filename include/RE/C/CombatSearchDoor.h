#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;

	class CombatSearchDoor
	{
	public:
		// members
		TESObjectREFR* pDoor;            // 00?
		TESObjectREFR* pLinkedDoor;      // 04?
		std::uint8_t   cFailedAttempts;  // 08?
		bool           bInvestigated;    // 09
		bool           bReserved;        // 0A
		std::uint8_t   pad0B;            // 0B
	};
}
