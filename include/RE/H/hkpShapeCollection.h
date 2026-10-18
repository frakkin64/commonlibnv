#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpShape.h"
#include "RE/H/hkpShapeContainer.h"
#include "RE/H/hkpWeldingUtility_WeldingType.h"

namespace RE
{
	class hkpShapeCollection :
		public hkpShape,  // 00
		public hkpShapeContainer  // 10
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapeCollection };
		static constexpr auto VTABLE{ VTABLE::hkpShapeCollection };

		// override (hkpShape)
		virtual ~hkpShapeCollection() = default;  // 00

		// add
		virtual void initWeldingInfo(hkpWeldingUtility_WeldingType weldingType);   // 0B
		virtual void setWeldingInfo(std::uint32_t key, std::int16_t weldingInfo);  // 0C

		// members
		// not placed: m_collectionType(misaligned)
		hkBool       m_disableWelding;  // 14
		std::uint8_t pad15[0x3];        // 15
	};
	static_assert(sizeof(hkpShapeCollection) == 0x18);
}
