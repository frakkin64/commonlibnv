#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/Q/QUEST_OBJECTIVE_STATE.h"

namespace RE
{
	class TESFile;
	class TESQuest;
	class TESQuestTarget;

	class __declspec(novtable) BGSQuestObjective
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSQuestObjective };
		static constexpr auto VTABLE{ VTABLE::BGSQuestObjective };

		// add
		virtual ~BGSQuestObjective() = default;  // 00

		bool GetCompleted()
		{
			using func_t = decltype(&BGSQuestObjective::GetCompleted);
			static REL::Relocation<func_t> func{ Offsets::BGSQuestObjective::GetCompleted };
			return func(this);
		}

		bool GetDisplayed()
		{
			using func_t = decltype(&BGSQuestObjective::GetDisplayed);
			static REL::Relocation<func_t> func{ Offsets::BGSQuestObjective::GetDisplayed };
			return func(this);
		}

		BGSQuestObjective* ctor()
		{
			using func_t = BGSQuestObjective*(__thiscall*)(BGSQuestObjective*);
			static REL::Relocation<func_t> func{ Offsets::BGSQuestObjective::ctor };
			return func(this);
		}

		char const* GetDisplayText()
		{
			using func_t = decltype(&BGSQuestObjective::GetDisplayText);
			static REL::Relocation<func_t> func{ Offsets::BGSQuestObjective::GetDisplayText };
			return func(this);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&BGSQuestObjective::Load);
			static REL::Relocation<func_t> func{ Offsets::BGSQuestObjective::Load };
			func(this, apFile);
		}

		void SetState(QUEST_OBJECTIVE_STATE aeNewState)
		{
			using func_t = decltype(&BGSQuestObjective::SetState);
			static REL::Relocation<func_t> func{ Offsets::BGSQuestObjective::SetState };
			func(this, aeNewState);
		}

	public:
		// members
		std::uint32_t                 iIndex;        // 04
		BSStringT<char>               cDisplayText;  // 08
		TESQuest*                     pOwnerQuest;   // 10
		BSSimpleList<TESQuestTarget*> ListTargets;   // 14
		bool                          bInitialized;  // 1C
		std::uint8_t                  pad1D[0x3];    // 1D
		QUEST_OBJECTIVE_STATE         eState;        // 20
	};
	static_assert(sizeof(BGSQuestObjective) == 0x24);
}
