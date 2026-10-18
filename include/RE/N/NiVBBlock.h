#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiVBChip;
	class NiVBSet;

	// not confirmed: no named code in the executable refers to this type
	class NiVBBlock
	{
	public:
		// members
		NiVBSet*                     m_pkSet;             // 00?
		std::uint32_t                m_uiIndex;           // 04?
		void*                        m_pkVB;              // 08?
		std::uint32_t                m_uiSize;            // 0C?
		std::uint32_t                m_uiFVF;             // 10?
		std::uint32_t                m_uiFlags;           // 14?
		std::uint32_t                m_uiUsage;           // 18?
		std::uint32_t                m_ePool;             // 1C?
		std::uint32_t                m_uiCurrOffset;      // 20?
		std::uint32_t                m_uiFreeBytes;       // 24?
		std::uint32_t                m_uiTotalFreeBytes;  // 28?
		NiTPrimitiveArray<NiVBChip*> m_apkChips;          // 2C?
		NiVBBlock*                   m_pkNextBlock;       // 3C?
		NiVBBlock*                   m_pkPrevBlock;       // 40?
	};
}
