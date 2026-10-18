#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSFile;

	// not confirmed: no named code in the executable refers to this type
	class RiffChunk
	{
	public:
		// members
		std::uint32_t    m_fccChunkId;    // 00?
		const RiffChunk* pParentChunk;    // 04?
		BSFile*          pFile;           // 08?
		std::uint32_t    m_dwDataOffset;  // 0C?
		std::uint32_t    m_dwDataSize;    // 10?
		std::uint32_t    m_dwFlags;       // 14?
	};
}
