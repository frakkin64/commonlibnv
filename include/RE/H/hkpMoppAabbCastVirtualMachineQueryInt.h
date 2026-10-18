#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpMoppAabbCastVirtualMachineQueryInt
	{
	public:
		// members
		hkVector4     m_FtoBoffset;       // 00?
		hkVector4     m_extents;          // 10?
		float         m_extentsSum3;      // 20?
		std::int32_t  m_shift;            // 24?
		float         m_FtoBScale;        // 28?
		std::uint32_t m_primitiveOffset;  // 2C?
		std::uint32_t m_properties[1];    // 30?
		std::uint8_t  pad34[0xC];         // 34
	};
}
