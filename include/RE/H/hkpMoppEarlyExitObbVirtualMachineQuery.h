#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpMoppEarlyExitObbVirtualMachineQuery
	{
	public:
		// members
		std::int32_t  m_xHi;              // 00?
		std::int32_t  m_yHi;              // 04?
		std::int32_t  m_zHi;              // 08?
		std::int32_t  m_HiPadding;        // 0C?
		std::int32_t  m_xLo;              // 10?
		std::int32_t  m_yLo;              // 14?
		std::int32_t  m_zLo;              // 18?
		std::int32_t  m_LoPadding;        // 1C?
		std::int32_t  m_cx;               // 20?
		std::int32_t  m_cy;               // 24?
		std::int32_t  m_cz;               // 28?
		std::int32_t  m_cradius;          // 2C?
		std::int32_t  m_offset_x;         // 30?
		std::int32_t  m_offset_y;         // 34?
		std::int32_t  m_offset_z;         // 38?
		std::uint32_t m_primitiveOffset;  // 3C?
		std::int32_t  m_shift;            // 40?
		std::uint32_t m_properties[1];    // 44?
	};
}
