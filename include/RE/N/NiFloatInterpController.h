#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiSingleInterpController.h"

namespace RE
{
	class NiFloatInterpController :
		public NiSingleInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatInterpController };
		static constexpr auto VTABLE{ VTABLE::NiFloatInterpController };

		// add
		virtual void Unk_3B();  // 3B
	};
}
