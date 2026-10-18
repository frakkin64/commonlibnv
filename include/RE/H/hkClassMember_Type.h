#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkClassMember_Type : std::int32_t
	{
		kTYPE_SIMPLE_CONSTRAINT_CONTACT_MGR = 0x0,
		kTYPE_REPORT_CONTACT_MGR = 0x1,
		kTYPE_CONVEX_LIST_CONTACT_MGR = 0x2,
		kTYPE_NULL_CONTACT_MGR = 0x3,
		kTYPE_USER_CONTACT_MGR = 0x4,
		kTYPE_MAX = 0x5,
	};
}
