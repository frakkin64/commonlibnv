#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiInterpController.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiInterpolator;

	class NiSingleInterpController :
		public NiInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSingleInterpController };
		static constexpr auto VTABLE{ VTABLE::NiSingleInterpController };

		// add
		virtual void Unk_3A();  // 3A

		// members
		NiPointer<NiInterpolator> m_spInterpolator;  // 34
	};
}
