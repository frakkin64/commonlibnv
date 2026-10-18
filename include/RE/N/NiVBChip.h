#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiVBBlock;
	class NiVBDynamicSet;

	// not confirmed: no named code in the executable refers to this type
	class NiVBChip
	{
	public:
		// members
		std::uint32_t m_uiIndex;      // 00?
		union
		{
			NiVBBlock* m_pkBlock;
			NiVBDynamicSet* m_pkDynamicSet;
		} ___u1;  // 04?
		void*         m_pkVB;         // 08?
		std::uint32_t m_uiOffset;     // 0C?
		std::uint32_t m_uiLockFlags;  // 10?
		std::uint32_t m_uiSize;       // 14?
		NiVBChip*     m_pkNextChip;   // 18?
		NiVBChip*     m_pkPrevChip;   // 1C?
	};
}
