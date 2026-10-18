#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class QUEST_OBJECTIVE_STATE : std::int32_t
	{
		kQOS_DORMANT = 0x0,
		kQOS_DISPLAYED = 0x1,
		kQOS_COMPLETED = 0x2,
		kQOS_COMPLETED_DISPLAYED = 0x3,
	};
}
