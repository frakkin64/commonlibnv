#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESTopicInfo;

	// not confirmed: no named code in the executable refers to this type
	class INFO_LINK_ELEMENT
	{
	public:
		// members
		std::uint32_t nID;            // 00?
		TESTopicInfo* pInfo;          // 04?
		std::int32_t  nDesiredIndex;  // 08?
	};
}
