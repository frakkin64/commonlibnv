#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkAabbUint32
	{
	public:
		// members
		std::uint32_t m_min[3];           // 00?
		std::uint8_t  m_expansionMin[3];  // 0C?
		std::uint8_t  m_expansionShift;   // 0F?
		std::uint32_t m_max[3];           // 10?
		std::uint8_t  m_expansionMax[3];  // 1C?
		std::uint8_t  m_shapeKeyByte;     // 1F?
	};
}
