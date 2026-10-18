#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESClimate;

	class ExtraCellClimate :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCellClimate };
		static constexpr auto VTABLE{ VTABLE::ExtraCellClimate };

		// override (BSExtraData)
		virtual ~ExtraCellClimate() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESClimate* pClimate;  // 0C
	};
	static_assert(sizeof(ExtraCellClimate) == 0x10);
}
