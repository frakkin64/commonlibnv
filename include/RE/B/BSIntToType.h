#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	template <std::size_t N>
	class BSIntToType
	{
	public:
		enum class _unnamed_tag_ : std::int32_t
		{
			kSymbol = 0x24,
			kSign = 0x2B,
			kSpace = 0x20,
			kValue = 0x76,
			kNone = 0x78,
		};

	};
}
