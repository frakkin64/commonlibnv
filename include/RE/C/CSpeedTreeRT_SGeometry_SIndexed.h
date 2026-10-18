#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CSpeedTreeRT_SGeometry_SIndexed
	{
	public:
		// members
		std::int32_t          m_nDiscreteLodLevel;   // 00?
		std::uint16_t         m_usNumStrips;         // 04?
		std::uint16_t         pad06;                 // 06
		const std::uint16_t*  m_pStripLengths;       // 08?
		const std::uint16_t** m_pStrips;             // 0C?
		std::uint16_t         m_usVertexCount;       // 10?
		std::uint16_t         pad12;                 // 12
		const std::uint32_t*  m_pColors;             // 14?
		const float*          m_pNormals;            // 18?
		const float*          m_pBinormals;          // 1C?
		const float*          m_pTangents;           // 20?
		const float*          m_pCoords;             // 24?
		const float*          m_pTexCoords0;         // 28?
		const float*          m_pTexCoords1;         // 2C?
		const float*          m_pWindWeights;        // 30?
		const std::uint8_t*   m_pWindMatrixIndices;  // 34?
	};
}
