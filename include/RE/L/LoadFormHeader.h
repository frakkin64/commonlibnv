#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class LoadFormHeader
	{
	public:
		// members
		// not placed: iFlags(misaligned)
		std::uint32_t iFormID;     // 00
		std::uint8_t  cFormType;   // 04
		std::uint8_t  pad05[0x4];  // 05
		std::uint8_t  cVersion;    // 09?
		std::uint16_t iSize;       // 0A?
	};
}
