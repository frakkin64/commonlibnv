#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBroadPhaseCastCollector.h"
#include "RE/H/hkpShapeRayCastInput.h"

namespace RE
{
	class hkpBroadPhase;
	class hkpBroadPhaseHandle;
	class hkpCollisionFilter;
	class hkpRayCollidableFilter;
	class hkpRayHitCollector;
	class hkpWorldRayCastInput;

	class alignas(16) hkpWorldRayCaster :
		public hkpBroadPhaseCastCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldRayCaster };
		static constexpr auto VTABLE{ VTABLE::hkpWorldRayCaster };

		// override (hkpBroadPhaseCastCollector)
		virtual ~hkpWorldRayCaster() = default;                                                              // 00
		virtual float addBroadPhaseHandle(const hkpBroadPhaseHandle* a_arg1, std::int32_t a_arg2) override;  // 01

		void castRay(hkpBroadPhase const& broadphase, hkpWorldRayCastInput const& input, hkpCollisionFilter const* filter, char const* cache, hkpRayHitCollector& collector)
		{
			using func_t = decltype(&hkpWorldRayCaster::castRay);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldRayCaster::castRay };
			func(this, broadphase, input, filter, cache, collector);
		}

	public:
		// members
		const hkpWorldRayCastInput*   m_input;              // 04?
		const hkpRayCollidableFilter* m_filter;             // 08?
		hkpRayHitCollector*           m_collectorBase;      // 0C?
		std::int32_t                  m_collectorStriding;  // 10?
		std::uint8_t                  pad14[0xC];           // 14
		hkpShapeRayCastInput          m_shapeInput;         // 20?
	};
}
