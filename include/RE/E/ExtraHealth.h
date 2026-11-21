#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraHealth :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraHealth };
		static constexpr auto VTABLE{ VTABLE::ExtraHealth };

		// override (BSExtraData)
		virtual ~ExtraHealth() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		float fHealth;  // 0C
	};
	static_assert(sizeof(ExtraHealth) == 0x10);
}
