#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplaySemiCircle :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplaySemiCircle };
		static constexpr auto VTABLE{ VTABLE::hkDisplaySemiCircle };

		// override (hkDisplayGeometry)
		virtual ~hkDisplaySemiCircle() = default;                                                               // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		// members
		hkVector4    m_normal;       // 60?
		hkVector4    m_perp;         // 70?
		hkVector4    m_center;       // 80?
		float        m_thetaMin;     // 90?
		float        m_thetaMax;     // 94?
		float        m_radius;       // 98?
		std::int32_t m_numSegments;  // 9C?
	};
}
