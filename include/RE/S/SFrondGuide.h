#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SFrondVertex.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SFrondGuide
	{
	public:
		// members
		stl::vector<SFrondVertex> m_vVertices;                // 00?
		float                     m_fLength;                  // 18?
		float                     m_fRadius;                  // 1C?
		std::uint8_t              m_chFrondMapIndex;          // 20?
		std::uint8_t              pad21[0x3];                 // 21
		float                     m_fOffsetAngle;             // 24?
		float                     m_fSurfaceArea;             // 28?
		float                     m_fFuzzySurfaceArea;        // 2C?
		std::uint32_t             m_nVertexStartIndex;        // 30?
		std::uint32_t             m_nVerticesPerGuideVertex;  // 34?
	};
}
