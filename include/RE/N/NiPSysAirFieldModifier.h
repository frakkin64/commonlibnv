#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysFieldModifier.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiPSysAirFieldModifier :
		public NiPSysFieldModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysAirFieldModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysAirFieldModifier };

		// members
		NiPoint3     m_kLastFieldPosition;  // 30
		float        m_fLastUpdateTime;     // 3C
		NiPoint3     m_kDirection;          // 40
		NiPoint3     m_kUnitDirection;      // 4C
		float        m_fAirFriction;        // 58
		float        m_fInheritVelocity;    // 5C
		bool         m_bInheritRotation;    // 60
		bool         m_bComponentOnly;      // 61
		bool         m_bEnableSpread;       // 62
		std::uint8_t pad63;                 // 63
		float        m_fSpread;             // 64
	};
}
