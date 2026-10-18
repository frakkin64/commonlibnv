#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSScrapArray.h"
#include "RE/O/OffsetData.h"

namespace RE
{
	class BGSOffsetDataArray :
		public BSScrapArray<OffsetData, 1024>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSOffsetDataArray };
		static constexpr auto VTABLE{ VTABLE::BGSOffsetDataArray };

		// override (BSScrapArray<OffsetData, 1024>)
		virtual ~BGSOffsetDataArray() = default;  // 00
	};
}
