#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraRadius :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRadius };
		static constexpr auto VTABLE{ VTABLE::ExtraRadius };

		// override (BSExtraData)
		virtual ~ExtraRadius() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		float fRadius;  // 0C
	};
	static_assert(sizeof(ExtraRadius) == 0x10);
}
