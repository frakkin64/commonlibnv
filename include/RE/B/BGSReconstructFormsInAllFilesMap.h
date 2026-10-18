#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSReconstructedForms.h"
#include "RE/B/BSSimpleList.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSReconstructFormsInFileMap;
	class ReconstructFormData;
	class TESFile;
	class TESForm;
	class TESObjectCELL;
	class TESWorldSpace;

	class BGSReconstructFormsInAllFilesMap :
		public NiTMap<TESFile*, BGSReconstructFormsInFileMap*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReconstructFormsInAllFilesMap };
		static constexpr auto VTABLE{ VTABLE::BGSReconstructFormsInAllFilesMap };

		// override (NiTMap<TESFile*, BGSReconstructFormsInFileMap*>)
		virtual ~BGSReconstructFormsInAllFilesMap() = default;  // 00

		BGSReconstructFormsInAllFilesMap* ctor()
		{
			using func_t = BGSReconstructFormsInAllFilesMap*(__thiscall*)(BGSReconstructFormsInAllFilesMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInAllFilesMap::ctor };
			return func(this);
		}

		void AddForm(TESForm* apForm, std::uint32_t aiFlags)
		{
			using func_t = decltype(&BGSReconstructFormsInAllFilesMap::AddForm);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInAllFilesMap::AddForm };
			func(this, apForm, aiFlags);
		}

		void AddReference(TESObjectCELL* apParentCell, std::uint32_t aiRefID, std::uint32_t aiFlags)
		{
			using func_t = void (BGSReconstructFormsInAllFilesMap::*)(TESObjectCELL*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInAllFilesMap::AddReference };
			func(this, apParentCell, aiRefID, aiFlags);
		}

		void AddReference(TESWorldSpace* apWorldSpace, std::int32_t aiCellX, std::int32_t aiCellY, std::uint32_t aiRefID, std::uint32_t aiFlags)
		{
			using func_t = void (BGSReconstructFormsInAllFilesMap::*)(TESWorldSpace*, std::int32_t, std::int32_t, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInAllFilesMap::AddReference_1 };
			func(this, apWorldSpace, aiCellX, aiCellY, aiRefID, aiFlags);
		}

		void ReconstructForms()
		{
			using func_t = decltype(&BGSReconstructFormsInAllFilesMap::ReconstructForms);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInAllFilesMap::ReconstructForms };
			func(this);
		}

	protected:
		void InitReconstructedForm(ReconstructFormData* apFormData)
		{
			using func_t = decltype(&BGSReconstructFormsInAllFilesMap::InitReconstructedForm);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInAllFilesMap::InitReconstructedForm };
			func(this, apFormData);
		}

		TESFile* GetFileForFormID(BSSimpleList<TESFile*>* apFileList, std::uint32_t aiFormID)
		{
			using func_t = decltype(&BGSReconstructFormsInAllFilesMap::GetFileForFormID);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsInAllFilesMap::GetFileForFormID };
			return func(this, apFileList, aiFormID);
		}

	public:
		// members
		BGSReconstructedForms ReconstructedForms;  // 10
		std::uint32_t         iCount;              // 30
	};
	static_assert(sizeof(BGSReconstructFormsInAllFilesMap) == 0x34);
}
