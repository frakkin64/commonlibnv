#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class NiAVObject;

	class NiPSysFieldModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysFieldModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysFieldModifier };

		// members
		NiAVObject*  m_pkFieldObj;       // 18
		float        m_fMagnitude;       // 1C
		float        m_fAttenuation;     // 20
		bool         m_bUseMaxDistance;  // 24
		std::uint8_t pad25[0x3];         // 25
		float        m_fMaxDistance;     // 28
		float        m_fMaxDistanceSqr;  // 2C
	};
	static_assert(sizeof(NiPSysFieldModifier) == 0x30);
}
