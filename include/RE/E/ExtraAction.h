#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraAction :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraAction };
		static constexpr auto VTABLE{ VTABLE::ExtraAction };

		// override (BSExtraData)
		virtual ~ExtraAction() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		std::uint8_t   eAction;     // 0C
		std::uint8_t   pad0D[0x3];  // 0D
		TESObjectREFR* pActionRef;  // 10
	};
	static_assert(sizeof(ExtraAction) == 0x14);
}
