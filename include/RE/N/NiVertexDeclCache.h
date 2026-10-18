#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiVertexDeclCache
	{
	public:
		class Entry;

		class Entry
		{
		public:
			// members
			void* m_pakVertexElements;  // 00?
			void* m_pkDecl;             // 04?
		};

		// members
		NiVertexDeclCache::Entry* m_pakBuckets;          // 00?
		std::uint32_t             m_uiNumBuckets;        // 04?
		std::uint32_t             m_uiEntriesPerBucket;  // 08?
		std::uint32_t             m_uiGrowBy;            // 0C?
		std::uint32_t             m_uiNumDecls;          // 10?
	};
}
