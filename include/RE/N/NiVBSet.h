#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiVBBlock;

	// not confirmed: no named code in the executable refers to this type
	class NiVBSet
	{
	public:
		// members
		std::uint32_t                 m_uiIndex;               // 00?
		std::uint32_t                 m_uiFVF;                 // 04?
		std::uint32_t                 m_uiFlags;               // 08?
		std::uint32_t                 m_uiBlockSize;           // 0C?
		void*                         m_pkD3DDevice;           // 10?
		std::uint32_t                 m_uiUsage;               // 14?
		std::uint32_t                 m_ePool;                 // 18?
		NiTPrimitiveArray<NiVBBlock*> m_apkBlocks;             // 1C?
		NiVBBlock*                    m_pkBlockList;           // 2C?
		std::uint32_t                 m_uiFreeSpaceThreshold;  // 30?
	};
}
