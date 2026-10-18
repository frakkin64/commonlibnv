#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraIgnoredBySandbox :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraIgnoredBySandbox };
		static constexpr auto VTABLE{ VTABLE::ExtraIgnoredBySandbox };

		// override (BSExtraData)
		virtual ~ExtraIgnoredBySandbox() = default;  // 00
	};
	static_assert(sizeof(ExtraIgnoredBySandbox) == 0xC);
}
