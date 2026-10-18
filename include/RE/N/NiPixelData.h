#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPixelFormat.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiPalette;

	class NiPixelData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPixelData };
		static constexpr auto VTABLE{ VTABLE::NiPixelData };

		void MarkAsChanged()
		{
			using func_t = decltype(&NiPixelData::MarkAsChanged);
			static REL::Relocation<func_t> func{ Offsets::NiPixelData::MarkAsChanged };
			func(this);
		}

		std::uint8_t* GetPixels(std::uint32_t uiMipmapLevel, std::uint32_t uiFace)
		{
			using func_t = decltype(&NiPixelData::GetPixels);
			static REL::Relocation<func_t> func{ Offsets::NiPixelData::GetPixels };
			return func(this, uiMipmapLevel, uiFace);
		}

		NiPixelData* ctor(std::uint32_t uiWidth, std::uint32_t uiHeight, NiPixelFormat const& kFormat, std::uint32_t uiMipmapLevels, std::uint32_t uiFaces)
		{
			using func_t = NiPixelData*(__thiscall*)(NiPixelData*, std::uint32_t, std::uint32_t, NiPixelFormat const&, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::NiPixelData::ctor };
			return func(this, uiWidth, uiHeight, kFormat, uiMipmapLevels, uiFaces);
		}

	public:
		// members
		NiPixelFormat        m_kPixelFormat;      // 08
		NiPointer<NiPalette> m_spPalette;         // 4C
		std::uint8_t*        m_pucPixels;         // 50
		std::uint32_t*       m_puiWidth;          // 54
		std::uint32_t*       m_puiHeight;         // 58
		std::uint32_t*       m_puiOffsetInBytes;  // 5C
		std::uint32_t        m_uiMipmapLevels;    // 60
		std::uint32_t        m_uiPixelStride;     // 64
		std::uint32_t        m_uiRevID;           // 68
		std::uint32_t        m_uiFaces;           // 6C
		bool                 bNoConvert;          // 70
		std::uint8_t         pad71[0x3];          // 71
	};
}
