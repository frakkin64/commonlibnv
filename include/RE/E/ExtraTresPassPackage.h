#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TrespassPackage;

	class ExtraTresPassPackage :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraTresPassPackage };
		static constexpr auto VTABLE{ VTABLE::ExtraTresPassPackage };

		// override (BSExtraData)
		virtual ~ExtraTresPassPackage() = default;  // 00

		// members
		TrespassPackage* pPack;  // 0C
	};
	static_assert(sizeof(ExtraTresPassPackage) == 0x10);
}
