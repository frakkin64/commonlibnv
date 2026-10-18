#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiAVObject;

	class NiPSysDragModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysDragModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysDragModifier };

		// members
		NiAVObject* m_pkDragObj;    // 18
		NiPoint3    m_kDragAxis;    // 1C
		float       m_fPercentage;  // 28
		float       m_fRange;       // 2C
		float       m_fFalloff;     // 30
	};
}
