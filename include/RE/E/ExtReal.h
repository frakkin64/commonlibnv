#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/EXT_REAL_CODE.h"

namespace RE
{
	class ExtReal
	{
	public:
		// members
		float         value;  // 00?
		EXT_REAL_CODE c;      // 04
	};
}
