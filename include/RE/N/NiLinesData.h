#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData.h"

namespace RE
{
	class NiLinesData :
		public NiGeometryData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLinesData };
		static constexpr auto VTABLE{ VTABLE::NiLinesData };

		// members
		std::uint8_t* m_pkFlags;  // 40
	};
}
