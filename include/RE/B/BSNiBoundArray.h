#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSABound.h"
#include "RE/B/BSStaticArray.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSNiBoundArray
	{
	public:
		// members
		std::uint32_t           iFlags;       // 00?
		std::uint32_t           iMaxLevel;    // 04?
		BSStaticArray<BSABound> pBoundArray;  // 08?
	};
}
