#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiSingleInterpController.h"

namespace RE
{
	class NiExtraData;

	class NiExtraDataController :
		public NiSingleInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiExtraDataController };
		static constexpr auto VTABLE{ VTABLE::NiExtraDataController };

		// members
		NiFixedString          m_kExtraDataName;  // 38
		NiPointer<NiExtraData> m_spExtraData;     // 3C
	};
}
