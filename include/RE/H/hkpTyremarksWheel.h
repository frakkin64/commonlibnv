#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpTyremarkPoint.h"

namespace RE
{
	class hkpTyremarksWheel :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpTyremarksWheel };
		static constexpr auto VTABLE{ VTABLE::hkpTyremarksWheel };

		// override (hkReferencedObject)
		virtual ~hkpTyremarksWheel() = default;  // 00

		// members
		std::int32_t                                        m_currentPosition;  // 08?
		std::int32_t                                        m_numPoints;        // 0C?
		hkArray<hkpTyremarkPoint, hkContainerHeapAllocator> m_tyremarkPoints;   // 10?
	};
}
