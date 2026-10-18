#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESForm;

	class ExtraEmittanceSource :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraEmittanceSource };
		static constexpr auto VTABLE{ VTABLE::ExtraEmittanceSource };

		// override (BSExtraData)
		virtual ~ExtraEmittanceSource() = default;              // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESForm* pSource;  // 0C
	};
	static_assert(sizeof(ExtraEmittanceSource) == 0x10);
}
