#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSCellNumericIDArrayMap.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class BGSReconstructFormsInAllFilesMap;
	class TESObjectCELL;

	class BGSSaveLoadReferencesMap
	{
	public:
		BGSSaveLoadReferencesMap* ctor()
		{
			using func_t = BGSSaveLoadReferencesMap*(__thiscall*)(BGSSaveLoadReferencesMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadReferencesMap::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSSaveLoadReferencesMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadReferencesMap::dtor };
			func(this);
		}

		void LoadReferencesForCell(TESObjectCELL* apCell, BGSReconstructFormsInAllFilesMap* apReconstructForms)
		{
			using func_t = decltype(&BGSSaveLoadReferencesMap::LoadReferencesForCell);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadReferencesMap::LoadReferencesForCell };
			func(this, apCell, apReconstructForms);
		}

		void LoadChangedReference(std::uint32_t aiRefID, BGSReconstructFormsInAllFilesMap* apReconstructForms)
		{
			using func_t = decltype(&BGSSaveLoadReferencesMap::LoadChangedReference);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadReferencesMap::LoadChangedReference };
			func(this, aiRefID, apReconstructForms);
		}

	public:
		// members
		NiTPointerMap<std::uint32_t, std::uint32_t>             MovedReferencesMap;       // 00
		BGSCellNumericIDArrayMap                                InteriorReferencesMap;    // 10
		NiTPointerMap<std::uint32_t, BGSCellNumericIDArrayMap*> WorldspaceReferencesMap;  // 20
	};
	static_assert(sizeof(BGSSaveLoadReferencesMap) == 0x30);
}
