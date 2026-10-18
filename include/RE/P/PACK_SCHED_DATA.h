#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PACK_SCHED_DATA
	{
	public:
		// members
		char         eMonth;      // 00?
		char         eDayOfWeek;  // 01
		char         cDate;       // 02
		char         cTime;       // 03
		std::int32_t iDuration;   // 04?
	};
}
