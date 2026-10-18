#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class SeenData;

	class ExtraSeenData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSeenData };
		static constexpr auto VTABLE{ VTABLE::ExtraSeenData };

		// override (BSExtraData)
		virtual ~ExtraSeenData() = default;  // 00

		// members
		SeenData* pSeenData;  // 0C
	};
	static_assert(sizeof(ExtraSeenData) == 0x10);
}
