#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class IDLE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&IDLE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::IDLE_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint8_t  cAnimData;     // 00
		std::uint8_t  cLoopMin;      // 01
		std::uint8_t  cLoopMax;      // 02
		std::uint8_t  pad03;         // 03
		std::uint16_t sReplayDelay;  // 04
		std::uint8_t  cFlagsEx;      // 06
		std::uint8_t  pad07;         // 07
	};
}
