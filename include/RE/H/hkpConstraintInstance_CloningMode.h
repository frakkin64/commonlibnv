#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpConstraintInstance_CloningMode : std::int32_t
	{
		kCLONE_INSTANCES_ONLY = 0x0,
		kCLONE_DATAS_WITH_MOTORS = 0x1,
		kCLONE_FORCE_SHALLOW = 0x2,
	};
}
