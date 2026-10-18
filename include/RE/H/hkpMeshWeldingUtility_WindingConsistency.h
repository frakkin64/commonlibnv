#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpMeshWeldingUtility_WindingConsistency : std::int32_t
	{
		kWINDING_IGNORE_CONSISTENCY = 0x0,
		kWINDING_TEST_CONSISTENCY = 0x1,
	};
}
