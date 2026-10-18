#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraRadiation :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRadiation };
		static constexpr auto VTABLE{ VTABLE::ExtraRadiation };

		// override (BSExtraData)
		virtual ~ExtraRadiation() = default;                    // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		float fRadiation;  // 0C
	};
	static_assert(sizeof(ExtraRadiation) == 0x10);
}
