#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESCondition.h"
#include "RE/T/TeleportPath.h"

namespace RE
{
	class TESForm;
	class TESObjectREFR;

	class TESQuestTarget
	{
	public:
		TESQuestTarget* ctor()
		{
			using func_t = TESQuestTarget*(__thiscall*)(TESQuestTarget*);
			static REL::Relocation<func_t> func{ Offsets::TESQuestTarget::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESQuestTarget*);
			static REL::Relocation<func_t> func{ Offsets::TESQuestTarget::dtor };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESQuestTarget::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESQuestTarget::InitItem };
			func(this, apOwner);
		}

		TESObjectREFR* GetReference(bool abAllowPickUpActor)
		{
			using func_t = decltype(&TESQuestTarget::GetReference);
			static REL::Relocation<func_t> func{ Offsets::TESQuestTarget::GetReference };
			return func(this, abAllowPickUpActor);
		}

	public:
		// members
		std::uint8_t   cFlags;         // 00
		std::uint8_t   pad01[0x3];     // 01
		TESCondition   objConditions;  // 04
		TESObjectREFR* m_pTargetRef;   // 0C
		TeleportPath   m_TargetPath;   // 10
	};
	static_assert(sizeof(TESQuestTarget) == 0x48);
}
