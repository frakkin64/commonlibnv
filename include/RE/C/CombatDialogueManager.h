#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CombatController;
	class TESObjectREFR;

	class CombatDialogueManager
	{
	public:
		bool StartDialogue(CombatController* apCombatController, std::int32_t aiDialogueType, std::int32_t aiDialogueTopic, bool abInterrupt)
		{
			using func_t = bool (CombatDialogueManager::*)(CombatController*, std::int32_t, std::int32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatDialogueManager::StartDialogue };
			return func(this, apCombatController, aiDialogueType, aiDialogueTopic, abInterrupt);
		}

		bool StartDialogue(TESObjectREFR* apSpeaker, TESObjectREFR* apTarget, std::int32_t aiDialogueType, std::int32_t aiDialogueTopic, bool abInterrupt, CombatController* apCombatController)
		{
			using func_t = bool (CombatDialogueManager::*)(TESObjectREFR*, TESObjectREFR*, std::int32_t, std::int32_t, bool, CombatController*);
			static REL::Relocation<func_t> func{ Offsets::CombatDialogueManager::StartDialogue_1 };
			return func(this, apSpeaker, apTarget, aiDialogueType, aiDialogueTopic, abInterrupt, apCombatController);
		}
	};
}
