#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiPSysRotationModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysRotationModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysRotationModifier };

		// members
		float         m_fInitialRotSpeed;     // 18
		float         m_fInitialRotSpeedVar;  // 1C
		float         m_fInitialRotAngle;     // 20
		float         m_fInitialRotAngleVar;  // 24
		NiPoint3      m_kInitialAxis;         // 28
		bool          m_bRandomInitialAxis;   // 34
		bool          m_bRandomRotSpeedSign;  // 35
		std::uint16_t pad36;                  // 36
	};
}
