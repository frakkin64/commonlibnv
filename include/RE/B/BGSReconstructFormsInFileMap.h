#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSReconstructCellBlocksMap;
	class BGSReconstructFormsMap;
	class BGSReconstructWorldSpacesMap;
	class BGSReconstructedForms;
	class TESFile;
	class TESForm;
	class TESObjectCELL;
	class TESWorldSpace;

	class BGSReconstructFormsInFileMap :
		public NiTMap<std::uint32_t, BGSReconstructFormsMap*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReconstructFormsInFileMap };
		static constexpr auto VTABLE{ VTABLE::BGSReconstructFormsInFileMap };

		// override (NiTMap<std::uint32_t, BGSReconstructFormsMap*>)
		virtual ~BGSReconstructFormsInFileMap() = default;  // 00

		BGSReconstructFormsInFileMap* ctor()
		{
			using func_t = BGSReconstructFormsInFileMap*(__thiscall*)(BGSReconstructFormsInFileMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInFileMap::ctor };
			return func(this);
		}

		void AddForm(TESForm* apForm, std::uint32_t aiFlags)
		{
			using func_t = decltype(&BGSReconstructFormsInFileMap::AddForm);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInFileMap::AddForm };
			func(this, apForm, aiFlags);
		}

		void AddCellForm(TESObjectCELL* apCell, TESForm* apForm, std::uint32_t aiFormID, std::uint32_t aiFlags)
		{
			using func_t = void (BGSReconstructFormsInFileMap::*)(TESObjectCELL*, TESForm*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInFileMap::AddCellForm };
			func(this, apCell, apForm, aiFormID, aiFlags);
		}

		void AddCellForm(TESWorldSpace* apWorldSpace, std::int32_t aiCellX, std::int32_t aiCellY, TESForm* apForm, std::uint32_t aiFormID, std::uint32_t aiFlags)
		{
			using func_t = void (BGSReconstructFormsInFileMap::*)(TESWorldSpace*, std::int32_t, std::int32_t, TESForm*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInFileMap::AddCellForm_1 };
			func(this, apWorldSpace, aiCellX, aiCellY, apForm, aiFormID, aiFlags);
		}

		void ReconstructForms(TESFile* apFile, BGSReconstructedForms* apReconstructedForms)
		{
			using func_t = decltype(&BGSReconstructFormsInFileMap::ReconstructForms);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInFileMap::ReconstructForms };
			func(this, apFile, apReconstructedForms);
		}

	public:
		// members
		BGSReconstructCellBlocksMap*  pInteriorCells;  // 10
		BGSReconstructWorldSpacesMap* pWorldSpaces;    // 14
		std::uint32_t                 iCount;          // 18
	};
	static_assert(sizeof(BGSReconstructFormsInFileMap) == 0x1C);
}
