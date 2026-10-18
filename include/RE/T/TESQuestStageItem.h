#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Q/QUEST_STAGE_ITEM_DATA.h"
#include "RE/S/Script.h"
#include "RE/T/TESCondition.h"

namespace RE
{
	class Date;
	class TESFile;
	class TESForm;
	class TESQuest;
	class TESQuestStage;

	class TESQuestStageItem
	{
	public:
		TESQuestStageItem* ctor()
		{
			using func_t = TESQuestStageItem*(__thiscall*)(TESQuestStageItem*);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStageItem::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESQuestStageItem*);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStageItem::dtor };
			func(this);
		}

		bool Load(TESFile* apFile)
		{
			using func_t = decltype(&TESQuestStageItem::Load);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStageItem::Load };
			return func(this, apFile);
		}

		void InitItem(TESForm* apOwner, TESQuestStage* apItem)
		{
			using func_t = decltype(&TESQuestStageItem::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStageItem::InitItem };
			func(this, apOwner, apItem);
		}

		void Resolve(bool abAlwaysPass)
		{
			using func_t = decltype(&TESQuestStageItem::Resolve);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStageItem::Resolve };
			func(this, abAlwaysPass);
		}

		bool GetEndQuest()
		{
			using func_t = decltype(&TESQuestStageItem::GetEndQuest);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStageItem::GetEndQuest };
			return func(this);
		}

		char* GetLogEntry(TESForm* apOwner)
		{
			using func_t = decltype(&TESQuestStageItem::GetLogEntry);
			static REL::Relocation<func_t> func{ Offsets::TESQuestStageItem::GetLogEntry };
			return func(this, apOwner);
		}

	public:
		// members
		QUEST_STAGE_ITEM_DATA m_Data;          // 00
		std::uint8_t          pad01[0x3];      // 01
		TESCondition          objConditions;   // 04
		Script                cResultScript;   // 0C
		std::uint32_t         m_fileOffset;    // 60
		std::uint8_t          ucIndex;         // 64
		bool                  m_bHasLogEntry;  // 65
		std::uint16_t         pad66;           // 66
		Date*                 m_pLogDate;      // 68
		TESQuest*             m_pOwner;        // 6C
		TESQuest*             m_pNextQuest;    // 70
	};
	static_assert(sizeof(TESQuestStageItem) == 0x74);
}
