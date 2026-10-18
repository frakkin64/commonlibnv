#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	template <class T>
	class NiTConvertingStrideIterator
	{
	public:
		// members
		void* m_pvCurrentPosition;
		std::int32_t m_iStride;
		bool m_bCompressed;
	};
}
