#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESModel.h"

namespace RE
{
	class TESModelAnim :
		public TESModel  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESModelAnim };
		static constexpr auto VTABLE{ VTABLE::TESModelAnim };

		// override (TESModel)
		virtual ~TESModelAnim() = default;  // 04
	};
}
