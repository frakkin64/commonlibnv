#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;

	class OBJ_WEAP_CRITICAL
	{
	public:
		// members
		std::uint16_t sCriticalDamage;      // 00
		std::uint16_t pad02;                // 02
		float         fCriticalChanceMult;  // 04
		bool          bEffectOnDeath;       // 08
		std::uint8_t  pad09[0x3];           // 09
		SpellItem*    pEffect;              // 0C
	};
	static_assert(sizeof(OBJ_WEAP_CRITICAL) == 0x10);
}
