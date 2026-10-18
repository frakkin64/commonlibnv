#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class ActorLockData;
	class REFR_LOCK;
	class TESForm;
	class TESGlobal;
	class TESObjectCELL;
	class TESObjectREFR;

	class DoorLock
	{
	public:
		DoorLock* ctor(TESObjectREFR* apDoorRef)
		{
			using func_t = DoorLock*(__thiscall*)(DoorLock*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::DoorLock::ctor };
			return func(this, apDoorRef);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(DoorLock*);
			static REL::Relocation<func_t> func{ Offsets::DoorLock::dtor };
			func(this);
		}

		void SetFromDoorRef(TESObjectREFR* apDoorRef)
		{
			using func_t = decltype(&DoorLock::SetFromDoorRef);
			static REL::Relocation<func_t> func{ Offsets::DoorLock::SetFromDoorRef };
			func(this, apDoorRef);
		}

		bool CanActorIgnoreDoorLock(Actor* apActor, bool abactivate, bool abmovement) const
		{
			using func_t = bool (DoorLock::*)(Actor*, bool, bool) const;
			static REL::Relocation<func_t> func{ Offsets::DoorLock::CanActorIgnoreDoorLock };
			return func(this, apActor, abactivate, abmovement);
		}

		bool IsAnOwner(Actor* apActor, bool abUseFaction) const
		{
			using func_t = decltype(&DoorLock::IsAnOwner);
			static REL::Relocation<func_t> func{ Offsets::DoorLock::IsAnOwner };
			return func(this, apActor, abUseFaction);
		}

		bool CanActorIgnoreDoorLock(ActorLockData const* apActorLockData, bool abmovement) const
		{
			using func_t = bool (DoorLock::*)(ActorLockData const*, bool) const;
			static REL::Relocation<func_t> func{ Offsets::DoorLock::CanActorIgnoreDoorLock_1 };
			return func(this, apActorLockData, abmovement);
		}

		bool CanActorUnlockDoorLock(ActorLockData const* apActorLockData, TESObjectREFR* apDoorRef, bool& abOutMustPick) const
		{
			using func_t = decltype(&DoorLock::CanActorUnlockDoorLock);
			static REL::Relocation<func_t> func{ Offsets::DoorLock::CanActorUnlockDoorLock };
			return func(this, apActorLockData, apDoorRef, abOutMustPick);
		}

	public:
		// members
		TESObjectCELL* pDoorCell;          // 00
		TESObjectCELL* pTeleportDoorCell;  // 04
		REFR_LOCK*     pLockData;          // 08
		TESForm*       pOwnershipForm;     // 0C
		std::int32_t   iOwnershipRank;     // 10
		TESGlobal*     pOwnershipGlobal;   // 14
	};
}
