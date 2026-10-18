#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TriggerEntry_RefList_RefStatus
	{
	public:
		// members
		std::uint32_t RefID;           // 00?
		bool          bInsideTrigger;  // 04?
		std::uint8_t  pad05[0x3];      // 05
	};
}
