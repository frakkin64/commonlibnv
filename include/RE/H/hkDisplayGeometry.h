#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometryType.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkGeometry;
	class hkMemoryAllocator;

	class alignas(16) hkDisplayGeometry :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayGeometry };
		static constexpr auto VTABLE{ VTABLE::hkDisplayGeometry };

		// override (hkReferencedObject)
		virtual ~hkDisplayGeometry() = default;  // 00

		// add
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2);  // 03
		virtual void buildGeometry();                                                                  // 04

		// members
		hkGeometry*           m_geometry;   // 08
		std::uint32_t         pad0C;        // 0C
		hkTransform           m_transform;  // 10
		hkDisplayGeometryType m_type;       // 50
		std::uint8_t          pad54[0xC];   // 54
	};
	static_assert(sizeof(hkDisplayGeometry) == 0x60);
}
