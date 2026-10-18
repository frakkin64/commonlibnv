#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBSplineInterpolator.h"
#include "RE/N/NiQuatTransform.h"

namespace RE
{
	class NiBSplineTransformInterpolator :
		public NiBSplineInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineTransformInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBSplineTransformInterpolator };

		// members
		NiQuatTransform m_kTransformValue;  // 1C
		std::uint32_t   m_kTransCPHandle;   // 3C
		std::uint32_t   m_kRotCPHandle;     // 40
		std::uint32_t   m_kScaleCPHandle;   // 44
	};
}
