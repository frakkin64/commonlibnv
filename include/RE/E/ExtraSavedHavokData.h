#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraSavedHavokData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSavedHavokData };
		static constexpr auto VTABLE{ VTABLE::ExtraSavedHavokData };

		// override (BSExtraData)
		virtual ~ExtraSavedHavokData() = default;  // 00

		// members
		char* pHavokBuffer;  // 0C
	};
	static_assert(sizeof(ExtraSavedHavokData) == 0x10);
}
