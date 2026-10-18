#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N>
	// not confirmed: no named code in the executable refers to this type
	class Stack
	{
	public:
		enum class _unnamed_tag_ : std::int32_t
		{
			kFullStack = 0x40,
			kEmptyStack = -1,
		};

		// members
		T items[N];
		std::int32_t top;
	};
}
