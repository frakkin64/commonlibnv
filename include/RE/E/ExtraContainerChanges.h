#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class InventoryChanges;

	class ExtraContainerChanges :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraContainerChanges };
		static constexpr auto VTABLE{ VTABLE::ExtraContainerChanges };

		// override (BSExtraData)
		virtual ~ExtraContainerChanges() = default;  // 00

		// members
		InventoryChanges* pChanges;  // 0C
	};
	static_assert(sizeof(ExtraContainerChanges) == 0x10);
}
