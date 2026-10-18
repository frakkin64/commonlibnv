#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkLogger.h"
#include "RE/H/hkOstream.h"

namespace RE
{
	class hkOstreamLogger :
		public hkLogger  // 00
	{
	public:
		// members
		hkOstream                                      m_os;                 // 08?
		hkArray<char, hkContainerHeapAllocator>        m_indent;             // 14?
		hkArray<char const*, hkContainerHeapAllocator> m_scopes;             // 20?
		std::int32_t                                   m_printedScopeLevel;  // 2C?
		std::int32_t                                   m_logThreshold;       // 30?
		hkBool                                         m_buffered;           // 34?
		std::uint8_t                                   pad35[0x3];           // 35
	};
}
