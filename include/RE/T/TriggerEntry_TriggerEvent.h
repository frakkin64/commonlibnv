#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TriggerEntry_TriggerStatus.h"

namespace RE
{
	class TriggerEntry_TriggerEvent
	{
	public:
		// members
		std::uint32_t              RefID;    // 00?
		TriggerEntry_TriggerStatus eStatus;  // 04?
	};
}
