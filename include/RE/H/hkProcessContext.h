#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"

namespace RE
{
	class hkVisualDebugger;

	class __declspec(novtable) hkProcessContext
	{
	public:
		static constexpr auto RTTI{ RTTI::hkProcessContext };
		static constexpr auto VTABLE{ VTABLE::hkProcessContext };

		// add
		virtual ~hkProcessContext() = default;         // 00
		virtual const char* getType();                 // 01
		virtual void setOwner(hkVisualDebugger* vdb);  // 02

		// members
		hkVisualDebugger*                                        m_owner;                // 04
		hkInplaceArray<char const*, 6, hkContainerHeapAllocator> m_monitorStreamBegins;  // 08?
		hkInplaceArray<char const*, 6, hkContainerHeapAllocator> m_monitorStreamEnds;    // 2C?
	};
}
