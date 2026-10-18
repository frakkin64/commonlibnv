#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemPage
	{
	public:
		// members
		hkMemPage*    m_prev;       // 00?
		hkMemPage*    m_next;       // 04?
		std::int32_t  m_numAllocs;  // 08?
		std::uint32_t m_size;       // 0C?
		char*         m_start;      // 10?
		char*         m_end;        // 14?
	};
}
