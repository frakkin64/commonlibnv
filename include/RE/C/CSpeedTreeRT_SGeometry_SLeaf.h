#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CSpeedTreeRT_SGeometry_SLeaf
	{
	public:
		// members
		bool                 m_bIsActive;            // 00?
		std::uint8_t         pad01[0x3];             // 01
		float                m_fAlphaTestValue;      // 04?
		std::int32_t         m_nDiscreteLodLevel;    // 08?
		std::uint16_t        m_usLeafCount;          // 0C?
		std::uint16_t        pad0E;                  // 0E
		const std::uint8_t*  m_pLeafMapIndices;      // 10?
		const std::uint8_t*  m_pLeafClusterIndices;  // 14?
		const float*         m_pCenterCoords;        // 18?
		const float**        m_pLeafMapTexCoords;    // 1C?
		const float**        m_pLeafMapCoords;       // 20?
		const std::uint32_t* m_pColors;              // 24?
		const float*         m_pNormals;             // 28?
		const float*         m_pBinormals;           // 2C?
		const float*         m_pTangents;            // 30?
		const float*         m_pWindWeights;         // 34?
		const std::uint8_t*  m_pWindMatrixIndices;   // 38?
	};
}
