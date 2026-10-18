#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBoundingVolume.h"
#include "RE/N/NiCapsule.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiCapsuleBV :
		public NiBoundingVolume  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiCapsuleBV };
		static constexpr auto VTABLE{ VTABLE::NiCapsuleBV };

		// members
		NiPoint3  m_kCenter;   // 04
		NiPoint3  m_kAxis;     // 10
		float     m_fExtent;   // 1C
		NiCapsule m_kCapsule;  // 20?
	};
}
