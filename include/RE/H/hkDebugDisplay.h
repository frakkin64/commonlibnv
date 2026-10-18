#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkCriticalSection;
	class hkDebugDisplayHandler;

	class hkDebugDisplay :
		public hkReferencedObject,  // 00
		public hkSingleton<hkDebugDisplay>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDebugDisplay };
		static constexpr auto VTABLE{ VTABLE::hkDebugDisplay };

		// override (hkReferencedObject)
		virtual ~hkDebugDisplay() = default;  // 00

		// members
		hkArray<hkDebugDisplayHandler*, hkContainerHeapAllocator> m_debugDisplayHandlers;  // 08?
		hkCriticalSection*                                        m_arrayLock;             // 14?
	};
}
