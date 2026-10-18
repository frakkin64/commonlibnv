#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BSSimpleList.h"
#include "RE/E/ENUM_FORM_ID.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSSaveFormBuffer;
	class BSFile;
	class MiscSaveStat;
	class SavedFormData;
	class TESForm;

	class BGSSaveLoadStatsMap :
		public NiTMap<ENUM_FORM_ID, BSSimpleList<SavedFormData*>*>
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSaveLoadStatsMap };
		static constexpr auto VTABLE{ VTABLE::BGSSaveLoadStatsMap };

		// override (NiTMap<ENUM_FORM_ID, BSSimpleList<SavedFormData*>*>)
		virtual ~BGSSaveLoadStatsMap() = default;  // 00

	protected:
		void BuildStatsMap()
		{
			using func_t = decltype(&BGSSaveLoadStatsMap::BuildStatsMap);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadStatsMap::BuildStatsMap };
			func(this);
		}

		void OutputStats()
		{
			using func_t = decltype(&BGSSaveLoadStatsMap::OutputStats);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadStatsMap::OutputStats };
			func(this);
		}

		void SaveForm(TESForm* apForm, BGSChangeFlags aiChangeFlags, BGSSaveFormBuffer* apSaveFormBuffer)
		{
			using func_t = decltype(&BGSSaveLoadStatsMap::SaveForm);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadStatsMap::SaveForm };
			func(this, apForm, aiChangeFlags, apSaveFormBuffer);
		}

		void WriteFile(char const* apString)
		{
			using func_t = decltype(&BGSSaveLoadStatsMap::WriteFile);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadStatsMap::WriteFile };
			func(this, apString);
		}

	public:
		// members
		BSSimpleList<MiscSaveStat*> MiscSaveStats;  // 10
		BSFile*                     pFile;          // 18
	};
}
