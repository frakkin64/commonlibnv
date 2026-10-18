#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiD3DShaderLibraryVersion
	{
	public:
		// members
		std::uint32_t m_uiSystemPixelShaderVersion;      // 00?
		std::uint32_t m_uiMinPixelShaderVersion;         // 04?
		std::uint32_t m_uiRequestedPixelShaderVersion;   // 08?
		std::uint32_t m_uiSystemVertexShaderVersion;     // 0C?
		std::uint32_t m_uiMinVertexShaderVersion;        // 10?
		std::uint32_t m_uiRequestedVertexShaderVersion;  // 14?
		std::uint32_t m_uiSystemUserVersion;             // 18?
		std::uint32_t m_uiMinUserVersion;                // 1C?
		std::uint32_t m_uiRequestedUserVersion;          // 20?
		std::uint32_t m_uiPlatform;                      // 24?
	};
}
