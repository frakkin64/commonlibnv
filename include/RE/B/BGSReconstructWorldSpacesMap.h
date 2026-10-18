#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSReconstructCellBlocksMap;
	class TESForm;
	class TESObjectCELL;

	class BGSReconstructWorldSpacesMap :
		public NiTMap<std::uint32_t, BGSReconstructCellBlocksMap*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReconstructWorldSpacesMap };
		static constexpr auto VTABLE{ VTABLE::BGSReconstructWorldSpacesMap };

		// override (NiTMap<std::uint32_t, BGSReconstructCellBlocksMap*>)
		virtual ~BGSReconstructWorldSpacesMap() = default;  // 00

		BGSReconstructWorldSpacesMap* ctor()
		{
			using func_t = BGSReconstructWorldSpacesMap*(__thiscall*)(BGSReconstructWorldSpacesMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructWorldSpacesMap::ctor };
			return func(this);
		}

		void AddCellForm(TESObjectCELL* apCell, TESForm* apForm, std::uint32_t aiFormID, std::uint32_t aiFlags)
		{
			using func_t = decltype(&BGSReconstructWorldSpacesMap::AddCellForm);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructWorldSpacesMap::AddCellForm };
			func(this, apCell, apForm, aiFormID, aiFlags);
		}
	};
	static_assert(sizeof(BGSReconstructWorldSpacesMap) == 0x10);
}
