#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiDX9TextureData.h"

namespace RE
{
	class NiDX9SourceTextureData :
		public NiDX9TextureData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9SourceTextureData };
		static constexpr auto VTABLE{ VTABLE::NiDX9SourceTextureData };

		// add
		virtual void Unk_2D();  // 2D
		virtual void Unk_2E();  // 2E

		// members
		// not placed: m_bReplacementData(absent), m_bMipmap(absent), m_bNoRelease(absent), m_uiFormattedSize(absent), m_spPalette(absent), m_uiLevelsSkipped(absent), m_uiSourceRevID(absent), m_uiPalRevID(absent)
	};
}
