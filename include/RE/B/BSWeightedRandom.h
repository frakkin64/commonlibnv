#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSWeightedRandom
	{
	public:
		// members
		BSSimpleArray<T, 1024> Results;
		BSSimpleArray<std::uint32_t, 1024> Weights;
		std::int32_t iTotalWeight;
	};
}
