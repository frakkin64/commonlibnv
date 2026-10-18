#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBoundingVolume.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiUnionBV :
		public NiBoundingVolume  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiUnionBV };
		static constexpr auto VTABLE{ VTABLE::NiUnionBV };

		// members
		NiTPrimitiveArray<NiBoundingVolume*> m_kBoundingVolume;         // 04
		std::uint32_t                        m_uiWhichObjectIntersect;  // 14
	};
}
