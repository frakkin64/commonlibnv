#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class BGSSaveLoadFile;

	class BGSSaveLoadHistory
	{
	public:
		void AddNote(char const* a_arg1, ...)
		{
			using func_t = void(__cdecl*)(BGSSaveLoadHistory*, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadHistory::AddNote };
			func(this, a_arg1);
		}

		void AddNoteVarArgs(char const* apNote, char* aVarList)
		{
			using func_t = decltype(&BGSSaveLoadHistory::AddNoteVarArgs);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadHistory::AddNoteVarArgs };
			func(this, apNote, aVarList);
		}

		void Save(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadHistory::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadHistory::Save };
			func(this, apFile);
		}

		void Load(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadHistory::Load);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadHistory::Load };
			func(this, apFile);
		}

		void AddHistory(BGSSaveLoadHistory* apHistory)
		{
			using func_t = decltype(&BGSSaveLoadHistory::AddHistory);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadHistory::AddHistory };
			func(this, apHistory);
		}

	public:
		// members
		BSSimpleArray<char*, 1024> Notes;  // 00?
	};
}
