#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	union UDATA
	{
	public:
		// members
		std::uint32_t i;       // 00
		float         f;       // 00
		void*         p;       // 00
		std::uint8_t  s[0x4];  // 00 opaque: UDATA::<unnamed_type_s>
	};
}
