#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplayCylinder :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayCylinder };
		static constexpr auto VTABLE{ VTABLE::hkDisplayCylinder };

		// override (hkDisplayGeometry)
		virtual ~hkDisplayCylinder() = default;                                                                 // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		// members
		hkVector4     m_top;                // 60?
		hkVector4     m_bottom;             // 70?
		float         m_radius;             // 80?
		std::int32_t  m_numSides;           // 84?
		std::int32_t  m_numHeightSegments;  // 88?
		std::uint32_t pad8C;                // 8C
	};
}
