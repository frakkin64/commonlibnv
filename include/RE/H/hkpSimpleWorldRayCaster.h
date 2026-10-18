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
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class alignas(16) hkpSimpleWorldRayCaster :
		public hkpBroadPhaseCastCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimpleWorldRayCaster };
		static constexpr auto VTABLE{ VTABLE::hkpSimpleWorldRayCaster };

		// override (hkpBroadPhaseCastCollector)
		virtual ~hkpSimpleWorldRayCaster() = default;                                                        // 00
		virtual float addBroadPhaseHandle(const hkpBroadPhaseHandle* a_arg1, std::int32_t a_arg2) override;  // 01

		void castRay(hkpBroadPhase const& broadphase, hkpWorldRayCastInput const& input, hkpCollisionFilter const* filter, char const* cache, hkpWorldRayCastOutput& output)
		{
			using func_t = decltype(&hkpSimpleWorldRayCaster::castRay);
			static REL::Relocation<func_t> func{ Offsets::hkpSimpleWorldRayCaster::castRay };
			func(this, broadphase, input, filter, cache, output);
		}

	public:
		// members
		const hkpWorldRayCastInput*   m_input;       // 04?
		const hkpRayCollidableFilter* m_filter;      // 08?
		hkpWorldRayCastOutput*        m_result;      // 0C?
		hkpShapeRayCastInput          m_shapeInput;  // 10?
	};
}
