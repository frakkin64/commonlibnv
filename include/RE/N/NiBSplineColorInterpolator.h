#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBSplineInterpolator.h"
#include "RE/N/NiColorA.h"

namespace RE
{
	class NiBSplineColorInterpolator :
		public NiBSplineInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineColorInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBSplineColorInterpolator };

		// members
		NiColorA      m_kColorAValue;     // 1C
		std::uint32_t m_kColorACPHandle;  // 2C
		std::uint32_t m_kBasisHandle;     // 30?
	};
}
