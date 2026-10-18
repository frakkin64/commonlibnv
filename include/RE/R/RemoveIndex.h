#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class RemoveIndex
	{
	public:
		// members
		std::uint32_t iMasterIndex;  // 00
		std::uint32_t iMinorIndex;   // 04
	};
	static_assert(sizeof(RemoveIndex) == 0x8);
}
