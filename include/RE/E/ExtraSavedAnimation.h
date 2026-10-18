#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraSavedAnimation :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSavedAnimation };
		static constexpr auto VTABLE{ VTABLE::ExtraSavedAnimation };

		// override (BSExtraData)
		virtual ~ExtraSavedAnimation() = default;  // 00

		// members
		char* pAnimationBuffer;  // 0C
	};
	static_assert(sizeof(ExtraSavedAnimation) == 0x10);
}
