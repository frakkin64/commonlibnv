#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SaveFormHeader
	{
	public:
		// members
		std::uint32_t iFormID;     // 00
		std::uint8_t  cFormType;   // 04
		std::uint8_t  pad05[0x3];  // 05
		std::uint32_t iFlags;      // 08?
		std::uint8_t  cVersion;    // 0C?
		std::uint8_t  pad0D[0x3];  // 0D
	};
}
