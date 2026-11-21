#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSDegradePriority.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPixelFormat.h"

namespace RE
{
	class NiTexture;

	class NiTexture_RendererData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTexture_RendererData };
		static constexpr auto VTABLE{ VTABLE::NiTexture_RendererData };

		// members
		NiTexture*        m_pkTexture;           // 08?
		std::uint32_t     m_uiWidth;             // 0C?
		std::uint32_t     m_uiHeight;            // 10?
		NiPixelFormat     m_kPixelFormat;        // 14?
		BSDegradePriority DegradePriorityRange;  // 58?
		std::uint8_t      cFlags;                // 5C?
		std::uint8_t      pad5D[0x3];            // 5D
	};
}
