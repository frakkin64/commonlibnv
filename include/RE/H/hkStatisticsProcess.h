#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkProcess.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkProcessContext;

	class hkStatisticsProcess :
		public hkReferencedObject,  // 00
		public hkProcess  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStatisticsProcess };
		static constexpr auto VTABLE{ VTABLE::hkStatisticsProcess };

		// override (hkReferencedObject)
		virtual ~hkStatisticsProcess() = default;  // 00

		// members
		hkArray<hkProcessContext*, hkContainerHeapAllocator> m_contexts;    // 20?
		hkArray<char, hkContainerHeapAllocator>              m_infoBuffer;  // 2C?
		hkArray<char, hkContainerHeapAllocator>              m_strBuffer;   // 38?
	};
}
