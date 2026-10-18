#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpShape.h"

namespace RE
{
	class hkpMultiRayShape :
		public hkpShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMultiRayShape };
		static constexpr auto VTABLE{ VTABLE::hkpMultiRayShape };

		class Ray;

		class alignas(16) Ray
		{
		public:
			// members
			hkVector4 m_start;  // 00?
			hkVector4 m_end;    // 10?
		};

		// override (hkpShape)
		virtual ~hkpMultiRayShape() = default;  // 00

		// members
		hkArray<hkpMultiRayShape::Ray, hkContainerHeapAllocator> m_rays;                    // 10
		float                                                    m_rayPenetrationDistance;  // 1C?
	};
}
