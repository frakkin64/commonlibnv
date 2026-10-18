#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMemChunk.h"

namespace RE
{
	class hkFreeMemChunk :
		public hkMemChunk  // 00
	{
	public:
		// members
		hkFreeMemChunk* next;  // 08?
		hkFreeMemChunk* prev;  // 0C?
	};
}
