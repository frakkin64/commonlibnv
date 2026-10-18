#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ImpactSwap;

	class ExtraCellImpactSwap :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCellImpactSwap };
		static constexpr auto VTABLE{ VTABLE::ExtraCellImpactSwap };

		// override (BSExtraData)
		virtual ~ExtraCellImpactSwap() = default;               // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		ImpactSwap* pImpactSwap;  // 0C
	};
	static_assert(sizeof(ExtraCellImpactSwap) == 0x10);
}
