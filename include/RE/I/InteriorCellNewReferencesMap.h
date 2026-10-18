#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class InteriorCellNewReferencesMap :
		public NiTPointerMap<std::uint32_t, BSSimpleList<std::uint32_t>*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::InteriorCellNewReferencesMap };
		static constexpr auto VTABLE{ VTABLE::InteriorCellNewReferencesMap };

		// override (NiTPointerMap<std::uint32_t, BSSimpleList<std::uint32_t>*>)
		virtual ~InteriorCellNewReferencesMap() = default;  // 00
	};
	static_assert(sizeof(InteriorCellNewReferencesMap) == 0x10);
}
