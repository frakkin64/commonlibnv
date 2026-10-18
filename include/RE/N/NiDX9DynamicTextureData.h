#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiDX9TextureData.h"

namespace RE
{
	class NiDX9DynamicTextureData :
		public NiDX9TextureData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9DynamicTextureData };
		static constexpr auto VTABLE{ VTABLE::NiDX9DynamicTextureData };

		// add
		virtual void Unk_2D();  // 2D
		virtual void Unk_2E();  // 2E
		virtual void Unk_2F();  // 2F

		// members
		// not placed: m_pkD3DTexture(absent), m_bTextureLocked(absent)
	};
}
