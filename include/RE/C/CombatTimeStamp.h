#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;

	class CombatTimeStamp
	{
	public:
		CombatTimeStamp* ctor()
		{
			using func_t = CombatTimeStamp*(__thiscall*)(CombatTimeStamp*);
			static REL::Relocation<func_t> func{ Offsets::CombatTimeStamp::ctor };
			return func(this);
		}

		void operator_float()
		{
			using func_t = decltype(&CombatTimeStamp::operator_float);
			static REL::Relocation<func_t> func{ Offsets::CombatTimeStamp::operator_float };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatTimeStamp::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatTimeStamp::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatTimeStamp::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatTimeStamp::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		float fTimeStamp;  // 00
	};
	static_assert(sizeof(CombatTimeStamp) == 0x4);
}
