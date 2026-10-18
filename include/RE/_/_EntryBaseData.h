#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActionType.h"

namespace RE
{
	class _EntryBaseData
	{
	public:
		// members
		std::uint16_t* pwszName;    // 00?
		ActionType     eType;       // 04?
		std::uint16_t* pwszParam;   // 08?
		std::uint16_t* pwszParam2;  // 0C?
		std::uint16_t* pwszParam3;  // 10?
		std::uint16_t* pwszParam4;  // 14?
		std::uint16_t* pwszParam5;  // 18?
		std::uint16_t* pwszParam6;  // 1C?
		std::uint16_t* pwszParam7;  // 20?
	};
}
