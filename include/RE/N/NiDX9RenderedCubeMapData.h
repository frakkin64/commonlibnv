#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiDX9RenderedTextureData.h"

namespace RE
{
	class NiDX9RenderedCubeMapData :
		public NiDX9RenderedTextureData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9RenderedCubeMapData };
		static constexpr auto VTABLE{ VTABLE::NiDX9RenderedCubeMapData };

		// members
		// not placed: m_apkFaces(absent)
	};
}
