#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class Animation;

	class ExtraAnim :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraAnim };
		static constexpr auto VTABLE{ VTABLE::ExtraAnim };

		// override (BSExtraData)
		virtual ~ExtraAnim() = default;  // 00

		// members
		Animation* pAnimation;  // 0C
	};
	static_assert(sizeof(ExtraAnim) == 0x10);
}
