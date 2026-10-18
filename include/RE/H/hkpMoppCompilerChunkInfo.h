#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpMoppCodeReindexedTerminal.h"

namespace RE
{
	class hkpMoppCodeGenerator;
	class hkpPrimitiveCompressor;

	class hkpMoppCompilerChunkInfo
	{
	public:
		class Chunk;

		class Chunk
		{
		public:
			// members
			hkpMoppCodeGenerator* m_code;      // 00?
			std::int32_t          m_codeSize;  // 04?
		};

		// members
		std::int32_t                                                       m_maxChunkSize;  // 00?
		hkArray<hkpMoppCodeReindexedTerminal, hkContainerHeapAllocator>    m_reindexInfo;   // 04?
		hkArray<hkpMoppCompilerChunkInfo::Chunk, hkContainerHeapAllocator> m_chunks;        // 10?
		hkpPrimitiveCompressor*                                            m_compressor;    // 1C?
		std::int32_t                                                       m_safetySize;    // 20?
	};
}
