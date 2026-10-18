#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkp26Dop.h"

namespace RE
{
	class hkpMoppInfo
	{
	public:
		// members
		hkp26Dop      m_dop;         // 00?
		std::uint32_t m_shapeKey;    // 68?
		char          m_level;       // 6C?
		hkBool        m_isTerminal;  // 6D?
		std::uint16_t pad6E;         // 6E
	};
}
