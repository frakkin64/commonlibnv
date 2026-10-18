#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSHash
	{
	public:
		// members
		std::uint8_t  cLast;    // 00?
		std::uint8_t  cLast2;   // 01?
		std::uint8_t  cLength;  // 02?
		std::uint8_t  cFirst;   // 03?
		std::uint32_t iCRC;     // 04?
	};
}
