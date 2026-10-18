#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraLeveledItem :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLeveledItem };
		static constexpr auto VTABLE{ VTABLE::ExtraLeveledItem };

		// override (BSExtraData)
		virtual ~ExtraLeveledItem() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		std::int32_t iIndex;      // 0C
		bool         bdefault;    // 10
		std::uint8_t pad11[0x3];  // 11
	};
	static_assert(sizeof(ExtraLeveledItem) == 0x14);
}
