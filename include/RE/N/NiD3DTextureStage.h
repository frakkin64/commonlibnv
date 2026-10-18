#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiTexture;

	// not confirmed: no named code in the executable refers to this type
	class NiD3DTextureStage
	{
	public:
		// members
		std::uint8_t  eFilterMode;       // 00?
		std::uint8_t  eClampMode;        // 01?
		bool          m_bRendererOwned;  // 02?
		bool          m_bEnabled;        // 03?
		std::uint32_t m_uiStage;         // 04?
		NiTexture*    m_spTexture;       // 08?
		std::uint32_t m_uiTextureFlags;  // 0C?
		std::uint32_t m_uiRefCount;      // 10?
	};
}
