#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/R/ReferenceData.h"

namespace RE
{
	class MovedReferenceData
	{
	public:
		// members
		std::uint32_t iOriginalLocationID;  // 00
		NiPoint3      OriginalLoc;          // 04?
		ReferenceData RefData;              // 10?
	};
}
