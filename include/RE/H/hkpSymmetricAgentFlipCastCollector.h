#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpCdPointCollector.h"

namespace RE
{
	class hkpCdPoint;

	class alignas(16) hkpSymmetricAgentFlipCastCollector :
		public hkpCdPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSymmetricAgentFlipCastCollector };
		static constexpr auto VTABLE{ VTABLE::hkpSymmetricAgentFlipCastCollector };

		// override (hkpCdPointCollector)
		virtual ~hkpSymmetricAgentFlipCastCollector() = default;     // 00
		virtual void addCdPoint(const hkpCdPoint* a_arg1) override;  // 01

		// members
		std::uint8_t         pad08[0x8];   // 08
		hkVector4            m_path;       // 10?
		hkpCdPointCollector* m_collector;  // 20?
		std::uint8_t         pad24[0xC];   // 24
	};
}
