#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkKdTreeProjectedEntry.h"
#include "RE/H/hkVector4Comparison.h"

namespace RE
{
	class hkKdTreeBuildInput_WorkingSet;
	class hkKdTreeBuilderSparseWriter;

	class alignas(16) hkKdTreeBuildInput_BuildRecursiveInput
	{
	public:
		// members
		hkKdTreeBuildInput_WorkingSet* m_buffers;             // 00?
		std::int32_t                   m_currentNodeIdx;      // 04?
		std::int32_t                   m_maxNodeIdx;          // 08?
		std::int32_t                   m_startPrimIdx;        // 0C?
		std::int32_t                   m_endPrimIdx;          // 10?
		hkKdTreeProjectedEntry         m_bounds;              // 14?
		hkKdTreeBuilderSparseWriter*   m_writer;              // 24?
		std::uint8_t                   pad28[0x8];            // 28
		hkVector4Comparison            m_allowedEmptySplits;  // 30?
	};
}
