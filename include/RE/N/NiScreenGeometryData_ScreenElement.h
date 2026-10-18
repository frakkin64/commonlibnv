#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiColorA;
	class NiPoint2;

	class __declspec(novtable) NiScreenGeometryData_ScreenElement
	{
	public:
		virtual ~NiScreenGeometryData_ScreenElement() = default;  // 00

		// members
		std::uint16_t m_usNumVerts;         // 04?
		std::uint16_t m_usNumTexCoordSets;  // 06?
		NiPoint2*     m_pkVerts;            // 08?
		NiColorA*     m_pkColors;           // 0C?
		NiPoint2*     m_pkTexCoords;        // 10?
	};
}
