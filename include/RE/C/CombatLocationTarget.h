#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectREFR;

	class CombatLocationTarget
	{
	public:
		CombatLocationTarget* ctor()
		{
			using func_t = CombatLocationTarget*(__thiscall*)(CombatLocationTarget*);
			static REL::Relocation<func_t> func{ Offsets::CombatLocationTarget::ctor };
			return func(this);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatLocationTarget::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatLocationTarget::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatLocationTarget::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatLocationTarget::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatLocationTarget::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatLocationTarget::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		std::uint8_t     cType;         // 00
		bool             bNearTarget;   // 01
		std::uint16_t    pad02;         // 02
		TESObjectREFR*   pRef;          // 04
		BGSWorldLocation WorldLoc;      // 08
		float            fMinDistance;  // 18
		float            fMaxDistance;  // 1C
	};
	static_assert(sizeof(CombatLocationTarget) == 0x20);
}
