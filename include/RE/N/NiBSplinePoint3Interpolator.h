#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBSplineInterpolator.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiBSplinePoint3Interpolator :
		public NiBSplineInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplinePoint3Interpolator };
		static constexpr auto VTABLE{ VTABLE::NiBSplinePoint3Interpolator };

		// members
		NiPoint3      m_kPoint3Value;     // 1C
		std::uint32_t m_kPoint3CPHandle;  // 28
	};
}
