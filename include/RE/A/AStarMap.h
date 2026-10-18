#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class AStarMap
	{
	public:
		// members
		T* Buckets[2039];
		std::uint32_t iCount;
	};
}
