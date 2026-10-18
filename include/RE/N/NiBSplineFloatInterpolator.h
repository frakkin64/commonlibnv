#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBSplineInterpolator.h"

namespace RE
{
	class NiBSplineFloatInterpolator :
		public NiBSplineInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineFloatInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBSplineFloatInterpolator };

		// members
		float         m_fFloatValue;     // 1C
		std::uint32_t m_kFloatCPHandle;  // 20
	};
}
