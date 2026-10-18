#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpGskCache
	{
	public:
		// members
		// not placed: m_maxDimA(overlap), m_gskFlags(overlap)
		std::uint16_t m_vertices[4];  // 00?
		std::uint8_t  m_dimA;         // 08?
		std::uint8_t  m_dimB;         // 09?
		std::uint16_t pad0A;          // 0A
		std::uint8_t bitfield0C;  // m_maxDimB:4, m_maxDimA:4
		std::uint8_t  pad0D[0x3];     // 0D
	};
}
