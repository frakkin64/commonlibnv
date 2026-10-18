#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/C/CREATURE_SOUND_TYPE.h"

namespace RE
{
	class CREATURE_SOUND;
	class TESCreature;
	class TESFile;

	class CreatureSounds
	{
	public:
		void Save()
		{
			using func_t = decltype(&CreatureSounds::Save);
			static REL::Relocation<func_t> func{ Offsets::CreatureSounds::Save };
			func(this);
		}

		bool LoadCreatureSound(TESFile* apFile, CREATURE_SOUND_TYPE aeType, TESCreature* apOwner)
		{
			using func_t = decltype(&CreatureSounds::LoadCreatureSound);
			static REL::Relocation<func_t> func{ Offsets::CreatureSounds::LoadCreatureSound };
			return func(this, apFile, aeType, apOwner);
		}

	public:
		// members
		BSSimpleList<CREATURE_SOUND*>* pSoundListArray[22];  // 00
	};
	static_assert(sizeof(CreatureSounds) == 0x58);
}
