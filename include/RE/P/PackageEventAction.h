#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PACK_EVENT_ACTION_TYPE.h"

namespace RE
{
	class Script;
	class TESFile;
	class TESForm;
	class TESIdleForm;
	class TESTopic;

	class PackageEventAction
	{
	public:
		PackageEventAction* ctor()
		{
			using func_t = PackageEventAction*(__thiscall*)(PackageEventAction*);
			static REL::Relocation<func_t> func{ Offsets::PackageEventAction::ctor };
			return func(this);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&PackageEventAction::Load);
			static REL::Relocation<func_t> func{ Offsets::PackageEventAction::Load };
			func(this, apFile);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&PackageEventAction::InitItem);
			static REL::Relocation<func_t> func{ Offsets::PackageEventAction::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		TESIdleForm*           pIdle;          // 00
		Script*                pResultScript;  // 04
		TESTopic*              pTopic;         // 08
		PACK_EVENT_ACTION_TYPE eType;          // 0C
	};
}
