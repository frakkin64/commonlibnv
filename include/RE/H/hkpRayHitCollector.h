#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCdBody;
	class hkpShapeRayCastCollectorOutput;

	class __declspec(novtable) hkpRayHitCollector
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRayHitCollector };
		static constexpr auto VTABLE{ VTABLE::hkpRayHitCollector };

		// add
		virtual void addRayHit(const hkpCdBody* a_arg1, const hkpShapeRayCastCollectorOutput* a_arg2);  // 00
		virtual ~hkpRayHitCollector() = default;                                                        // 01

		// members
		std::uint8_t pad04[0x8];             // 04
		float        m_earlyOutHitFraction;  // 0C
	};
}
