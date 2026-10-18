#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSplatterData.h"
#include "RE/N/NiExtraData.h"

namespace RE
{
	class BSSplatterExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSplatterExtraData };
		static constexpr auto VTABLE{ VTABLE::BSSplatterExtraData };

		// override (NiExtraData)
		virtual ~BSSplatterExtraData() = default;  // 00

		BSSplatterExtraData* ctor(BSSplatterData const& aSplatterData)
		{
			using func_t = BSSplatterExtraData*(__thiscall*)(BSSplatterExtraData*, BSSplatterData const&);
			static REL::Relocation<func_t> func{ Offsets::BSSplatterExtraData::ctor };
			return func(this, aSplatterData);
		}

	public:
		// members
		BSSplatterData SplatterData;  // 0C
	};
	static_assert(sizeof(BSSplatterExtraData) == 0x1C);
}
