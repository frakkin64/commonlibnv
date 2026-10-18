#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCustomSplatterData.h"
#include "RE/N/NiExtraData.h"

namespace RE
{
	class BSCustomSplatterExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSCustomSplatterExtraData };
		static constexpr auto VTABLE{ VTABLE::BSCustomSplatterExtraData };

		// override (NiExtraData)
		virtual ~BSCustomSplatterExtraData() = default;  // 00

		BSCustomSplatterExtraData* ctor(BSCustomSplatterData const& aSplatterData)
		{
			using func_t = BSCustomSplatterExtraData*(__thiscall*)(BSCustomSplatterExtraData*, BSCustomSplatterData const&);
			static REL::Relocation<func_t> func{ Offsets::BSCustomSplatterExtraData::ctor };
			return func(this, aSplatterData);
		}

	public:
		// members
		BSCustomSplatterData SplatterData;  // 0C
	};
}
