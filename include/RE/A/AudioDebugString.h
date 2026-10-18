#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class AudioDebugString
	{
	public:
		// members
		std::uint32_t iSoundID;  // 00?
		char*         pString;   // 04?
	};
}
