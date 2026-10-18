#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkStopwatch
	{
	public:
		// members
		std::uint64_t m_ticks_at_start;  // 00?
		std::uint64_t m_ticks_total;     // 08?
		std::uint64_t m_ticks_at_split;  // 10?
		std::uint64_t m_split_total;     // 18?
		hkBool        m_running_flag;    // 20?
		std::uint8_t  pad21[0x3];        // 21
		std::int32_t  m_num_timings;     // 24?
		const char*   m_name;            // 28?
		std::uint32_t pad2C;             // 2C
	};
}
