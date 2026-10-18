#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpRayHitCollector.h"
#include "RE/H/hkpWorldRayCastOutput.h"

namespace RE
{
	class hkpCdBody;
	class hkpShapeRayCastCollectorOutput;

	class alignas(16) hkpClosestRayHitCollector :
		public hkpRayHitCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpClosestRayHitCollector };
		static constexpr auto VTABLE{ VTABLE::hkpClosestRayHitCollector };

		// override (hkpRayHitCollector)
		virtual void addRayHit(const hkpCdBody* a_arg1, const hkpShapeRayCastCollectorOutput* a_arg2) override;  // 00
		virtual ~hkpClosestRayHitCollector() = default;                                                          // 01

		hkpClosestRayHitCollector* ctor()
		{
			using func_t = hkpClosestRayHitCollector*(__thiscall*)(hkpClosestRayHitCollector*);
			static REL::Relocation<func_t> func{ Offsets::hkpClosestRayHitCollector::ctor };
			return func(this);
		}

		void reset()
		{
			using func_t = decltype(&hkpClosestRayHitCollector::reset);
			static REL::Relocation<func_t> func{ Offsets::hkpClosestRayHitCollector::reset };
			func(this);
		}

	public:
		// members
		hkpWorldRayCastOutput m_rayHit;  // 10
	};
}
