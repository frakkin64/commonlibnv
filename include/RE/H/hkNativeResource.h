#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResource.h"

namespace RE
{
	class hkNativeResource :
		public hkResource  // 00
	{
	public:
		// members
		hkArray<char, hkContainerHeapAllocator> m_data;              // 08
		void*                                   m_contents;          // 14
		const char*                             m_contentsTypeName;  // 18?
	};
}
