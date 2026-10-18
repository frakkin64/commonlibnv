#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveSet.h"

namespace RE
{
	class NiGeometryData_RendererData;
	class NiTexturingProperty;

	class NiScreenTexture :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiScreenTexture };
		static constexpr auto VTABLE{ VTABLE::NiScreenTexture };

		class ScreenRect;

		class ScreenRect
		{
		public:
			// members
			std::int16_t  m_sPixTop;      // 00?
			std::int16_t  m_sPixLeft;     // 02?
			std::uint16_t m_usPixWidth;   // 04?
			std::uint16_t m_usPixHeight;  // 06?
			std::uint16_t m_usTexTop;     // 08?
			std::uint16_t m_usTexLeft;    // 0A?
			NiColorA      m_kColor;       // 0C?
		};

		// members
		NiTPrimitiveSet<NiScreenTexture::ScreenRect> m_kScreenRects;  // 08
		NiPointer<NiTexturingProperty>               m_spTexProp;     // 14
		std::uint16_t                                m_usDirtyFlags;  // 18?
		std::uint16_t                                pad1A;           // 1A
		NiGeometryData_RendererData*                 m_pkBuffData;    // 1C?
	};
}
