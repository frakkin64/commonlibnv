#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESAmmo;

	class ExtraAmmo :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraAmmo };
		static constexpr auto VTABLE{ VTABLE::ExtraAmmo };

		// override (BSExtraData)
		virtual ~ExtraAmmo() = default;                         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESAmmo*     pAmmo;   // 0C
		std::int32_t iCount;  // 10
	};
	static_assert(sizeof(ExtraAmmo) == 0x14);
}
