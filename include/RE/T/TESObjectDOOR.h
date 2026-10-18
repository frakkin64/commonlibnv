#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSOpenCloseForm.h"
#include "RE/B/BSSimpleList.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESMagicCasterForm.h"
#include "RE/T/TESMagicTargetForm.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"

namespace RE
{
	class Actor;
	class DoorLock;
	class NiAVObject;
	class TESBoundObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESSound;

	class TESObjectDOOR :
		public TESBoundAnimObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESScriptableForm,  // 5C
		public BGSDestructibleObjectForm,  // 68
		public BGSOpenCloseForm  // 70
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectDOOR };
		static constexpr auto VTABLE{ VTABLE::TESObjectDOOR };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kDOOR_ID };

		// override (TESBoundAnimObject)
		virtual ~TESObjectDOOR() = default;                                                                                                                              // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool ProcessBeforeSave() override;                                                                                                                       // 06
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;                                                                                              // 5E

		TESObjectDOOR* ctor()
		{
			using func_t = TESObjectDOOR*(__thiscall*)(TESObjectDOOR*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::ctor };
			return func(this);
		}

		bool IsMinimalUse()
		{
			using func_t = decltype(&TESObjectDOOR::IsMinimalUse);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::IsMinimalUse };
			return func(this);
		}

		bool IsSlidingDoor()
		{
			using func_t = decltype(&TESObjectDOOR::IsSlidingDoor);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::IsSlidingDoor };
			return func(this);
		}

		void HandlePlayerTeleport(TESObjectREFR* apActivatedDoor)
		{
			using func_t = decltype(&TESObjectDOOR::HandlePlayerTeleport);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::HandlePlayerTeleport };
			func(this, apActivatedDoor);
		}

		static void DoorTeleportPlayerArrivalCallback(std::int32_t aiArrivalData)
		{
			using func_t = decltype(&TESObjectDOOR::DoorTeleportPlayerArrivalCallback);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::DoorTeleportPlayerArrivalCallback };
			func(aiArrivalData);
		}

		static bool CanActorIgnoreLock(DoorLock* apDoorLock, Actor* apActor, TESObjectREFR* apDoorRef, bool abactivate, bool abmovement)
		{
			using func_t = bool(__cdecl*)(DoorLock*, Actor*, TESObjectREFR*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::CanActorIgnoreLock };
			return func(apDoorLock, apActor, apDoorRef, abactivate, abmovement);
		}

		static bool CanActorIgnoreLock(TESObjectREFR* apDoorRef, Actor* apActor, bool abactivate, bool abmovement)
		{
			using func_t = bool(__cdecl*)(TESObjectREFR*, Actor*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::CanActorIgnoreLock_1 };
			return func(apDoorRef, apActor, abactivate, abmovement);
		}

		static void AutoDoorCallback(NiAVObject* apDoor3D)
		{
			using func_t = decltype(&TESObjectDOOR::AutoDoorCallback);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::AutoDoorCallback };
			func(apDoor3D);
		}

		bool IsRandomDoor()
		{
			using func_t = decltype(&TESObjectDOOR::IsRandomDoor);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::IsRandomDoor };
			return func(this);
		}

		bool RandomlyTeleportsTo(TESForm* apSpace)
		{
			using func_t = decltype(&TESObjectDOOR::RandomlyTeleportsTo);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::RandomlyTeleportsTo };
			return func(this, apSpace);
		}

		static bool CanBeRandomTeleport(TESForm* apForm)
		{
			using func_t = decltype(&TESObjectDOOR::CanBeRandomTeleport);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::CanBeRandomTeleport };
			return func(apForm);
		}

		TESObjectREFR* FindRandomTeleportTarget(TESObjectREFR* apStartDoor, TESObjectREFR* apActionRef)
		{
			using func_t = decltype(&TESObjectDOOR::FindRandomTeleportTarget);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::FindRandomTeleportTarget };
			return func(this, apStartDoor, apActionRef);
		}

		static void LinkRandomTeleportDoors(TESObjectREFR* apDoor1, TESObjectREFR* apDoor2)
		{
			using func_t = decltype(&TESObjectDOOR::LinkRandomTeleportDoors);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::LinkRandomTeleportDoors };
			func(apDoor1, apDoor2);
		}

	protected:
		BSSimpleList<TESForm*>* GetRandomTeleportList()
		{
			using func_t = decltype(&TESObjectDOOR::GetRandomTeleportList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectDOOR::GetRandomTeleportList };
			return func(this);
		}

	public:
		// members
		std::uint8_t           gap74;            // 74
		std::uint8_t           pad75[0x3];       // 75
		TESSound*              pOpenSound;       // 78
		TESSound*              pCloseSound;      // 7C
		TESSound*              pLoopSound;       // 80
		std::uint8_t           cFlags;           // 84
		std::uint8_t           pad85[0x3];       // 85
		BSSimpleList<TESForm*> RandomTeleports;  // 88
	};
	static_assert(sizeof(TESObjectDOOR) == 0x90);
}
