#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBSplineBasis.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiBSplineBasisData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineBasisData };
		static constexpr auto VTABLE{ VTABLE::NiBSplineBasisData };

		// members
		NiBSplineBasis<float, 3> m_kBasisDegree3;  // 08?
	};
}
