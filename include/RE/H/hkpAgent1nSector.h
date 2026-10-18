#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpAgent1nSector
	{
	public:
		// members
		std::uint32_t m_bytesAllocated;  // 00?
		std::uint32_t m_pad0;            // 04?
		std::uint32_t m_pad1;            // 08?
		std::uint32_t m_pad2;            // 0C?
		std::uint8_t  m_data[496];       // 10?
	};
}
