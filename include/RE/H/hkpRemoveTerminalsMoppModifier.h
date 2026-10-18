#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpMoppModifier.h"

namespace RE
{
	class hkpRemoveTerminalsMoppModifier :
		public hkReferencedObject,  // 00
		public hkpMoppModifier  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRemoveTerminalsMoppModifier };
		static constexpr auto VTABLE{ VTABLE::hkpRemoveTerminalsMoppModifier };

		// override (hkReferencedObject)
		virtual ~hkpRemoveTerminalsMoppModifier() = default;  // 00

		// members
		hkArray<std::uint32_t, hkContainerHeapAllocator>        m_removeInfo;          // 0C?
		const hkArray<std::uint32_t, hkContainerHeapAllocator>* m_tempShapesToRemove;  // 18?
	};
}
