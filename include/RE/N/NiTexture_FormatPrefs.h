#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTexture_FormatPrefs_AlphaFormat.h"
#include "RE/N/NiTexture_FormatPrefs_MipFlag.h"
#include "RE/N/NiTexture_FormatPrefs_PixelLayout.h"

namespace RE
{
	class NiTexture_FormatPrefs
	{
	public:
		using AlphaFormat = NiTexture_FormatPrefs_AlphaFormat;
		using MipFlag = NiTexture_FormatPrefs_MipFlag;
		using PixelLayout = NiTexture_FormatPrefs_PixelLayout;

		NiTexture_FormatPrefs* ctor()
		{
			using func_t = NiTexture_FormatPrefs*(__thiscall*)(NiTexture_FormatPrefs*);
			static REL::Relocation<func_t> func{ Offsets::NiTexture_FormatPrefs::ctor };
			return func(this);
		}

	public:
		// members
		NiTexture_FormatPrefs_PixelLayout m_ePixelLayout;  // 00
		NiTexture_FormatPrefs_AlphaFormat m_eAlphaFmt;     // 04?
		NiTexture_FormatPrefs_MipFlag     m_eMipMapped;    // 08?
	};
}
