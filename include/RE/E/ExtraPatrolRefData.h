#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class PatrolRefData;

	class ExtraPatrolRefData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPatrolRefData };
		static constexpr auto VTABLE{ VTABLE::ExtraPatrolRefData };

		// override (BSExtraData)
		virtual ~ExtraPatrolRefData() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		PatrolRefData* pPatrolData;  // 0C
	};
	static_assert(sizeof(ExtraPatrolRefData) == 0x10);
}
