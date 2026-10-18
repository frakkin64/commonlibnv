#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCdPointCollector.h"

namespace RE
{
	class hkpCdPoint;

	class hkpSymmetricAgentFlipCollector :
		public hkpCdPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSymmetricAgentFlipCollector };
		static constexpr auto VTABLE{ VTABLE::hkpSymmetricAgentFlipCollector };

		// override (hkpCdPointCollector)
		virtual ~hkpSymmetricAgentFlipCollector() = default;         // 00
		virtual void addCdPoint(const hkpCdPoint* a_arg1) override;  // 01

		// members
		hkpCdPointCollector* m_collector;  // 08?
	};
}
