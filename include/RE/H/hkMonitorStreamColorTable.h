#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkColor_ExtendedColors.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMonitorStreamColorTable :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMonitorStreamColorTable };
		static constexpr auto VTABLE{ VTABLE::hkMonitorStreamColorTable };

		class ColorPair;

		class ColorPair
		{
		public:
			// members
			hkStringPtr                                   m_colorName;  // 00?
			hkEnum<hkColor_ExtendedColors, std::uint32_t> m_color;      // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkMonitorStreamColorTable() = default;  // 00

		// members
		hkArray<hkMonitorStreamColorTable::ColorPair, hkContainerHeapAllocator> m_colorPairs;    // 08?
		std::uint32_t                                                           m_defaultColor;  // 14?
	};
}
