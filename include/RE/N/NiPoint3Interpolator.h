#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiKeyBasedInterpolator.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiPosData;

	class NiPoint3Interpolator :
		public NiKeyBasedInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPoint3Interpolator };
		static constexpr auto VTABLE{ VTABLE::NiPoint3Interpolator };

		// members
		NiPoint3             m_kPoint3Value;  // 0C
		NiPointer<NiPosData> m_spPoint3Data;  // 18
		std::uint32_t        m_uiLastIdx;     // 1C?
	};
}
