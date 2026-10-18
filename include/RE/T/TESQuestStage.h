#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/Q/QUEST_STAGE_DATA.h"

namespace RE
{
	class TESFile;
	class TESQuestStageItem;

	class TESQuestStage
	{
	public:
		void Load(TESFile* apFile)
		{
			using func_t = decltype(&TESQuestStage::Load);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStage::Load };
			func(this, apFile);
		}

		void SetDone(bool abDone)
		{
			using func_t = decltype(&TESQuestStage::SetDone);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStage::SetDone };
			func(this, abDone);
		}

	public:
		// members
		QUEST_STAGE_DATA                 m_Data;          // 00
		std::uint16_t                    pad02;           // 02
		BSSimpleList<TESQuestStageItem*> listStageItems;  // 04?
	};
}
