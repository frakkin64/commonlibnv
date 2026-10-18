#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb16.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkKdTreeCastCollector.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpBroadPhaseCastCollector.h"
#include "RE/H/hkpShapeRayCastInput.h"

namespace RE
{
	class hkpBroadPhaseHandle;
	class hkpCollisionFilter;
	class hkpFixedBufferRayHitCollector;
	class hkpWorldRayCastCommand;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class alignas(16) hkCpuWorldRayCastCollector :
		public hkpBroadPhaseCastCollector,  // 00
		public hkKdTreeCastCollector,  // 04
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint16_t>::Collector,  // 08
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb16, std::uint16_t>::Collector  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkCpuWorldRayCastCollector };
		static constexpr auto VTABLE{ VTABLE::hkCpuWorldRayCastCollector };

		// override (hkpBroadPhaseCastCollector)
		virtual ~hkCpuWorldRayCastCollector() = default;                                                     // 00
		virtual float addBroadPhaseHandle(const hkpBroadPhaseHandle* a_arg1, std::int32_t a_arg2) override;  // 01

		// members
		const hkpCollisionFilter*      m_filter;                      // 10?
		float                          m_hitFraction;                 // 14?
		hkBool                         m_hit;                         // 18?
		std::uint8_t                   pad19[0x3];                    // 19
		hkpWorldRayCastCommand*        m_command;                     // 1C?
		const hkpWorldRayCastInput*    m_originalInput;               // 20?
		hkpWorldRayCastOutput*         m_result;                      // 24?
		hkpWorldRayCastOutput*         m_nextFreeResult;              // 28?
		std::uint32_t                  pad2C;                         // 2C
		hkpShapeRayCastInput           m_workInput;                   // 30?
		hkpFixedBufferRayHitCollector* m_fixedBufferRayHitCollector;  // 60?
		std::uint8_t                   pad64[0xC];                    // 64
		hkVector4                      m_earlyOutHitFraction;         // 70?
	};
}
