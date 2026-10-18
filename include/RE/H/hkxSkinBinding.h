#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkMatrix4.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxMesh;

	class alignas(16) hkxSkinBinding :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxSkinBinding };
		static constexpr auto VTABLE{ VTABLE::hkxSkinBinding };

		// override (hkReferencedObject)
		virtual ~hkxSkinBinding() = default;  // 00

		// members
		hkRefPtr<hkxMesh>                              m_mesh;               // 08?
		hkArray<hkStringPtr, hkContainerHeapAllocator> m_nodeNames;          // 0C?
		hkArray<hkMatrix4, hkContainerHeapAllocator>   m_bindPose;           // 18?
		std::uint8_t                                   pad24[0xC];           // 24
		hkMatrix4                                      m_initSkinTransform;  // 30?
	};
}
