#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiGeometryData_RendererData;

	class __declspec(novtable) NiSkinPartition_Partition
	{
	public:
		virtual ~NiSkinPartition_Partition() = default;  // 00

		// members
		std::uint16_t*               m_pusBones;          // 04
		float*                       m_pfWeights;         // 08
		std::uint16_t*               m_pusVertexMap;      // 0C
		std::uint8_t*                m_pucBonePalette;    // 10
		std::uint16_t*               m_pusTriList;        // 14
		std::uint16_t*               m_pusStripLengths;   // 18
		std::uint16_t                m_usVertices;        // 1C
		std::uint16_t                m_usTriangles;       // 1E
		std::uint16_t                m_usBones;           // 20
		std::uint16_t                m_usStrips;          // 22
		std::uint16_t                m_usBonesPerVertex;  // 24
		std::uint16_t                pad26;               // 26
		NiGeometryData_RendererData* m_pkBuffData;        // 28
	};
	static_assert(sizeof(NiSkinPartition_Partition) == 0x2C);
}
