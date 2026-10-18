#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBoundingVolume.h"
#include "RE/N/NiPlane.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiHalfSpaceBV :
		public NiBoundingVolume  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiHalfSpaceBV };
		static constexpr auto VTABLE{ VTABLE::NiHalfSpaceBV };

		// members
		NiPlane  m_kPlane;   // 04
		NiPoint3 m_kCenter;  // 14
	};
}
