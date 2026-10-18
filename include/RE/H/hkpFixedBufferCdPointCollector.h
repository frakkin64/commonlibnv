#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkpCdPointCollector.h"

namespace RE
{
	class hkpCdPoint;
	class hkpRootCdPoint;

	class hkpFixedBufferCdPointCollector :
		public hkpCdPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpFixedBufferCdPointCollector };
		static constexpr auto VTABLE{ VTABLE::hkpFixedBufferCdPointCollector };

		// override (hkpCdPointCollector)
		virtual ~hkpFixedBufferCdPointCollector() = default;         // 00
		virtual void addCdPoint(const hkpCdPoint* a_arg1) override;  // 01

		// members
		hkPadSpu<hkpRootCdPoint*> m_pointsArrayBase;  // 08?
		hkPadSpu<hkpRootCdPoint*> m_nextFreePoint;    // 0C?
		hkPadSpu<std::int32_t>    m_capacity;         // 10?
		hkPadSpu<std::int32_t>    m_numPoints;        // 14?
	};
}
