#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSReconstructCellSubBlocksMap;
	class BGSReconstructFormsMap;
	class TESForm;
	class TESObjectCELL;
	class TESWorldSpace;

	class BGSReconstructCellBlocksMap :
		public NiTMap<std::uint32_t, BGSReconstructCellSubBlocksMap*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReconstructCellBlocksMap };
		static constexpr auto VTABLE{ VTABLE::BGSReconstructCellBlocksMap };

		// override (NiTMap<std::uint32_t, BGSReconstructCellSubBlocksMap*>)
		virtual ~BGSReconstructCellBlocksMap() = default;  // 00

		BGSReconstructCellBlocksMap* ctor(bool abExteriors)
		{
			using func_t = BGSReconstructCellBlocksMap*(__thiscall*)(BGSReconstructCellBlocksMap*, bool);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructCellBlocksMap::ctor };
			return func(this, abExteriors);
		}

		void AddCellForm(TESObjectCELL* apCell, TESForm* apForm, std::uint32_t aiFormID, std::uint32_t aiFlags)
		{
			using func_t = void (BGSReconstructCellBlocksMap::*)(TESObjectCELL*, TESForm*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructCellBlocksMap::AddCellForm };
			func(this, apCell, apForm, aiFormID, aiFlags);
		}

		void AddCellForm(TESWorldSpace* apWorldSpace, std::int32_t aiCellX, std::int32_t aiCellY, TESForm* apForm, std::uint32_t aiFormID, std::uint32_t aiFlags)
		{
			using func_t = void (BGSReconstructCellBlocksMap::*)(TESWorldSpace*, std::int32_t, std::int32_t, TESForm*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructCellBlocksMap::AddCellForm_1 };
			func(this, apWorldSpace, aiCellX, aiCellY, apForm, aiFormID, aiFlags);
		}

	public:
		// members
		BGSReconstructFormsMap* pPersistentCell;  // 10
		bool                    bExteriors;       // 14
		std::uint8_t            pad15[0x3];       // 15
	};
	static_assert(sizeof(BGSReconstructCellBlocksMap) == 0x18);
}
