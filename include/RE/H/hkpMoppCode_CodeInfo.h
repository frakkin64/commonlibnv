#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpMoppCode_CodeInfo
	{
	public:
		// members
		hkVector4 m_offset;  // 00
	};
	static_assert(sizeof(hkpMoppCode_CodeInfo) == 0x10);
}
