#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkxVertexDescription
	{
	public:
		class ElementDecl;

		enum class DataType : std::int32_t
		{
			kHKX_DT_NONE = 0x0,
			kHKX_DT_UINT8 = 0x1,
			kHKX_DT_INT16 = 0x2,
			kHKX_DT_UINT32 = 0x3,
			kHKX_DT_FLOAT = 0x4,
			kHKX_DT_FLOAT2 = 0x5,
			kHKX_DT_FLOAT3 = 0x6,
			kHKX_DT_FLOAT4 = 0x7,
		};

		enum class DataUsage : std::int32_t
		{
			kHKX_DU_NONE = 0x0,
			kHKX_DU_POSITION = 0x1,
			kHKX_DU_COLOR = 0x2,
			kHKX_DU_NORMAL = 0x4,
			kHKX_DU_TANGENT = 0x8,
			kHKX_DU_BINORMAL = 0x10,
			kHKX_DU_TEXCOORD = 0x20,
			kHKX_DU_BLENDWEIGHTS = 0x40,
			kHKX_DU_BLENDINDICES = 0x80,
			kHKX_DU_USERDATA = 0x100,
		};

		class ElementDecl
		{
		public:
			// members
			std::uint32_t                                          m_byteOffset;  // 00?
			hkEnum<hkxVertexDescription::DataType, std::uint16_t>  m_type;        // 04?
			std::uint16_t                                          pad06;         // 06
			hkEnum<hkxVertexDescription::DataUsage, std::uint16_t> m_usage;       // 08?
			std::uint16_t                                          pad0A;         // 0A
			std::uint32_t                                          m_byteStride;  // 0C?
		};

		// members
		hkArray<hkxVertexDescription::ElementDecl, hkContainerHeapAllocator> m_decls;  // 00?
	};
}
