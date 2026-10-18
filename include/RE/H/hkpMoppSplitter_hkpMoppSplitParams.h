#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkpMoppSplitter_hkpMoppSplitParams
	{
	public:
		// members
		float        m_tolerance;                   // 00?
		std::int32_t m_maxPrimitiveSplits;          // 04?
		std::int32_t m_maxPrimitiveSplitsPerNode;   // 08?
		std::int32_t m_minRangeMaxListCheck;        // 0C?
		std::int32_t m_checkAllEveryN;              // 10?
		hkBool       m_interleavedBuildingEnabled;  // 14?
		std::uint8_t pad15[0x3];                    // 15
	};
}
