#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiDX9TextureData.h"

namespace RE
{
	class NiDX9RenderedTextureData :
		public NiDX9TextureData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9RenderedTextureData };
		static constexpr auto VTABLE{ VTABLE::NiDX9RenderedTextureData };

		// members
		// not placed: m_kPixelFormat(absent), m_pkD3DTexture(absent), m_pkTarget(absent)
	};
}
