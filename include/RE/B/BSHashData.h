#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSHashData
	{
	public:
		// members
		std::uint8_t  cLast;       // 00
		std::uint8_t  cLast2;      // 01?
		std::uint8_t  cLength;     // 02?
		std::uint8_t  cFirst;      // 03?
		std::uint32_t iCRC;        // 04?
		std::uint8_t  cXLast;      // 08?
		std::uint8_t  cXLast2;     // 09?
		std::uint8_t  cXLength;    // 0A?
		std::uint8_t  cXFirst;     // 0B?
		std::uint32_t iXCRC;       // 0C?
		std::uint8_t  cDirLast;    // 10?
		std::uint8_t  cDirLast2;   // 11?
		std::uint8_t  cDirLength;  // 12?
		std::uint8_t  cDirFirst;   // 13?
		std::uint32_t iDirCRC;     // 14?
	};
}
