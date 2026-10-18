#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FILE_HEADER
	{
	public:
		// members
		float         fVersion;     // 00
		std::uint32_t iFormCount;   // 04
		std::uint32_t iNextFormID;  // 08
	};
	static_assert(sizeof(FILE_HEADER) == 0xC);
}
