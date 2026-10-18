#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;

	class OBJ_WEAP_VATS_SPECIAL
	{
	public:
		// members
		SpellItem*   pVATSSpecialEffect;      // 00
		float        fVATSSpecialAP;          // 04
		float        fVATSSpecialMultiplier;  // 08
		float        fVATSSkillRequired;      // 0C
		bool         bSilent;                 // 10
		bool         bModRequired;            // 11
		std::uint8_t cFlags;                  // 12
		std::uint8_t pad13;                   // 13
	};
	static_assert(sizeof(OBJ_WEAP_VATS_SPECIAL) == 0x14);
}
