#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpMoppAssembler_hkpMoppAssemblerParams
	{
	public:
		// members
		float         m_relativeFitToleranceOfInternalNodes;         // 00?
		float         m_absoluteFitToleranceOfInternalNodes;         // 04?
		float         m_absoluteFitToleranceOfTriangles;             // 08?
		std::uint32_t pad0C;                                         // 0C
		hkVector4     m_absoluteFitToleranceOfAxisAlignedTriangles;  // 10?
		std::int32_t  m_groupLevels;                                 // 20?
		hkBool        m_interleavedBuildingEnabled;                  // 24?
		std::uint8_t  pad25[0xB];                                    // 25
	};
}
