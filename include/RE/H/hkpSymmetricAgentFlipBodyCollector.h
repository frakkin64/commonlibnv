#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCdBodyPairCollector.h"

namespace RE
{
	class hkpCdBody;

	class hkpSymmetricAgentFlipBodyCollector :
		public hkpCdBodyPairCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSymmetricAgentFlipBodyCollector };
		static constexpr auto VTABLE{ VTABLE::hkpSymmetricAgentFlipBodyCollector };

		// override (hkpCdBodyPairCollector)
		virtual ~hkpSymmetricAgentFlipBodyCollector() = default;                                // 00
		virtual void addCdBodyPair(const hkpCdBody* a_arg1, const hkpCdBody* a_arg2) override;  // 01

		// members
		hkpCdBodyPairCollector* m_collector;  // 08?
	};
}
