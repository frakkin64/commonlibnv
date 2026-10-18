#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/N/NiFormArray.h"

namespace RE
{
	class IDLE_ANIM_ROOT
	{
	public:
		IDLE_ANIM_ROOT* ctor(char const* apIdleDir)
		{
			using func_t = IDLE_ANIM_ROOT*(__thiscall*)(IDLE_ANIM_ROOT*, char const*);
			static REL::Relocation<func_t> func{ Offsets::IDLE_ANIM_ROOT::ctor };
			return func(this, apIdleDir);
		}

		void AddRootFilenameList(BSSimpleList<char const*>* apList)
		{
			using func_t = decltype(&IDLE_ANIM_ROOT::AddRootFilenameList);
			static REL::Relocation<func_t> func{ Offsets::IDLE_ANIM_ROOT::AddRootFilenameList };
			func(this, apList);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(IDLE_ANIM_ROOT*);
			static REL::Relocation<func_t> func{ Offsets::IDLE_ANIM_ROOT::dtor };
			func(this);
		}

	public:
		// members
		NiFormArray                IdleArray;        // 00
		NiFormArray                LooseIdleArray;   // 18
		BSStringT<char>            IdleDir;          // 30
		BSSimpleList<char const*>* pKFFileList[12];  // 38
	};
	static_assert(sizeof(IDLE_ANIM_ROOT) == 0x68);
}
