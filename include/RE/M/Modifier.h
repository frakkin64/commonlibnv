#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Modifier
	{
	public:
		// members
		char         cKey;        // 00
		std::uint8_t pad01[0x3];  // 01
		float        fValue;      // 04
	};
}
