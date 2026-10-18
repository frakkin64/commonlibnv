#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/ScrapHeap.h"

namespace RE
{
	template <class T, class U, std::size_t N>
	class AStarNodeHeap
	{
	public:
		// members
		ScrapHeap Heap;
	};
}
