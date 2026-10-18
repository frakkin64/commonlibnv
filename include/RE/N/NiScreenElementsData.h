#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTriShapeData.h"

namespace RE
{
	class NiScreenElementsData :
		public NiTriShapeData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiScreenElementsData };
		static constexpr auto VTABLE{ VTABLE::NiScreenElementsData };

		class Polygon;

		class Polygon
		{
		public:
			// members
			std::uint16_t m_usNumVertices;   // 00?
			std::uint16_t m_usVOffset;       // 02?
			std::uint16_t m_usNumTriangles;  // 04?
			std::uint16_t m_usIOffset;       // 06?
		};

		// members
		NiScreenElementsData::Polygon* m_akPolygon;          // 58
		std::uint16_t*                 m_ausPIndexer;        // 5C
		std::uint16_t                  m_usMaxPQuantity;     // 60
		std::uint16_t                  m_usPGrowBy;          // 62
		std::uint16_t                  m_usPQuantity;        // 64
		std::uint16_t                  m_usMaxVQuantity;     // 66
		std::uint16_t                  m_usVGrowBy;          // 68
		std::uint16_t                  m_usMaxIQuantity;     // 6A
		std::uint16_t                  m_usIGrowBy;          // 6C
		bool                           m_bBoundNeedsUpdate;  // 6E?
		std::uint8_t                   pad6F;                // 6F
	};
}
