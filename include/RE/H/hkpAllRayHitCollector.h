#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpRayHitCollector.h"

namespace RE
{
	class hkpCdBody;
	class hkpShapeRayCastCollectorOutput;

	class alignas(16) hkpAllRayHitCollector :
		public hkpRayHitCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAllRayHitCollector };
		static constexpr auto VTABLE{ VTABLE::hkpAllRayHitCollector };

		// override (hkpRayHitCollector)
		virtual void addRayHit(const hkpCdBody* a_arg1, const hkpShapeRayCastCollectorOutput* a_arg2) override;  // 00
		virtual ~hkpAllRayHitCollector() = default;                                                              // 01

		hkpAllRayHitCollector* ctor()
		{
			using func_t = hkpAllRayHitCollector*(__thiscall*)(hkpAllRayHitCollector*);
			static REL::Relocation<func_t> func{ Offsets::hkpAllRayHitCollector::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: m_hits
	};
}
