#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataClass_Cinfo_Member.h"

namespace RE
{
	class hkDataClass_Cinfo
	{
	public:
		using Member = hkDataClass_Cinfo_Member;

		// members
		const char*                                                 name;     // 00?
		std::int32_t                                                version;  // 04?
		const char*                                                 parent;   // 08?
		hkArray<hkDataClass_Cinfo_Member, hkContainerHeapAllocator> members;  // 0C?
	};
}
