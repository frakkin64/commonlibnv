#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESModel.h"

namespace RE
{
	class TESModelPSA :
		public TESModel  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESModelPSA };
		static constexpr auto VTABLE{ VTABLE::TESModelPSA };

		// override (TESModel)
		virtual ~TESModelPSA() = default;  // 04
	};
}
