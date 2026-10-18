#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiDX9TextureManager :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9TextureManager };
		static constexpr auto VTABLE{ VTABLE::NiDX9TextureManager };

		// add
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05

		// members
		// not placed: m_pkD3DDevice9(absent), m_pkRenderer(absent)
	};
}
