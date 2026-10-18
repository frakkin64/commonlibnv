#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class NiPSysSpawnModifier;

	class NiPSysAgeDeathModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysAgeDeathModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysAgeDeathModifier };

		// members
		bool                 m_bSpawnOnDeath;    // 18
		std::uint8_t         pad19[0x3];         // 19
		NiPSysSpawnModifier* m_pkSpawnModifier;  // 1C
	};
}
