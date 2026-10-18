#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class EntryPointPerkEntryData
	{
	public:
		// members
		std::uint8_t cEntryPoint;     // 00
		std::uint8_t cFunction;       // 01
		std::uint8_t cNumConditions;  // 02
	};
	static_assert(sizeof(EntryPointPerkEntryData) == 0x3);
}
