#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CellInitialData
	{
	public:
		// members
		std::uint32_t iWorldSpaceID;  // 00
		std::int32_t  iCellX;         // 04
		std::int32_t  iCellY;         // 08
		std::int32_t  iDetachTime;    // 0C
	};
}
