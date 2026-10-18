#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MagicSystem_SpellType.h"
#include "RE/S/SkillLevel_Value.h"

namespace RE
{
	class SpellItemData
	{
	public:
		// members
		MagicSystem_SpellType iSpellType;      // 00
		std::int32_t          iCostOverride;   // 04
		SkillLevel_Value      eLevelOverride;  // 08
		std::uint8_t          iFlags;          // 0C
		std::uint8_t          pad0D[0x3];      // 0D
	};
}
