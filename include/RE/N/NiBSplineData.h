#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiBSplineData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineData };
		static constexpr auto VTABLE{ VTABLE::NiBSplineData };

		// members
		float*        m_pafControlPoints;            // 08
		std::int16_t* m_pasCompactControlPoints;     // 0C
		std::uint32_t m_uiControlPointCount;         // 10
		std::uint32_t m_uiCompactControlPointCount;  // 14
	};
}
