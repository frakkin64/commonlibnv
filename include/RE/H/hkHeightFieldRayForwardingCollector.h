#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpRayHitCollector.h"

namespace RE
{
	class hkpCdBody;
	class hkpShapeRayCastCollectorOutput;

	class alignas(16) hkHeightFieldRayForwardingCollector :
		public hkpRayHitCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkHeightFieldRayForwardingCollector };
		static constexpr auto VTABLE{ VTABLE::hkHeightFieldRayForwardingCollector };

		// override (hkpRayHitCollector)
		virtual void addRayHit(const hkpCdBody* a_arg1, const hkpShapeRayCastCollectorOutput* a_arg2) override;  // 00
		virtual ~hkHeightFieldRayForwardingCollector() = default;                                                // 01

		// members
		// not placed: m_currentFrom, m_currentRadius, m_path, m_csBody, m_collector
	};
}
