#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCdBodyPairCollector.h"

namespace RE
{
	class hkpCdBody;

	class hkpFlagCdBodyPairCollector :
		public hkpCdBodyPairCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpFlagCdBodyPairCollector };
		static constexpr auto VTABLE{ VTABLE::hkpFlagCdBodyPairCollector };

		// override (hkpCdBodyPairCollector)
		virtual ~hkpFlagCdBodyPairCollector() = default;                                        // 00
		virtual void addCdBodyPair(const hkpCdBody* a_arg1, const hkpCdBody* a_arg2) override;  // 01
	};
}
