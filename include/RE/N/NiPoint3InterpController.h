#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiSingleInterpController.h"

namespace RE
{
	class NiPoint3InterpController :
		public NiSingleInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPoint3InterpController };
		static constexpr auto VTABLE{ VTABLE::NiPoint3InterpController };

		// add
		virtual void Unk_3B();  // 3B
	};
}
