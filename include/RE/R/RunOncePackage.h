#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESPackage;

	// not confirmed: no named code in the executable refers to this type
	class RunOncePackage
	{
	public:
		// members
		TESPackage*  pPackage;    // 00?
		char         cday;        // 04?
		std::uint8_t pad05[0x3];  // 05
	};
}
