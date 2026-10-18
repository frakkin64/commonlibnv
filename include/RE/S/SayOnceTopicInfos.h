#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESTopicInfo;

	class SayOnceTopicInfos
	{
	public:
		// members
		TESTopicInfo* pInfo;       // 00?
		std::int32_t  iDateStamp;  // 04?
		float         fHourStamp;  // 08?
	};
}
