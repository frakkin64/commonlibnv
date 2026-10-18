#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;

	class CombatTimer
	{
	public:
		float ElapsedTime()
		{
			using func_t = decltype(&CombatTimer::ElapsedTime);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::ElapsedTime };
			return func(this);
		}

		float GetTargetTime()
		{
			using func_t = decltype(&CombatTimer::GetTargetTime);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::GetTargetTime };
			return func(this);
		}

		void Reset(float afTargetTime)
		{
			using func_t = decltype(&CombatTimer::Reset);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::Reset };
			func(this, afTargetTime);
		}

		bool Check()
		{
			using func_t = decltype(&CombatTimer::Check);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::Check };
			return func(this);
		}

		CombatTimer* ctor()
		{
			using func_t = CombatTimer*(__thiscall*)(CombatTimer*);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::ctor };
			return func(this);
		}

		void ForceTrigger()
		{
			using func_t = decltype(&CombatTimer::ForceTrigger);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::ForceTrigger };
			func(this);
		}

		bool IsSet()
		{
			using func_t = decltype(&CombatTimer::IsSet);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::IsSet };
			return func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatTimer::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatTimer::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatTimer::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		float fStartTime;   // 00
		float fTargetTime;  // 04
	};
}
