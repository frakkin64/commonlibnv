#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CHALLENGE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&CHALLENGE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::CHALLENGE_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::int32_t  nChallengeType;     // 00
		std::int32_t  iThreshold;         // 04
		std::uint16_t nFlags;             // 08
		std::uint16_t pad0A;              // 0A
		std::int32_t  iInterval;          // 0C
		std::uint16_t nSpecialDataOne;    // 10
		std::uint16_t nSpecialDataTwo;    // 12
		std::uint16_t nSpecialDataThree;  // 14
		std::uint16_t pad16;              // 16
	};
	static_assert(sizeof(CHALLENGE_DATA) == 0x18);
}
