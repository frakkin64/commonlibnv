#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class MenuTopic;

	class ExtraInfoGeneralTopic :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraInfoGeneralTopic };
		static constexpr auto VTABLE{ VTABLE::ExtraInfoGeneralTopic };

		// override (BSExtraData)
		virtual ~ExtraInfoGeneralTopic() = default;  // 00

		// members
		MenuTopic* pInfoGen;  // 0C
	};
	static_assert(sizeof(ExtraInfoGeneralTopic) == 0x10);
}
