#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraRefractionProperty :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRefractionProperty };
		static constexpr auto VTABLE{ VTABLE::ExtraRefractionProperty };

		// override (BSExtraData)
		virtual ~ExtraRefractionProperty() = default;  // 00

		// members
		float fRefractionPower;  // 0C
	};
	static_assert(sizeof(ExtraRefractionProperty) == 0x10);
}
