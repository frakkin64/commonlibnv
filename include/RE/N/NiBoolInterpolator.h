#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiKeyBasedInterpolator.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiBoolData;

	class NiBoolInterpolator :
		public NiKeyBasedInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBoolInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBoolInterpolator };

		// members
		std::uint8_t          m_bBoolValue;  // 0C
		std::uint8_t          pad0D[0x3];    // 0D
		NiPointer<NiBoolData> m_spBoolData;  // 10
		std::uint32_t         m_uiLastIdx;   // 14?
	};
}
