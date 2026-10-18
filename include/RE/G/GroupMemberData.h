#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;

	class GroupMemberData
	{
	public:
		// members
		Actor*        pActor;  // 00
		std::uint32_t iIndex;  // 04
	};
}
