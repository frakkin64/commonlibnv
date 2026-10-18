#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkgpMesh_Location_Region_eType : std::int32_t
	{
		kNONE = 0x0,
		kONE_VALUE = 0x1,
		kTWO_VALUE = 0x2,
		kLEVELED_LIST = 0x3,
		kACTIVATE_CHOICE = 0x4,
	};
}
