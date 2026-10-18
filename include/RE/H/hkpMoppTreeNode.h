#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpMoppAssemblerData.h"
#include "RE/H/hkpMoppExtent.h"

namespace RE
{
	class hkpMoppTreeInternalNode;

	class hkpMoppTreeNode
	{
	public:
		class hkpMopp3DOPExtents;

		class hkpMopp3DOPExtents
		{
		public:
			// members
			hkpMoppExtent m_extent[3];  // 00?
		};

		// members
		hkpMoppTreeInternalNode*            m_parent;               // 00?
		hkBool                              m_isTerminal;           // 04?
		std::uint8_t                        pad05[0x3];             // 05
		std::int32_t                        m_numPrimitives;        // 08?
		hkpMoppTreeNode::hkpMopp3DOPExtents m_extents;              // 0C?
		std::uint32_t                       m_minPrimitiveId;       // 18?
		std::uint32_t                       m_maxPrimitiveId;       // 1C?
		std::int32_t                        m_numProperties;        // 20?
		std::uint32_t                       m_minPropertyValue[1];  // 24?
		std::uint32_t                       m_maxPropertyValue[1];  // 28?
		hkpMoppAssemblerData                m_assemblerData;        // 2C?
	};
}
