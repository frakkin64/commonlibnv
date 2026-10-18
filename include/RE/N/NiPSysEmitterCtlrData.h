#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiBoolKey;
	class NiFloatKey;

	class NiPSysEmitterCtlrData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysEmitterCtlrData };
		static constexpr auto VTABLE{ VTABLE::NiPSysEmitterCtlrData };

		// members
		std::uint32_t          m_uiNumBirthRateKeys;      // 08
		NiFloatKey*            m_pkBirthRateKeys;         // 0C
		NiAnimationKey_KeyType m_eBirthRateKeyType;       // 10
		std::uint8_t           m_ucBirthRateSize;         // 14
		std::uint8_t           pad15[0x3];                // 15
		std::uint32_t          m_uiNumEmitterActiveKeys;  // 18
		NiBoolKey*             m_pkEmitterActiveKeys;     // 1C
		NiAnimationKey_KeyType m_eEmitterActiveKeyType;   // 20
		std::uint8_t           m_ucEmitterActiveSize;     // 24?
		std::uint8_t           pad25[0x3];                // 25
	};
}
