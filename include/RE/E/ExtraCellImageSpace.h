#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESImageSpace;

	class ExtraCellImageSpace :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCellImageSpace };
		static constexpr auto VTABLE{ VTABLE::ExtraCellImageSpace };

		// override (BSExtraData)
		virtual ~ExtraCellImageSpace() = default;               // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESImageSpace* pImageSpace;  // 0C
	};
	static_assert(sizeof(ExtraCellImageSpace) == 0x10);
}
