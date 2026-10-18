#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSHash.h"

namespace RE
{
	class BSFileEntry :
		public BSHash  // 00
	{
	public:
		// members
		std::uint32_t iSize;    // 08?
		std::uint32_t iOffset;  // 0C?
	};
}
