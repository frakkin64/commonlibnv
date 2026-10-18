#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkWorldOperation_Type.h"

namespace RE
{
	class hkWorldOperation_BaseOperation
	{
	public:
		// members
		hkEnum<hkWorldOperation_Type, std::uint8_t> m_type;      // 00?
		std::uint8_t                                pad01[0x3];  // 01
	};
}
