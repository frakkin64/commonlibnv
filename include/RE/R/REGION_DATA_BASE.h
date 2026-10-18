#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/REGION_DATA_ID.h"

namespace RE
{
	class REGION_DATA_BASE
	{
	public:
		// members
		REGION_DATA_ID iDataTypeID;  // 00
		bool           bOverride;    // 04
		std::uint8_t   cPriority;    // 05?
		std::uint16_t  pad06;        // 06
	};
}
