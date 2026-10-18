#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkKdTreeBuilderSparseWriter
	{
	public:
		// members
		hkVector4    m_writeBuffer[16];  // 00?
		std::int32_t m_index;            // 100?
		std::uint8_t pad104[0xC];        // 104
	};
}
