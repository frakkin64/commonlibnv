#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkQsTransform.h"
#include "RE/H/hkaAnimation.h"

namespace RE
{
	class hkaInterleavedUncompressedAnimation :
		public hkaAnimation  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaInterleavedUncompressedAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaInterleavedUncompressedAnimation };

		// override (hkaAnimation)
		virtual ~hkaInterleavedUncompressedAnimation() = default;  // 00

		// members
		hkArray<hkQsTransform, hkContainerHeapAllocator> m_transforms;  // 28?
		hkArray<float, hkContainerHeapAllocator>         m_floats;      // 34?
	};
}
