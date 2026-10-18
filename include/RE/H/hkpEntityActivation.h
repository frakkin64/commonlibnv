#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpEntityActivation : std::int32_t
	{
		kHK_ENTITY_ACTIVATION_DO_NOT_ACTIVATE = 0x0,
		kHK_ENTITY_ACTIVATION_DO_ACTIVATE = 0x1,
	};
}
