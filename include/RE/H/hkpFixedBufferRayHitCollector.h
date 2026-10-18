#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpRayHitCollector.h"

namespace RE
{
	class hkpCdBody;
	class hkpShapeRayCastCollectorOutput;

	class hkpFixedBufferRayHitCollector :
		public hkpRayHitCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpFixedBufferRayHitCollector };
		static constexpr auto VTABLE{ VTABLE::hkpFixedBufferRayHitCollector };

		// override (hkpRayHitCollector)
		virtual void addRayHit(const hkpCdBody* a_arg1, const hkpShapeRayCastCollectorOutput* a_arg2) override;  // 00
		virtual ~hkpFixedBufferRayHitCollector() = default;                                                      // 01

		// members
		// not placed: m_rayCastOutputBase, m_nextFreeOutput, m_capacity, m_numOutputs, m_collidableOnPpu
	};
}
