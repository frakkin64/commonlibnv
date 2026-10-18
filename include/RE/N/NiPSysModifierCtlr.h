#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiSingleInterpController.h"

namespace RE
{
	class NiPSysModifier;

	class NiPSysModifierCtlr :
		public NiSingleInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysModifierCtlr };
		static constexpr auto VTABLE{ VTABLE::NiPSysModifierCtlr };

		// add
		virtual void Unk_3B();  // 3B

		// members
		NiFixedString   m_kModifierName;  // 38
		NiPSysModifier* m_pkModifier;     // 3C
	};
}
