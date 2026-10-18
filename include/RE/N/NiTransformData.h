#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiFloatKey;
	class NiPosKey;
	class NiRotKey;

	class NiTransformData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTransformData };
		static constexpr auto VTABLE{ VTABLE::NiTransformData };

		// members
		std::uint16_t          m_usNumRotKeys;    // 08
		std::uint16_t          m_usNumPosKeys;    // 0A
		std::uint16_t          m_usNumScaleKeys;  // 0C
		std::uint16_t          pad0E;             // 0E
		NiAnimationKey_KeyType m_eRotType;        // 10
		NiAnimationKey_KeyType m_ePosType;        // 14
		NiAnimationKey_KeyType m_eScaleType;      // 18
		std::uint8_t           m_ucRotSize;       // 1C
		std::uint8_t           m_ucPosSize;       // 1D
		std::uint8_t           m_ucScaleSize;     // 1E
		std::uint8_t           pad1F;             // 1F
		NiRotKey*              m_pkRotKeys;       // 20
		NiPosKey*              m_pkPosKeys;       // 24
		NiFloatKey*            m_pkScaleKeys;     // 28
	};
}
