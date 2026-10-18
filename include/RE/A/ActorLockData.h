#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class InventoryChanges;
	class TESActorBase;

	class ActorLockData
	{
	public:
		ActorLockData* ctor(Actor* apActor)
		{
			using func_t = ActorLockData*(__thiscall*)(ActorLockData*, Actor*);
			static REL::Relocation<func_t> func{ Offsets::ActorLockData::ctor };
			return func(this, apActor);
		}

	public:
		// members
		TESActorBase*     pActorBase;  // 00
		InventoryChanges* pInventory;  // 04
		bool              bIsAlarmed;  // 08
		std::uint8_t      pad09[0x3];  // 09
	};
}
