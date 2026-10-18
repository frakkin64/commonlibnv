#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class FACTION_RANK;

	class ExtraFactionChanges :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraFactionChanges };
		static constexpr auto VTABLE{ VTABLE::ExtraFactionChanges };

		// override (BSExtraData)
		virtual ~ExtraFactionChanges() = default;  // 00

		// members
		BSSimpleList<FACTION_RANK*>* pFactionChanges;  // 0C
	};
	static_assert(sizeof(ExtraFactionChanges) == 0x10);
}
