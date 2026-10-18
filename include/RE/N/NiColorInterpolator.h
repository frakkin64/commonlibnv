#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiKeyBasedInterpolator.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiColorData;

	class NiColorInterpolator :
		public NiKeyBasedInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiColorInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiColorInterpolator };

		// members
		NiColorA               m_kColorValue;  // 0C
		NiPointer<NiColorData> m_spColorData;  // 1C
		std::uint32_t          m_uiLastIdx;    // 20?
	};
}
