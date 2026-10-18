#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContactPoint.h"

namespace RE
{
	class hkpCdBody;

	class alignas(16) hkpCdPoint
	{
	public:
		// members
		hkContactPoint   m_contact;   // 00?
		const hkpCdBody* m_cdBodyA;   // 20?
		const hkpCdBody* m_cdBodyB;   // 24?
		std::uint8_t     pad28[0x8];  // 28
	};
}
