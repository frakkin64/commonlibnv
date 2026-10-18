#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class ExteriorCellReferenceData
	{
	public:
		// members
		std::uint32_t iFormID;  // 00?
		std::int32_t  iCellX;   // 04?
		std::int32_t  iCellY;   // 08?
	};
}
