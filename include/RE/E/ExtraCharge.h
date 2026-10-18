#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraCharge :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCharge };
		static constexpr auto VTABLE{ VTABLE::ExtraCharge };

		// override (BSExtraData)
		virtual ~ExtraCharge() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		float fCharge;  // 0C
	};
	static_assert(sizeof(ExtraCharge) == 0x10);
}
