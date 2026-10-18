#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkpMoppKDopQuery
	{
	public:
		// members
		hkBool        m_earlyExit;       // 00?
		std::uint8_t  pad01[0x3];        // 01
		std::int32_t  m_kdopDepth;       // 04?
		hkBool        m_useSpecifiedID;  // 08?
		std::uint8_t  pad09[0x3];        // 09
		std::uint32_t m_specifiedId;     // 0C?
	};
}
