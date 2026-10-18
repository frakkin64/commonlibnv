#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFreeMemChunk.h"

namespace RE
{
	class hkMemTreeChunk :
		public hkFreeMemChunk  // 00
	{
	public:
		// members
		hkMemTreeChunk* child[2];  // 10?
		hkMemTreeChunk* parent;    // 18?
		std::uint32_t   index;     // 1C?
	};
}
