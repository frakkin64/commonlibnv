#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESWaterForm;

	class ExtraCellWaterType :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCellWaterType };
		static constexpr auto VTABLE{ VTABLE::ExtraCellWaterType };

		// override (BSExtraData)
		virtual ~ExtraCellWaterType() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESWaterForm* pWater;  // 0C
	};
	static_assert(sizeof(ExtraCellWaterType) == 0x10);
}
