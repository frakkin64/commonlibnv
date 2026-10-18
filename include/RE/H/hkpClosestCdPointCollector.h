#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCdPointCollector.h"
#include "RE/H/hkpRootCdPoint.h"

namespace RE
{
	class hkpCdPoint;

	class alignas(16) hkpClosestCdPointCollector :
		public hkpCdPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpClosestCdPointCollector };
		static constexpr auto VTABLE{ VTABLE::hkpClosestCdPointCollector };

		// override (hkpCdPointCollector)
		virtual ~hkpClosestCdPointCollector() = default;             // 00
		virtual void addCdPoint(const hkpCdPoint* a_arg1) override;  // 01
		virtual void reset() override;                               // 02

		// members
		std::uint8_t   pad08[0x8];  // 08
		hkpRootCdPoint m_hitPoint;  // 10
	};
}
