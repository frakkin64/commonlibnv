#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CHUNK_ID.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"
#include "RE/P/PACK_LOC_TYPE.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class MobileObject;
	class TESForm;
	class TESObjectCELL;
	class TESObjectREFR;

	class PackageLocation
	{
	public:
		PACK_LOC_TYPE GetLocType()
		{
			using func_t = decltype(&PackageLocation::GetLocType);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::GetLocType };
			return func(this);
		}

		PackageLocation* ctor()
		{
			using func_t = PackageLocation*(__thiscall*)(PackageLocation*);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(PackageLocation*);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::dtor };
			func(this);
		}

		void SetLocType(PACK_LOC_TYPE aeLoctype)
		{
			using func_t = decltype(&PackageLocation::SetLocType);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::SetLocType };
			func(this, aeLoctype);
		}

		void SetRadius(std::uint32_t aiRad)
		{
			using func_t = decltype(&PackageLocation::SetRadius);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::SetRadius };
			func(this, aiRad);
		}

		bool IsRefAtLocationTrigger(MobileObject* apPackOwner, TESObjectREFR* apRef, bool& abRefInsideTriggerOut)
		{
			using func_t = decltype(&PackageLocation::IsRefAtLocationTrigger);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::IsRefAtLocationTrigger };
			return func(this, apPackOwner, apRef, abRefInsideTriggerOut);
		}

		TESObjectREFR* GetRunningPackageLocReference(MobileObject* apActor)
		{
			using func_t = decltype(&PackageLocation::GetRunningPackageLocReference);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::GetRunningPackageLocReference };
			return func(this, apActor);
		}

		TESObjectREFR* GetLocReference()
		{
			using func_t = decltype(&PackageLocation::GetLocReference);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::GetLocReference };
			return func(this);
		}

		void SetLocReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&PackageLocation::SetLocReference);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::SetLocReference };
			func(this, apRef);
		}

		TESObjectCELL* GetLocCell()
		{
			using func_t = decltype(&PackageLocation::GetLocCell);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::GetLocCell };
			return func(this);
		}

		void SetLocCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&PackageLocation::SetLocCell);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::SetLocCell };
			func(this, apCell);
		}

		TESForm* GetLocObject()
		{
			using func_t = decltype(&PackageLocation::GetLocObject);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::GetLocObject };
			return func(this);
		}

		PACKAGE_OBJECT_TYPE GetLocObjectType()
		{
			using func_t = decltype(&PackageLocation::GetLocObjectType);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::GetLocObjectType };
			return func(this);
		}

		void Copy(PackageLocation* apCopy, bool abNoneOK)
		{
			using func_t = decltype(&PackageLocation::Copy);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::Copy };
			func(this, apCopy, abNoneOK);
		}

		bool Compare(PackageLocation* apCompare)
		{
			using func_t = decltype(&PackageLocation::Compare);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::Compare };
			return func(this, apCompare);
		}

		void Save(CHUNK_ID aeChunk)
		{
			using func_t = decltype(&PackageLocation::Save);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::Save };
			func(this, aeChunk);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&PackageLocation::InitItem);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::InitItem };
			func(this, apOwner);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&PackageLocation::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PackageLocation::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PackageLocation::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	private:
		std::uint32_t GetRadius()
		{
			using func_t = decltype(&PackageLocation::GetRadius);
			static REL::Relocation<func_t> func{ Offsets::PackageLocation::GetRadius };
			return func(this);
		}

	public:
		// members
		char          eLocType;    // 00
		std::uint8_t  pad01[0x3];  // 01
		std::uint32_t iRad;        // 04
		union
		{
			TESForm* pObject;
			PACKAGE_OBJECT_TYPE eObjType;
			TESObjectREFR* pRef;
			TESObjectCELL* pCell;
			TESForm* pLocForm;
		} ___u2;  // 08
	};
	static_assert(sizeof(PackageLocation) == 0xC);
}
