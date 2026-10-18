#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContactPoint.h"
#include "RE/H/hkPadSpu.h"

namespace RE
{
	class alignas(16) hkpProcessCdPoint
	{
	public:
		// members
		hkContactPoint          m_contact;         // 00?
		hkPadSpu<std::uint32_t> m_contactPointId;  // 20?
		std::uint8_t            pad24[0xC];        // 24
	};
}
