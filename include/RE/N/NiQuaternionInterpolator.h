#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiKeyBasedInterpolator.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiQuaternion.h"

namespace RE
{
	class NiRotData;

	class NiQuaternionInterpolator :
		public NiKeyBasedInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiQuaternionInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiQuaternionInterpolator };

		// members
		NiQuaternion         m_kQuaternionValue;  // 0C
		NiPointer<NiRotData> m_spQuaternionData;  // 1C
		std::uint32_t        m_uiLastIdx;         // 20?
	};
}
