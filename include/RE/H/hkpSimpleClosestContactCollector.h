#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkContactPoint.h"
#include "RE/H/hkpCdPointCollector.h"

namespace RE
{
	class hkpCdPoint;

	class alignas(16) hkpSimpleClosestContactCollector :
		public hkpCdPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimpleClosestContactCollector };
		static constexpr auto VTABLE{ VTABLE::hkpSimpleClosestContactCollector };

		// override (hkpCdPointCollector)
		virtual ~hkpSimpleClosestContactCollector() = default;       // 00
		virtual void addCdPoint(const hkpCdPoint* a_arg1) override;  // 01
		virtual void reset() override;                               // 02

		// members
		hkBool         m_hasHit;    // 08
		std::uint8_t   pad09[0x7];  // 09
		hkContactPoint m_hitPoint;  // 10?
	};
}
