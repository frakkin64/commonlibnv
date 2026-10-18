#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
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

	class alignas(16) hkCpuWorldLinearCastCollector :
		public hkpBroadPhaseCastCollector,  // 00
		public hkKdTreeCastCollector,  // 04
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint16_t>::Collector,  // 08
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb16, std::uint16_t>::Collector  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkCpuWorldLinearCastCollector };
		static constexpr auto VTABLE{ VTABLE::hkCpuWorldLinearCastCollector };

		// override (hkpBroadPhaseCastCollector)
		virtual ~hkCpuWorldLinearCastCollector() = default;                                                  // 00
		virtual float addBroadPhaseHandle(const hkpBroadPhaseHandle* a_arg1, std::int32_t a_arg2) override;  // 01

		// members
		const hkpGroupFilter*           m_filter;         // 10?
		hkpFixedBufferCdPointCollector* m_castCollector;  // 14?
		const hkpCollidable*            m_collidable;     // 18?
		hkpShapeType                    m_shapeType;      // 1C?
		hkpLinearCastCollisionInput     m_input;          // 20?
	};
}
