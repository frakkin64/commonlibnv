#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSCellNumericIDArrayMap :
		public NiTMap<std::uint32_t, BSSimpleArray<std::uint32_t, 1024>*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSCellNumericIDArrayMap };
		static constexpr auto VTABLE{ VTABLE::BGSCellNumericIDArrayMap };

		// override (NiTMap<std::uint32_t, BSSimpleArray<std::uint32_t, 1024>*>)
		virtual ~BGSCellNumericIDArrayMap() = default;  // 00

		BGSCellNumericIDArrayMap* ctor()
		{
			using func_t = BGSCellNumericIDArrayMap*(__thiscall*)(BGSCellNumericIDArrayMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSCellNumericIDArrayMap::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BGSCellNumericIDArrayMap) == 0x10);
}
