#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;
	class TESSound;

	class AlchemyItemData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&AlchemyItemData::Endian);
			static REL::Relocation<func_t> func{ Offsets::AlchemyItemData::Endian };
			func(this);
		}

	public:
		// members
		std::int32_t iCostOverride;      // 00
		std::uint8_t iFlags;             // 04
		std::uint8_t pad05[0x3];         // 05
		SpellItem*   pAddictionItem;     // 08
		float        fAddictionChance;   // 0C
		TESSound*    pConsumptionSound;  // 10
	};
}
