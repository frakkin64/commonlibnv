#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CSpeedTreeRT_SGeometry_SBillboard
	{
	public:
		// members
		bool          m_bIsActive;        // 00?
		std::uint8_t  pad01[0x3];         // 01
		const float*  m_pTexCoords;       // 04?
		const float*  m_pCoords;          // 08?
		float         m_fAlphaTestValue;  // 0C?
		std::uint16_t m_usWhich;          // 10?
		std::uint16_t pad12;              // 12
	};
}
