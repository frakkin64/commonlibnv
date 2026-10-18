#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TESCreatedReferenceType : std::int32_t
	{
		kTES_CREATED_REFERENCE_NORMAL = 0x0,
		kTES_CREATED_REFERENCE_ARROWPROJECTILE = 0x1,
		kTES_CREATED_REFERENCE_MAGICPROJECTILE = 0x2,
		kTES_CREATED_REFERENCE_PERSISTENT = 0x3,
	};
}
