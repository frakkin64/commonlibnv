#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResourceMap.h"
#include "RE/H/hkStringMap.h"

namespace RE
{
	class hkResourceHandle;

	class hkContainerResourceMap :
		public hkResourceMap  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkContainerResourceMap };
		static constexpr auto VTABLE{ VTABLE::hkContainerResourceMap };

		// override (hkResourceMap)
		virtual ~hkContainerResourceMap() = default;  // 01

		// members
		hkStringMap<hkResourceHandle*, hkContainerHeapAllocator> m_resources;  // 04
	};
}
