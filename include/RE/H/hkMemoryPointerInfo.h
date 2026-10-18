#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemoryPointerInfo
	{
	public:
		// members
		std::int32_t  m_numBytes;         // 00?
		std::uint32_t m_stackTraces[16];  // 04?
		std::int32_t  m_numStackTrace;    // 44?
	};
}
