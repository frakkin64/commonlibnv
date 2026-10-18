#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SANDBOX_PROCEDURE.h"

namespace RE
{
	class TESObjectREFR;

	class SandBoxChoiceListItem
	{
	public:
		SandBoxChoiceListItem* ctor(TESObjectREFR* aptarget, SANDBOX_PROCEDURE aeProcedure, std::int32_t aiScore)
		{
			using func_t = SandBoxChoiceListItem*(__thiscall*)(SandBoxChoiceListItem*, TESObjectREFR*, SANDBOX_PROCEDURE, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::SandBoxChoiceListItem::ctor };
			return func(this, aptarget, aeProcedure, aiScore);
		}

	public:
		// members
		TESObjectREFR*    pTarget;     // 00
		SANDBOX_PROCEDURE eProcedure;  // 04
		std::int32_t      iBaseScore;  // 08
		std::int32_t      iFullScore;  // 0C
	};
	static_assert(sizeof(SandBoxChoiceListItem) == 0x10);
}
