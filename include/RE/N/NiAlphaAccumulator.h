#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBackToFrontAccumulator.h"

namespace RE
{
	class NiAlphaAccumulator :
		public NiBackToFrontAccumulator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAlphaAccumulator };
		static constexpr auto VTABLE{ VTABLE::NiAlphaAccumulator };

		// members
		bool         m_bObserveNoSortHint;   // 30
		bool         m_bSortByClosestPoint;  // 31
		bool         m_bInterfaceSort;       // 32
		std::uint8_t pad33;                  // 33
	};
}
