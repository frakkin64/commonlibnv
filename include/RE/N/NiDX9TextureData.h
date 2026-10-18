#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTexture_RendererData.h"

namespace RE
{
	class NiDX9TextureData :
		public NiTexture_RendererData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9TextureData };
		static constexpr auto VTABLE{ VTABLE::NiDX9TextureData };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B
		virtual void Unk_2C();  // 2C

		// members
		// not placed: ulTextureMemorySize(absent), m_pkRenderer(absent), m_pkD3DTexture(absent), m_uiLevels(absent)
	};
}
