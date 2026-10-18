#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkStructureLayout_LayoutRules
	{
	public:
		// members
		std::uint8_t m_bytesInPointer;              // 00
		std::uint8_t m_littleEndian;                // 01
		std::uint8_t m_reusePaddingOptimization;    // 02
		std::uint8_t m_emptyBaseClassOptimization;  // 03
	};
}
