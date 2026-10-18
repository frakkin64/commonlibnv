#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/B/BSStringT.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class TESFile;
	class TESForm;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWorldSpace;

	class DoorTeleportData
	{
	public:
		DoorTeleportData* ctor()
		{
			using func_t = DoorTeleportData*(__thiscall*)(DoorTeleportData*);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::ctor };
			return func(this);
		}

		void SetConnectedCellsPublic(TESObjectREFR* apDoorRef, bool abIsPublic)
		{
			using func_t = decltype(&DoorTeleportData::SetConnectedCellsPublic);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::SetConnectedCellsPublic };
			func(this, apDoorRef, abIsPublic);
		}

		TESObjectCELL* GetTeleportCell()
		{
			using func_t = decltype(&DoorTeleportData::GetTeleportCell);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::GetTeleportCell };
			return func(this);
		}

		void GetTeleportCellMapName(BSStringT<char>& aOutMapName)
		{
			using func_t = decltype(&DoorTeleportData::GetTeleportCellMapName);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::GetTeleportCellMapName };
			func(this, aOutMapName);
		}

		TESWorldSpace* GetTeleportWorldSpace()
		{
			using func_t = decltype(&DoorTeleportData::GetTeleportWorldSpace);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::GetTeleportWorldSpace };
			return func(this);
		}

		BGSWorldLocation GetTeleportWorldLocation()
		{
			using func_t = decltype(&DoorTeleportData::GetTeleportWorldLocation);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::GetTeleportWorldLocation };
			return func(this);
		}

		TESForm* GetTeleportSpace()
		{
			using func_t = decltype(&DoorTeleportData::GetTeleportSpace);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::GetTeleportSpace };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&DoorTeleportData::Save);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::Save };
			func(this);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&DoorTeleportData::Load);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::Load };
			func(this, apFile);
		}

		bool InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&DoorTeleportData::InitItem);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::InitItem };
			return func(this, apOwner);
		}

		void InitLoadGame()
		{
			using func_t = decltype(&DoorTeleportData::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::InitLoadGame };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&DoorTeleportData::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&DoorTeleportData::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::DoorTeleportData::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		TESObjectREFR* pLinkedDoor;  // 00
		NiPoint3       position;     // 04
		NiPoint3       rotation;     // 10
		std::uint8_t   cFlags;       // 1C
		std::uint8_t   pad1D[0x3];   // 1D
	};
	static_assert(sizeof(DoorTeleportData) == 0x20);
}
