#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxIndexBuffer :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxIndexBuffer };
		static constexpr auto VTABLE{ VTABLE::hkxIndexBuffer };

		enum class IndexType : std::int32_t
		{
			kINDEX_TYPE_INVALID = 0x0,
			kINDEX_TYPE_TRI_LIST = 0x1,
			kINDEX_TYPE_TRI_STRIP = 0x2,
			kINDEX_TYPE_TRI_FAN = 0x3,
			kINDEX_TYPE_MAX_ID = 0x4,
		};

		// override (hkReferencedObject)
		virtual ~hkxIndexBuffer() = default;  // 00

		// members
		hkEnum<hkxIndexBuffer::IndexType, std::int8_t>   m_indexType;         // 08?
		std::uint8_t                                     pad09[0x3];          // 09
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_indices16;         // 0C?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_indices32;         // 18?
		std::uint32_t                                    m_vertexBaseOffset;  // 24?
		std::uint32_t                                    m_length;            // 28?
	};
}
