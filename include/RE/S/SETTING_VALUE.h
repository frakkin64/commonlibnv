#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	union SETTING_VALUE
	{
	public:
		// members
		const char*   str;  // 00
		std::int32_t  i;    // 00
		std::uint32_t u;    // 00
		float         f;    // 00
		bool          b;    // 00
		char          c;    // 00
		std::uint8_t  h;    // 00
	};
}
