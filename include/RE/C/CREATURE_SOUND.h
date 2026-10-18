#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESSound;

	// not confirmed: no named code in the executable refers to this type
	class CREATURE_SOUND
	{
	public:
		// members
		TESSound*    pSound;      // 00?
		std::uint8_t iChance;     // 04?
		std::uint8_t pad05[0x3];  // 05
	};
}
