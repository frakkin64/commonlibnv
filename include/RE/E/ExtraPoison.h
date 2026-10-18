#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class AlchemyItem;

	class ExtraPoison :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPoison };
		static constexpr auto VTABLE{ VTABLE::ExtraPoison };

		// override (BSExtraData)
		virtual ~ExtraPoison() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		AlchemyItem* pPoison;  // 0C
	};
	static_assert(sizeof(ExtraPoison) == 0x10);
}
