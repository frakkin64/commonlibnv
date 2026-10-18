#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SIdvBranch.h"
#include "RE/S/SIdvBranchFlare.h"

namespace RE
{
	class SIdvBranchVertex;

	// not confirmed: no named code in the executable refers to this type
	class CIdvBranch
	{
	public:
		// members
		CIdvBranch*                  m_pParent;                 // 00?
		float                        m_fPercentOfParent;        // 04?
		stl::vector<SIdvBranch>      m_vChildren;               // 08?
		SIdvBranchVertex*            m_pVertices;               // 20?
		std::int32_t                 m_nVertexCount;            // 24?
		std::uint16_t                m_usCrossSectionSegments;  // 28?
		std::uint16_t                pad2A;                     // 2A
		std::int32_t                 m_nStartingOffset;         // 2C?
		float                        m_fVolume;                 // 30?
		float                        m_fFuzzyVolume;            // 34?
		stl::vector<SIdvBranchFlare> m_vFlares;                 // 38?
	};
}
