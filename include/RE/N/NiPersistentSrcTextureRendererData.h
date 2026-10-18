#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiTexture_RendererData.h"

namespace RE
{
	class NiPalette;

	class NiPersistentSrcTextureRendererData :
		public NiTexture_RendererData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPersistentSrcTextureRendererData };
		static constexpr auto VTABLE{ VTABLE::NiPersistentSrcTextureRendererData };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27

		// members
		// not placed: m_pucPixels, m_puiWidth, m_puiHeight, m_puiOffsetInBytes
		std::uint32_t        m_uiPadOffsetInBytes;          // 60
		std::uint32_t        m_uiMipmapLevels;              // 64
		std::uint32_t        m_uiPixelStride;               // 68
		std::uint32_t        m_uiFaces;                     // 6C
		std::uint32_t        m_eTargetPlatform;             // 70
		std::uint8_t*        m_pucPristinePixels;           // 74
		std::uint32_t        m_uiPristineMaxOffsetInBytes;  // 78
		std::uint32_t        m_uiPristinePadOffsetInBytes;  // 7C
		NiPointer<NiPalette> m_spPalette;                   // 80
	};
}
