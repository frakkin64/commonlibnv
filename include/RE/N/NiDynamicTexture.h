#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTexture.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiDynamicTexture :
		public NiTexture  // 00
	{
	public:
		// members
		std::uint32_t m_uiWidth;   // 30?
		std::uint32_t m_uiHeight;  // 34?
		bool          m_bTiled;    // 38?
		std::uint8_t  pad39[0x3];  // 39
	};
}
