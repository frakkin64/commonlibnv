#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiVBDynamicSet
	{
	public:
		// members
		std::uint32_t m_uiIndex;       // 00?
		std::uint32_t m_uiFVF;         // 04?
		std::uint32_t m_uiBlockSize;   // 08?
		void*         m_pkD3DDevice;   // 0C?
		void*         m_pkVB;          // 10?
		std::uint32_t m_uiCurrOffset;  // 14?
	};
}
