#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryGroup.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiVBChip;
	class NiVBDynamicSet;

	class NiDynamicGeometryGroup :
		public NiGeometryGroup  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDynamicGeometryGroup };
		static constexpr auto VTABLE{ VTABLE::NiDynamicGeometryGroup };

		// members
		NiTPointerMap<std::uint32_t, NiVBDynamicSet*> m_kSets;              // 0C?
		NiTPointerMap<std::uint32_t, NiVBChip*>       m_kChips;             // 1C?
		NiTPrimitiveArray<NiVBDynamicSet*>            m_kMultiStreamSets;   // 2C?
		NiTPrimitiveArray<NiVBChip*>                  m_kMultiStreamChips;  // 3C?
		std::uint32_t                                 m_uiNextIndex;        // 4C
	};
}
