#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class ExpiredCellData
	{
	public:
		// members
		std::int32_t iCellX;  // 00?
		std::int32_t iCellY;  // 04?
	};
}
