#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESModel.h"

namespace RE
{
	class TESModelTree :
		public TESModel  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESModelTree };
		static constexpr auto VTABLE{ VTABLE::TESModelTree };

		// override (TESModel)
		virtual ~TESModelTree() = default;                    // 04
		virtual void SetModel(char const* apModel) override;  // 06
	};
}
