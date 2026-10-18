#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpShapeCollection.h"

namespace RE
{
	class hkpShape;

	class alignas(16) hkpListShape :
		public hkpShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpListShape };
		static constexpr auto VTABLE{ VTABLE::hkpListShape };

		class ChildInfo;

		class ChildInfo
		{
		public:
			// members
			const hkpShape* m_shape;                // 00?
			std::uint32_t   m_collisionFilterInfo;  // 04?
			std::int32_t    m_shapeSize;            // 08?
			std::int32_t    m_numChildShapes;       // 0C?
		};

		// override (hkpShapeCollection)
		virtual ~hkpListShape() = default;  // 00

		// members
		hkArray<hkpListShape::ChildInfo, hkContainerHeapAllocator> m_childInfo;            // 18?
		std::uint16_t                                              m_flags;                // 24?
		std::uint16_t                                              m_numDisabledChildren;  // 26?
		std::uint8_t                                               pad28[0x8];             // 28
		hkVector4                                                  m_aabbHalfExtents;      // 30?
		hkVector4                                                  m_aabbCenter;           // 40?
		std::uint32_t                                              m_enabledChildren[8];   // 50?
	};
}
