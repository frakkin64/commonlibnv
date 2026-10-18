#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiScreenGeometryData_ScreenElement.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTriShapeData.h"

namespace RE
{
	class NiScreenGeometryData :
		public NiTriShapeData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiScreenGeometryData };
		static constexpr auto VTABLE{ VTABLE::NiScreenGeometryData };

		using ScreenElement = NiScreenGeometryData_ScreenElement;

		// members
		bool                                                   m_bPixelAccurate;      // 58
		bool                                                   m_bUnorderedElements;  // 59?
		std::uint16_t                                          pad5A;                 // 5A
		std::uint32_t                                          m_usActiveVerts;       // 5C?
		NiTPrimitiveArray<NiScreenGeometryData_ScreenElement*> m_kScreenElements;     // 60?
	};
}
