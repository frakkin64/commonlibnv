#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESForm;

	// not confirmed: no named code in the executable refers to this type
	class FormAndFlags
	{
	public:
		// members
		TESForm*      pForm;       // 00?
		std::uint32_t iFlags;      // 04?
		std::uint32_t iOldFlags;   // 08?
		std::uint8_t  cVersion;    // 0C?
		std::uint8_t  pad0D[0x3];  // 0D
	};
}
