#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectWEAP;

	// not confirmed: no named code in the executable refers to this type
	class WeaponData
	{
	public:
		// members
		TESObjectWEAP* pWeapon;            // 00?
		float          fCondition;         // 04?
		float          fDamagePerSecond;   // 08?
		float          fAbsoluteMaxRange;  // 0C?
		bool           bInRange;           // 10?
		std::uint8_t   pad11[0x3];         // 11
	};
}
