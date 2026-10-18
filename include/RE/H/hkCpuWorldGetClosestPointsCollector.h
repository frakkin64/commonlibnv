#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTreeData_hkAabbTreeAabb16.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkKdTreeCastCollector.h"
#include "RE/H/hkpBroadPhaseCastCollector.h"
#include "RE/H/hkpLinearCastCollisionInput.h"
#include "RE/H/hkpShapeType.h"

namespace RE
{
	class hkpBroadPhaseHandle;
	class hkpCollidable;
	class hkpFixedBufferCdPointCollector;
	class hkpGroupFilter;

	class alignas(16) hkCpuWorldGetClosestPointsCollector :
		public hkpBroadPhaseCastCollector,  // 00
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb16, std::uint16_t>::Collector,  // 04
		public hkKdTreeCastCollector  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkCpuWorldGetClosestPointsCollector };
		static constexpr auto VTABLE{ VTABLE::hkCpuWorldGetClosestPointsCollector };

		// override (hkpBroadPhaseCastCollector)
		virtual ~hkCpuWorldGetClosestPointsCollector() = default;                                            // 00
		virtual float addBroadPhaseHandle(const hkpBroadPhaseHandle* a_arg1, std::int32_t a_arg2) override;  // 01

		// members
		const hkpGroupFilter*           m_filter;         // 0C?
		hkpFixedBufferCdPointCollector* m_castCollector;  // 10?
		const hkpCollidable*            m_collidable;     // 14?
		hkpShapeType                    m_shapeType;      // 18?
		std::uint32_t                   pad1C;            // 1C
		hkpLinearCastCollisionInput     m_input;          // 20?
	};
}
