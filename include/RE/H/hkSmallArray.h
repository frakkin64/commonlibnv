#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class hkSmallArray
	{
	public:
		enum class _unnamed_tag_ : std::int32_t
		{
			kCAPACITY_MASK = 0x3FFFFFFF,
			kFLAG_MASK = -1073741824,
			kDONT_DEALLOCATE_FLAG = -2147483648,
			kFORCE_SIGNED = -1,
		};

		// members
		T* m_data;
		std::uint16_t m_size;
		std::uint16_t m_capacityAndFlags;
	};
}
