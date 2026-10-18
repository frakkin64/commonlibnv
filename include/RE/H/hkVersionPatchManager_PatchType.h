#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkVersionPatchManager_PatchType : std::int32_t
	{
		kPATCH_INVALID = 0x0,
		kPATCH_MEMBER_ADDED = 0x1,
		kPATCH_MEMBER_REMOVED = 0x2,
		kPATCH_MEMBER_RENAMED = 0x3,
		kPATCH_FUNCTION = 0x4,
		kPATCH_CAST = 0x5,
		kPATCH_DEPENDS = 0x6,
		kPATCH_PARENT_SET = 0x7,
		kPATCH_END = 0x8,
	};
}
