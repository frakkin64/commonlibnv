#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTriBasedGeomData.h"

namespace RE
{
	class NiTriStripsData :
		public NiTriBasedGeomData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriStripsData };
		static constexpr auto VTABLE{ VTABLE::NiTriStripsData };

		// members
		std::uint16_t  m_usStrips;         // 44
		std::uint16_t  pad46;              // 46
		std::uint16_t* m_pusStripLengths;  // 48
		std::uint16_t* m_pusStripLists;    // 4C
	};
}
