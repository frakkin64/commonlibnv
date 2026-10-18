#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkMonitorStreamAnalyzer_Node_NodeType.h"

namespace RE
{
	class hkMonitorStreamAnalyzer_Node;

	// not confirmed: no named code in the executable refers to this type
	class Node
	{
	public:
		// members
		float                                                            m_value[8];           // 00?
		std::uint16_t                                                    m_count[8];           // 20?
		hkArray<hkMonitorStreamAnalyzer_Node*, hkContainerHeapAllocator> m_children;           // 30?
		std::uint32_t                                                    pad3C;                // 3C
		double                                                           m_absoluteStartTime;  // 40?
		hkMonitorStreamAnalyzer_Node*                                    m_parent;             // 48?
		const char*                                                      m_name;               // 4C?
		std::uint32_t                                                    m_userFlags;          // 50?
		hkEnum<hkMonitorStreamAnalyzer_Node_NodeType, std::uint32_t>     m_type;               // 54?
	};
}
