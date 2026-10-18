#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"

namespace RE
{
	class Actor;
	class BGSListForm;
	class BGSLoadFormBuffer;
	class ExtraDataList;
	class InventoryIterator;
	class ItemChange;
	class NiPoint3;
	class TESAmmo;
	class TESBoundObject;
	class TESContainer;
	class TESForm;
	class TESObjectREFR;
	class TESObjectWEAP;

	class InventoryChanges
	{
	public:
		bool IsEmpty()
		{
			using func_t = decltype(&InventoryChanges::IsEmpty);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::IsEmpty };
			return func(this);
		}

		void ResetCachedWeights()
		{
			using func_t = decltype(&InventoryChanges::ResetCachedWeights);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::ResetCachedWeights };
			func(this);
		}

		void RemoveHotKeyItem(ItemChange* apItem, std::int32_t aiHotkey)
		{
			using func_t = decltype(&InventoryChanges::RemoveHotKeyItem);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::RemoveHotKeyItem };
			func(this, apItem, aiHotkey);
		}

		ItemChange* GetObjectInList(TESBoundObject* apObj, bool ableveled, std::uint32_t aId)
		{
			using func_t = decltype(&InventoryChanges::GetObjectInList);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetObjectInList };
			return func(this, apObj, ableveled, aId);
		}

		ExtraDataList* WearingObject(TESBoundObject* apObj, bool bshouldwear)
		{
			using func_t = decltype(&InventoryChanges::WearingObject);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::WearingObject };
			return func(this, apObj, bshouldwear);
		}

		void RemoveAllObjectsWorn(bool abSkipCanNotWear, TESObjectREFR* apRef)
		{
			using func_t = decltype(&InventoryChanges::RemoveAllObjectsWorn);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::RemoveAllObjectsWorn };
			func(this, abSkipCanNotWear, apRef);
		}

		TESContainer* GetOriginalContainer()
		{
			using func_t = decltype(&InventoryChanges::GetOriginalContainer);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetOriginalContainer };
			return func(this);
		}

		bool RemoveWorn(bool& abRemoved, TESBoundObject* apObject, std::int32_t aiNumber, Actor* apActor, ExtraDataList* apExtra, bool ableft, bool abforce)
		{
			using func_t = decltype(&InventoryChanges::RemoveWorn);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::RemoveWorn };
			return func(this, abRemoved, apObject, aiNumber, apActor, apExtra, ableft, abforce);
		}

		TESObjectREFR* RemoveItem(TESObjectREFR* apRef, TESBoundObject* apObject, bool abstealing, std::int32_t ainumber, ExtraDataList* apExtra, bool abDropWorld, TESObjectREFR* apOtherContainer, NiPoint3 const* apPoint, NiPoint3 const* apRotate, bool abdelete, bool abPreferStolen)
		{
			using func_t = decltype(&InventoryChanges::RemoveItem);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::RemoveItem };
			return func(this, apRef, apObject, abstealing, ainumber, apExtra, abDropWorld, apOtherContainer, apPoint, apRotate, abdelete, abPreferStolen);
		}

		TESObjectREFR* DropItemIntoWorld(TESObjectREFR* apRef, TESBoundObject* apObject, std::int32_t ainumber, TESObjectREFR* apCreatedRef, NiPoint3 const* apPoint, NiPoint3 const* apRotate)
		{
			using func_t = decltype(&InventoryChanges::DropItemIntoWorld);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::DropItemIntoWorld };
			return func(this, apRef, apObject, ainumber, apCreatedRef, apPoint, apRotate);
		}

		TESAmmo* GetBestAmmoForWeapon(TESObjectWEAP* pWeapon, bool& bNeedsAmmo)
		{
			using func_t = decltype(&InventoryChanges::GetBestAmmoForWeapon);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetBestAmmoForWeapon };
			return func(this, pWeapon, bNeedsAmmo);
		}

		std::int32_t GetObjectCount(TESBoundObject* apObject)
		{
			using func_t = decltype(&InventoryChanges::GetObjectCount);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetObjectCount };
			return func(this, apObject);
		}

		std::int32_t GetCount(bool abcountplayable)
		{
			using func_t = decltype(&InventoryChanges::GetCount);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetCount };
			return func(this, abcountplayable);
		}

		void RemoveStolenItems(TESObjectREFR* apRef, TESObjectREFR* apStolenContainer, TESForm* apOwner)
		{
			using func_t = decltype(&InventoryChanges::RemoveStolenItems);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::RemoveStolenItems };
			func(this, apRef, apStolenContainer, apOwner);
		}

		void CleanUpBadData()
		{
			using func_t = decltype(&InventoryChanges::CleanUpBadData);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::CleanUpBadData };
			func(this);
		}

		void DuplicateAllItems(TESObjectREFR* apRef, TESObjectREFR* apDupContainer)
		{
			using func_t = decltype(&InventoryChanges::DuplicateAllItems);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::DuplicateAllItems };
			func(this, apRef, apDupContainer);
		}

		float RemoveAllItems(TESObjectREFR* apRef, TESObjectREFR* apStolenContainer, bool abStealing, bool abowner, bool abRemoveOwnership, bool abSilent, std::int32_t aiFormType, BGSListForm* apDoNotRemoveList)
		{
			using func_t = decltype(&InventoryChanges::RemoveAllItems);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::RemoveAllItems };
			return func(this, apRef, apStolenContainer, abStealing, abowner, abRemoveOwnership, abSilent, aiFormType, apDoNotRemoveList);
		}

		bool ContainerHasObjects(TESBoundObject* apObj, PACKAGE_OBJECT_TYPE aeObjectType, std::int32_t ainumber, PACKAGE_OBJECT_TYPE& aeMatchId, std::uint32_t aId, TESObjectREFR* apRef)
		{
			using func_t = decltype(&InventoryChanges::ContainerHasObjects);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::ContainerHasObjects };
			return func(this, apObj, aeObjectType, ainumber, aeMatchId, aId, apRef);
		}

		float GetInventoryWeight(bool abIsHardcore)
		{
			using func_t = decltype(&InventoryChanges::GetInventoryWeight);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetInventoryWeight };
			return func(this, abIsHardcore);
		}

		float GetEquippedWeight(Actor* apOwner)
		{
			using func_t = decltype(&InventoryChanges::GetEquippedWeight);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetEquippedWeight };
			return func(this, apOwner);
		}

		void InitLeveledItems()
		{
			using func_t = decltype(&InventoryChanges::InitLeveledItems);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::InitLeveledItems };
			func(this);
		}

		void InitFromContainerExtra()
		{
			using func_t = decltype(&InventoryChanges::InitFromContainerExtra);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::InitFromContainerExtra };
			func(this);
		}

		void InitScripts()
		{
			using func_t = decltype(&InventoryChanges::InitScripts);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::InitScripts };
			func(this);
		}

		void ClearAllChangeItems()
		{
			using func_t = decltype(&InventoryChanges::ClearAllChangeItems);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::ClearAllChangeItems };
			func(this);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&InventoryChanges::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = decltype(&InventoryChanges::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::SaveGame };
			func(this);
		}

		void LoadGame()
		{
			using func_t = void (InventoryChanges::*)();
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::LoadGame };
			func(this);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (InventoryChanges::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&InventoryChanges::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

		std::uint32_t IterateInventory(void* apCallback, void* apData, std::uint32_t aiIterateFlags)
		{
			using func_t = decltype(&InventoryChanges::IterateInventory);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::IterateInventory };
			return func(this, apCallback, apData, aiIterateFlags);
		}

		bool GetNextItem(InventoryIterator& arIterator, ItemChange*& arpItemChange, std::uint32_t aiIterateFlags)
		{
			using func_t = decltype(&InventoryChanges::GetNextItem);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetNextItem };
			return func(this, arIterator, arpItemChange, aiIterateFlags);
		}

		void GetItemGroup(TESBoundObject* apObj, BSSimpleList<ItemChange*>* apReturnList)
		{
			using func_t = decltype(&InventoryChanges::GetItemGroup);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetItemGroup };
			func(this, apObj, apReturnList);
		}

		void GetRepairItemGroup(TESBoundObject* apObj, BSSimpleList<ItemChange*>* apReturnList)
		{
			using func_t = decltype(&InventoryChanges::GetRepairItemGroup);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetRepairItemGroup };
			func(this, apObj, apReturnList);
		}

		void GetItemModGroup(TESBoundObject* apObj, BSSimpleList<ItemChange*>* apReturnList)
		{
			using func_t = decltype(&InventoryChanges::GetItemModGroup);
			static REL::Relocation<func_t> func{ Offsets::InventoryChanges::GetItemModGroup };
			func(this, apObj, apReturnList);
		}

	public:
		// members
		BSSimpleList<ItemChange*>* pListofChanges;            // 00
		TESObjectREFR*             pRef;                      // 04
		float                      fcontainerweight;          // 08
		float                      fpreviousContainerWeight;  // 0C
		bool                       bcountdirty;               // 10
		std::uint8_t               pad11[0x3];                // 11
	};
	static_assert(sizeof(InventoryChanges) == 0x14);
}
