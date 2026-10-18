#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CSpeedTreeRT_SGeometry_SLeaf.h"

namespace RE
{
	class CVec3;
	class CWindEngine;

	// not confirmed: no named code in the executable refers to this type
	class CLeafGeometry
	{
	public:
		class SLodGeometry;

		class SLodGeometry :
			public CSpeedTreeRT_SGeometry_SLeaf  // 00
		{
		public:
			// members
			bool         m_bValid;             // 3C?
			std::uint8_t pad3D[0x3];           // 3D
			float*       m_pOrigCenterCoords;  // 40?
		};

		// members
		bool                         m_bManualLighting;      // 00?
		bool                         m_bVertexWeighting;     // 01?
		std::uint16_t                pad02;                  // 02
		CWindEngine*                 m_pWindEngine;          // 04?
		std::uint16_t                m_usNumRockingGroups;   // 08?
		std::uint16_t                pad0A;                  // 0A
		float*                       m_pTimeOffsets;         // 0C?
		float**                      m_pLeafVertexes;        // 10?
		float*                       m_pLeafTexCoords;       // 14?
		float*                       m_pVertexProgramTable;  // 18?
		std::uint16_t                m_usNumTextures;        // 1C?
		std::uint16_t                pad1E;                  // 1E
		CVec3*                       m_pLeafDimensions;      // 20?
		CVec3*                       m_pLeafOrigins;         // 24?
		std::uint16_t                m_usNumLods;            // 28?
		std::uint16_t                pad2A;                  // 2A
		CLeafGeometry::SLodGeometry* m_pLods;                // 2C?
	};
}
