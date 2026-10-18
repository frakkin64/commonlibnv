#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaAnimationPreviewColorContainer :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaAnimationPreviewColorContainer };
		static constexpr auto VTABLE{ VTABLE::hkaAnimationPreviewColorContainer };

		// override (hkReferencedObject)
		virtual ~hkaAnimationPreviewColorContainer() = default;  // 00

		// members
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_previewColor;  // 08?
	};
}
