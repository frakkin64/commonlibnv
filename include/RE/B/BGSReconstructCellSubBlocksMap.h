#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSReconstructCellsMap;

	class BGSReconstructCellSubBlocksMap :
		public NiTMap<std::uint32_t, BGSReconstructCellsMap*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReconstructCellSubBlocksMap };
		static constexpr auto VTABLE{ VTABLE::BGSReconstructCellSubBlocksMap };

		// override (NiTMap<std::uint32_t, BGSReconstructCellsMap*>)
		virtual ~BGSReconstructCellSubBlocksMap() = default;  // 00

		BGSReconstructCellSubBlocksMap* ctor()
		{
			using func_t = BGSReconstructCellSubBlocksMap*(__thiscall*)(BGSReconstructCellSubBlocksMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructCellSubBlocksMap::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BGSReconstructCellSubBlocksMap) == 0x10);
}
