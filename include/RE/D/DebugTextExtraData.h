#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiNode;

	class DebugTextExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DebugTextExtraData };
		static constexpr auto VTABLE{ VTABLE::DebugTextExtraData };

		// override (NiExtraData)
		virtual ~DebugTextExtraData() = default;  // 00

		// members
		NiNode*         pBillboard;  // 0C
		BSStringT<char> xString;     // 10
		std::int32_t    iHeight;     // 18
		std::int32_t    iOldCenter;  // 1C
	};
	static_assert(sizeof(DebugTextExtraData) == 0x20);
}
