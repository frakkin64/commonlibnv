#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PERK_ENTRY_TYPE : std::int32_t
	{
		kPERK_ENTRY_TYPE_QUEST = 0x0,
		kPERK_ENTRY_TYPE_ABILITY = 0x1,
		kPERK_ENTRY_TYPE_ENTRY_POINT = 0x2,
		kPERK_ENTRY_TYPE_COUNT = 0x3,
	};
}
