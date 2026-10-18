#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPalette_RendererData.h"

namespace RE
{
	class NiPalette :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPalette };
		static constexpr auto VTABLE{ VTABLE::NiPalette };

		using RendererData = NiPalette_RendererData;

		class PaletteEntry;

		class PaletteEntry
		{
		public:
			// members
			std::uint8_t m_ucRed;    // 00?
			std::uint8_t m_ucGreen;  // 01?
			std::uint8_t m_ucBlue;   // 02?
			std::uint8_t m_ucAlpha;  // 03?
		};

		// members
		bool                     m_bAlpha;          // 08
		std::uint8_t             pad09[0x3];        // 09
		std::uint32_t            m_uiEntries;       // 0C
		std::uint32_t            m_uiRevID;         // 10
		NiPalette::PaletteEntry* m_pkPalette;       // 14
		NiPalette_RendererData*  m_pkRendererData;  // 18
		NiPalette*               m_pkPrev;          // 1C?
		NiPalette*               m_pkNext;          // 20?
	};
}
