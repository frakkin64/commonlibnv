#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraScale :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraScale };
		static constexpr auto VTABLE{ VTABLE::ExtraScale };

		// override (BSExtraData)
		virtual ~ExtraScale() = default;                        // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		float fScale;  // 0C
	};
	static_assert(sizeof(ExtraScale) == 0x10);
}
