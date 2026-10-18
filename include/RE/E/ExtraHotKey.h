#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraHotKey :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraHotKey };
		static constexpr auto VTABLE{ VTABLE::ExtraHotKey };

		// override (BSExtraData)
		virtual ~ExtraHotKey() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		char         chotkey;     // 0C
		std::uint8_t pad0D[0x3];  // 0D
	};
	static_assert(sizeof(ExtraHotKey) == 0x10);
}
