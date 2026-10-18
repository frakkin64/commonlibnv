#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CSpeedTreeRT_EWindMethod.h"

namespace RE
{
	class CWindEngine;

	class CIndexedGeometry
	{
	public:
		// members
		bool                                     m_bRetainTexCoords;        // 00?
		std::uint8_t                             pad01[0x3];                // 01
		CWindEngine*                             m_pWindEngine;             // 04?
		bool                                     m_bVertexWeighting;        // 08?
		bool                                     m_bManualLighting;         // 09?
		std::uint16_t                            pad0A;                     // 0A
		bool*                                    m_pVertexWindComputed;     // 0C?
		std::uint16_t                            m_nVertexSize;             // 10?
		bool                                     m_bValid;                  // 12?
		std::uint8_t                             pad13;                     // 13
		CSpeedTreeRT_EWindMethod                 m_eWindMethod;             // 14?
		float                                    m_fTrunkWidth;             // 18?
		float                                    m_fTrunkLength;            // 1C?
		std::uint16_t                            m_nNumLodLevels;           // 20?
		std::uint16_t                            m_nVertexCounter;          // 22?
		std::uint16_t                            m_nVertexCounterLodLevel;  // 24?
		std::uint16_t                            m_nStripCounter;           // 26?
		stl::vector<std::int32_t>                m_vTriangleCounts;         // 28?
		stl::vector<stl::vector<std::uint16_t>>  m_vStripLengths;           // 40?
		stl::vector<stl::vector<std::uint16_t*>> m_vStrips;                 // 58?
		stl::vector<std::uint32_t>               m_vColors;                 // 70?
		stl::vector<float>                       m_vCoords;                 // 88?
		stl::vector<float>                       m_vOrigCoords;             // A0?
		stl::vector<float>                       m_vNormals;                // B8?
		stl::vector<float>                       m_vBinormals;              // D0?
		stl::vector<float>                       m_vTangents;               // E8?
		stl::vector<float>                       m_vTexCoords0;             // 100?
		stl::vector<float>                       m_vOrigTexCoords0;         // 118?
		stl::vector<std::uint8_t>                m_vTexIndices0;            // 130?
		stl::vector<float>                       m_vTexCoords1;             // 148?
		stl::vector<float>                       m_vWindWeights;            // 160?
		stl::vector<std::uint8_t>                m_vWindMatrixIndices;      // 178?
	};
}
