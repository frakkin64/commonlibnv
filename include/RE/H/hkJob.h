#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkJob
	{
	public:
		// members
		// not placed: m_jobType(misaligned), m_jobSpuType(misaligned)
		std::uint8_t  m_jobSubType;      // 00
		std::uint8_t  pad01[0x3];        // 01
		std::uint16_t m_size;            // 04
		std::int16_t  m_threadAffinity;  // 06?
	};
}
