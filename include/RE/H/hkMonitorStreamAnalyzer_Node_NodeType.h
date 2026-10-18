#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkMonitorStreamAnalyzer_Node_NodeType : std::int32_t
	{
		kNODE_TYPE_TIMER = 0x0,
		kNODE_TYPE_DIRECTORY = 0x1,
		kNODE_TYPE_SINGLE = 0x2,
	};
}
