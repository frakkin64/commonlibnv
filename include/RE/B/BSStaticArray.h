#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class BSStaticArray
	{
	public:
		enum class _unnamed_tag_ : std::int32_t
		{
			kBSSTATIC_ARRAY_ALIGN = 0x10,
		};

		// members
		T* pElements;
		std::uint32_t uiNumElements;
	};
}
