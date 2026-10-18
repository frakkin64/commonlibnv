#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSReconstructFormsMap;
	class TESForm;
	class TESObjectCELL;

	class BGSReconstructCellsMap :
		public NiTMap<std::uint32_t, BGSReconstructFormsMap*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReconstructCellsMap };
		static constexpr auto VTABLE{ VTABLE::BGSReconstructCellsMap };

		// override (NiTMap<std::uint32_t, BGSReconstructFormsMap*>)
		virtual ~BGSReconstructCellsMap() = default;  // 00

		BGSReconstructCellsMap* ctor()
		{
			using func_t = BGSReconstructCellsMap*(__thiscall*)(BGSReconstructCellsMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructCellsMap::ctor };
			return func(this);
		}

		void AddCellForm(TESObjectCELL* apCell, TESForm* apForm, std::uint32_t aiFormID, std::uint32_t aiFlags)
		{
			using func_t = decltype(&BGSReconstructCellsMap::AddCellForm);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructCellsMap::AddCellForm };
			func(this, apCell, apForm, aiFormID, aiFlags);
		}
	};
	static_assert(sizeof(BGSReconstructCellsMap) == 0x10);
}
