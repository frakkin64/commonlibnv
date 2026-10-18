#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkFlags.h"
#include "RE/H/hkVertexFormat_DataType.h"
#include "RE/H/hkVertexFormat_DataUsage.h"
#include "RE/H/hkVertexFormat_HintFlags.h"

namespace RE
{
	class hkVertexFormat_Element
	{
	public:
		// members
		hkEnum<hkVertexFormat_DataType, std::uint8_t>   m_dataType;   // 00?
		std::uint8_t                                    m_numValues;  // 01?
		std::uint16_t                                   pad02;        // 02
		hkEnum<hkVertexFormat_DataUsage, std::uint8_t>  m_usage;      // 04?
		std::uint8_t                                    m_subUsage;   // 05?
		std::uint16_t                                   pad06;        // 06
		hkFlags<hkVertexFormat_HintFlags, std::uint8_t> m_flags;      // 08?
		std::uint8_t                                    m_pad[3];     // 09?
	};
}
