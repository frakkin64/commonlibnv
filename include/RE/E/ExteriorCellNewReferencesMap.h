#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class ExteriorCellReferenceData;

	class ExteriorCellNewReferencesMap :
		public NiTPointerMap<std::uint32_t, BSSimpleList<ExteriorCellReferenceData*>*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExteriorCellNewReferencesMap };
		static constexpr auto VTABLE{ VTABLE::ExteriorCellNewReferencesMap };

		// override (NiTPointerMap<std::uint32_t, BSSimpleList<ExteriorCellReferenceData*>*>)
		virtual ~ExteriorCellNewReferencesMap() = default;  // 00
	};
	static_assert(sizeof(ExteriorCellNewReferencesMap) == 0x10);
}
