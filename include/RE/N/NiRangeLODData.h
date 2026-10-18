#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiLODData.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiRangeLODData :
		public NiLODData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRangeLODData };
		static constexpr auto VTABLE{ VTABLE::NiRangeLODData };

		class Range;

		class Range
		{
		public:
			// members
			float m_fNear;       // 00?
			float m_fFar;        // 04?
			float m_fWorldNear;  // 08?
			float m_fWorldFar;   // 0C?
		};

		// members
		NiPoint3               m_kCenter;       // 08
		NiPoint3               m_kWorldCenter;  // 14
		std::uint32_t          m_uiNumRanges;   // 20
		NiRangeLODData::Range* m_pkRanges;      // 24
	};
}
