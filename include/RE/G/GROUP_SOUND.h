#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESSound;

	// not confirmed: no named code in the executable refers to this type
	class GROUP_SOUND
	{
	public:
		// members
		float        fTime;       // 00?
		union
		{
			std::uint8_t cVolume;
			std::uint8_t eType;
		} ___u1;  // 04?
		std::uint8_t pad05[0x3];  // 05
		union
		{
			float fPitch;
			std::uint32_t iEnumData;
		} ___u2;  // 08?
		TESSound*    pSound;      // 0C?
	};
}
