#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/B/BaseExtraList.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTMap.h"
#include "RE/O/OBJECT_ACTION.h"

namespace RE
{
	class Actor;
	class ActorCause;
	class ActorPackageData;
	class AlchemyItem;
	class Animation;
	class AudioBuoyMarkerData;
	class AudioMarkerData;
	class BGSAcousticSpace;
	class BGSEncounterZone;
	class BGSLoadFormBuffer;
	class BGSPrimitive;
	class BGSSaveFormBuffer;
	class BGSTalkingActivator;
	class BSExtraData;
	class BSMultiBound;
	class BSMultiBoundRoom;
	class BSOcclusionPlane;
	class BSPortal;
	class BSSoundHandle;
	class CollisionData;
	class Crime;
	class DoorTeleportData;
	class ExtraAction;
	class ExtraAmmo;
	class ExtraAnim;
	class ExtraAudioBuoyMarker;
	class ExtraAudioMarker;
	class ExtraDismemberedLimbs;
	class ExtraFactionChanges;
	class ExtraFollower;
	class ExtraFollowerSwimBreadcrumbs;
	class ExtraLeveledItem;
	class ExtraLight;
	class ExtraLock;
	class ExtraMapMarker;
	class ExtraNavMeshPortal;
	class ExtraRefractionProperty;
	class ExtraSayToTopicInfo;
	class ExtraStartingPosition;
	class ExtraTalkingActor;
	class ExtraTeleport;
	class ImpactSwap;
	class InventoryChanges;
	class MapMarkerData;
	class MenuTopic;
	class MultiBoundMarkerData;
	class NiNode;
	class NiRenderedTexture;
	class OcclusionPlaneLinkedRefData;
	class PatrolRefData;
	class PortalLinkedRefData;
	class RADIO_DATA;
	class REFR_LIGHT;
	class REFR_LOCK;
	class REF_ACTIVATE_DATA;
	class REF_DECAL_DATA;
	class REF_REFLECTED_DATA;
	class REF_REFLECTOR_DATA;
	class RagDollData;
	class RoomLinkedRefData;
	class SayOnceTopicInfos;
	class Script;
	class ScriptLocals;
	class SeenData;
	class TESActorBase;
	class TESAmmo;
	class TESClimate;
	class TESCombatStyle;
	class TESFile;
	class TESForm;
	class TESGlobal;
	class TESImageSpace;
	class TESModel;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESPackage;
	class TESWaterForm;
	class TESWorldSpace;
	class TrespassPackage;
	class WORLD_LOCATION;
	class WaterZone;
	class bhkWorld;

	class ExtraDataList :
		public BaseExtraList  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraDataList };
		static constexpr auto VTABLE{ VTABLE::ExtraDataList };

		// override (BaseExtraList)
		virtual ~ExtraDataList() = default;  // 00

		ExtraDataList* ctor()
		{
			using func_t = ExtraDataList*(__thiscall*)(ExtraDataList*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::ctor };
			return func(this);
		}

		void AddExtraCopy(BSExtraData* apCopy)
		{
			using func_t = decltype(&ExtraDataList::AddExtraCopy);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddExtraCopy };
			func(this, apCopy);
		}

		void CopyList(ExtraDataList* apCopy)
		{
			using func_t = decltype(&ExtraDataList::CopyList);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::CopyList };
			func(this, apCopy);
		}

		void RemoveAllCopyableExtra(bool abdelete)
		{
			using func_t = decltype(&ExtraDataList::RemoveAllCopyableExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveAllCopyableExtra };
			func(this, abdelete);
		}

		void RemoveNonPersistentCellData()
		{
			using func_t = decltype(&ExtraDataList::RemoveNonPersistentCellData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveNonPersistentCellData };
			func(this);
		}

		void CopyListForContainer(ExtraDataList* apCopy, bool abDontRemove)
		{
			using func_t = decltype(&ExtraDataList::CopyListForContainer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::CopyListForContainer };
			func(this, apCopy, abDontRemove);
		}

		void DuplicateExtraListForContainer(ExtraDataList* apCopy)
		{
			using func_t = decltype(&ExtraDataList::DuplicateExtraListForContainer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::DuplicateExtraListForContainer };
			func(this, apCopy);
		}

		void CopyListForReference(ExtraDataList* apCopy, bool abremove)
		{
			using func_t = decltype(&ExtraDataList::CopyListForReference);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::CopyListForReference };
			func(this, apCopy, abremove);
		}

		bool CompareListForContainer(ExtraDataList* apCompare, bool abCompareScriptAndOwnerData, bool bThrown)
		{
			using func_t = decltype(&ExtraDataList::CompareListForContainer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::CompareListForContainer };
			return func(this, apCompare, abCompareScriptAndOwnerData, bThrown);
		}

		bool CompareList(ExtraDataList* apCompare)
		{
			using func_t = decltype(&ExtraDataList::CompareList);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::CompareList };
			return func(this, apCompare);
		}

		void Save()
		{
			using func_t = decltype(&ExtraDataList::Save);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::Save };
			func(this);
		}

		void Load(TESFile* apFile, TESForm* apOwner)
		{
			using func_t = decltype(&ExtraDataList::Load);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::Load };
			func(this, apFile, apOwner);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&ExtraDataList::InitItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::InitItem };
			func(this, apOwner);
		}

		REFR_LIGHT* GetLight()
		{
			using func_t = decltype(&ExtraDataList::GetLight);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLight };
			return func(this);
		}

		REFR_LIGHT* GetSpellEffectLight()
		{
			using func_t = decltype(&ExtraDataList::GetSpellEffectLight);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetSpellEffectLight };
			return func(this);
		}

		RADIO_DATA* GetRadioData()
		{
			using func_t = decltype(&ExtraDataList::GetRadioData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRadioData };
			return func(this);
		}

		void SetRadioData(RADIO_DATA* apData)
		{
			using func_t = decltype(&ExtraDataList::SetRadioData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRadioData };
			func(this, apData);
		}

		DoorTeleportData* GetTeleport()
		{
			using func_t = decltype(&ExtraDataList::GetTeleport);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetTeleport };
			return func(this);
		}

		MapMarkerData* GetMapMarkerData()
		{
			using func_t = decltype(&ExtraDataList::GetMapMarkerData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetMapMarkerData };
			return func(this);
		}

		AudioMarkerData* GetAudioMarkerData()
		{
			using func_t = decltype(&ExtraDataList::GetAudioMarkerData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetAudioMarkerData };
			return func(this);
		}

		InventoryChanges* GetContainerChanges()
		{
			using func_t = decltype(&ExtraDataList::GetContainerChanges);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetContainerChanges };
			return func(this);
		}

		void SetOriginalReferenceExtra(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetOriginalReferenceExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetOriginalReferenceExtra };
			func(this, apRef);
		}

		void RemoveOriginalReferenceExtra()
		{
			using func_t = decltype(&ExtraDataList::RemoveOriginalReferenceExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveOriginalReferenceExtra };
			func(this);
		}

		TESObjectREFR* GetOriginalReference()
		{
			using func_t = decltype(&ExtraDataList::GetOriginalReference);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetOriginalReference };
			return func(this);
		}

		TESForm* GetOwner()
		{
			using func_t = decltype(&ExtraDataList::GetOwner);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetOwner };
			return func(this);
		}

		TESGlobal* GetGlobal()
		{
			using func_t = decltype(&ExtraDataList::GetGlobal);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetGlobal };
			return func(this);
		}

		std::int32_t GetRank()
		{
			using func_t = decltype(&ExtraDataList::GetRank);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRank };
			return func(this);
		}

		float GetHealth()
		{
			using func_t = decltype(&ExtraDataList::GetHealth);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetHealth };
			return func(this);
		}

		ExtraLeveledItem* GetLeveledItem()
		{
			using func_t = decltype(&ExtraDataList::GetLeveledItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLeveledItem };
			return func(this);
		}

		bool HasLeveledItem()
		{
			using func_t = decltype(&ExtraDataList::HasLeveledItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::HasLeveledItem };
			return func(this);
		}

		std::int16_t GetCount()
		{
			using func_t = decltype(&ExtraDataList::GetCount);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetCount };
			return func(this);
		}

		AlchemyItem* GetPoison()
		{
			using func_t = decltype(&ExtraDataList::GetPoison);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPoison };
			return func(this);
		}

		Script* GetScript()
		{
			using func_t = decltype(&ExtraDataList::GetScript);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetScript };
			return func(this);
		}

		ScriptLocals* GetScriptLocals()
		{
			using func_t = decltype(&ExtraDataList::GetScriptLocals);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetScriptLocals };
			return func(this);
		}

		void GetSound(BSSoundHandle& result)
		{
			using func_t = decltype(&ExtraDataList::GetSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetSound };
			func(this, result);
		}

		void GetCreatureAwakeSound(BSSoundHandle& result)
		{
			using func_t = decltype(&ExtraDataList::GetCreatureAwakeSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetCreatureAwakeSound };
			func(this, result);
		}

		void GetWeaponIdleSound(BSSoundHandle& result)
		{
			using func_t = decltype(&ExtraDataList::GetWeaponIdleSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetWeaponIdleSound };
			func(this, result);
		}

		void GetWeaponAttackSound(BSSoundHandle& result)
		{
			using func_t = decltype(&ExtraDataList::GetWeaponAttackSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetWeaponAttackSound };
			func(this, result);
		}

		bool GetWorn(bool abwornleft)
		{
			using func_t = decltype(&ExtraDataList::GetWorn);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetWorn };
			return func(this, abwornleft);
		}

		bool GetCanNotWear()
		{
			using func_t = decltype(&ExtraDataList::GetCanNotWear);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetCanNotWear };
			return func(this);
		}

		std::uint8_t GetSeedIndex()
		{
			using func_t = decltype(&ExtraDataList::GetSeedIndex);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetSeedIndex };
			return func(this);
		}

		WORLD_LOCATION* GetPackageStartLocation()
		{
			using func_t = decltype(&ExtraDataList::GetPackageStartLocation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPackageStartLocation };
			return func(this);
		}

		bool HasWeaponMods()
		{
			using func_t = decltype(&ExtraDataList::HasWeaponMods);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::HasWeaponMods };
			return func(this);
		}

		bool GetWeaponModSlotActive(std::uint8_t slot)
		{
			using func_t = decltype(&ExtraDataList::GetWeaponModSlotActive);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetWeaponModSlotActive };
			return func(this, slot);
		}

		ExtraAnim* SetAnimPtr(Animation* apAnim)
		{
			using func_t = decltype(&ExtraDataList::SetAnimPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetAnimPtr };
			return func(this, apAnim);
		}

		ExtraStartingPosition* SetStartingPositionPtr(TESObjectREFR* apObject)
		{
			using func_t = decltype(&ExtraDataList::SetStartingPositionPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetStartingPositionPtr };
			return func(this, apObject);
		}

		ExtraLight* SetLightPtr(REFR_LIGHT* apLight)
		{
			using func_t = decltype(&ExtraDataList::SetLightPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLightPtr };
			return func(this, apLight);
		}

		ExtraLock* SetLockPtr(REFR_LOCK* apLock)
		{
			using func_t = decltype(&ExtraDataList::SetLockPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLockPtr };
			return func(this, apLock);
		}

		ExtraTeleport* SetTeleportPtr(DoorTeleportData* apTeleport)
		{
			using func_t = decltype(&ExtraDataList::SetTeleportPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetTeleportPtr };
			return func(this, apTeleport);
		}

		ExtraMapMarker* SetMapMarkerPtr(MapMarkerData* apMapData)
		{
			using func_t = decltype(&ExtraDataList::SetMapMarkerPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetMapMarkerPtr };
			return func(this, apMapData);
		}

		ExtraAudioMarker* SetAudioMarkerPtr(AudioMarkerData* apAudioData)
		{
			using func_t = decltype(&ExtraDataList::SetAudioMarkerPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetAudioMarkerPtr };
			return func(this, apAudioData);
		}

		ExtraAudioBuoyMarker* SetAudioBuoyMarkerPtr(AudioBuoyMarkerData* apAudioBuoyData)
		{
			using func_t = decltype(&ExtraDataList::SetAudioBuoyMarkerPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetAudioBuoyMarkerPtr };
			return func(this, apAudioBuoyData);
		}

		ExtraAction* SetActionPtr()
		{
			using func_t = decltype(&ExtraDataList::SetActionPtr);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActionPtr };
			return func(this);
		}

		void SetContainerChanges(InventoryChanges* apChanges)
		{
			using func_t = decltype(&ExtraDataList::SetContainerChanges);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetContainerChanges };
			func(this, apChanges);
		}

		void SetOwnership(TESForm* apOwner)
		{
			using func_t = decltype(&ExtraDataList::SetOwnership);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetOwnership };
			func(this, apOwner);
		}

		void SetGlobal(TESGlobal* apGlobal)
		{
			using func_t = decltype(&ExtraDataList::SetGlobal);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetGlobal };
			func(this, apGlobal);
		}

		void SetRank(std::int32_t aiRank)
		{
			using func_t = decltype(&ExtraDataList::SetRank);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRank };
			func(this, aiRank);
		}

		void SetHealth(float afHealth)
		{
			using func_t = decltype(&ExtraDataList::SetHealth);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetHealth };
			func(this, afHealth);
		}

		void SetUses(std::uint8_t acUses)
		{
			using func_t = decltype(&ExtraDataList::SetUses);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetUses };
			func(this, acUses);
		}

		void SetCount(std::int16_t aiCount)
		{
			using func_t = decltype(&ExtraDataList::SetCount);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCount };
			func(this, aiCount);
		}

		void SetTimeLeft(float afTimeLeft)
		{
			using func_t = decltype(&ExtraDataList::SetTimeLeft);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetTimeLeft };
			func(this, afTimeLeft);
		}

		void SetCharge(float afCharge)
		{
			using func_t = decltype(&ExtraDataList::SetCharge);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCharge };
			func(this, afCharge);
		}

		void SetPoison(AlchemyItem* apPoison)
		{
			using func_t = decltype(&ExtraDataList::SetPoison);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPoison };
			func(this, apPoison);
		}

		void SetHeadTrackTargetExtra(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetHeadTrackTargetExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetHeadTrackTargetExtra };
			func(this, apRef);
		}

		TESObjectREFR* GetHeadTrackTargetExtra()
		{
			using func_t = decltype(&ExtraDataList::GetHeadTrackTargetExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetHeadTrackTargetExtra };
			return func(this);
		}

		void SetScript(Script* apScript)
		{
			using func_t = decltype(&ExtraDataList::SetScript);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetScript };
			func(this, apScript);
		}

		void SetScriptLocals(ScriptLocals* apScriptlocals)
		{
			using func_t = decltype(&ExtraDataList::SetScriptLocals);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetScriptLocals };
			func(this, apScriptlocals);
		}

		void SetScale(float afScale)
		{
			using func_t = decltype(&ExtraDataList::SetScale);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetScale };
			func(this, afScale);
		}

		void SetCreatureAwakeSound(BSSoundHandle const& afSound)
		{
			using func_t = decltype(&ExtraDataList::SetCreatureAwakeSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCreatureAwakeSound };
			func(this, afSound);
		}

		void SetCreatureMovementSound(BSSoundHandle const& afSound)
		{
			using func_t = decltype(&ExtraDataList::SetCreatureMovementSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCreatureMovementSound };
			func(this, afSound);
		}

		void SetWeaponIdleSound(BSSoundHandle const& afSound)
		{
			using func_t = decltype(&ExtraDataList::SetWeaponIdleSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetWeaponIdleSound };
			func(this, afSound);
		}

		void SetWeaponAttackSound(BSSoundHandle const& afSound)
		{
			using func_t = decltype(&ExtraDataList::SetWeaponAttackSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetWeaponAttackSound };
			func(this, afSound);
		}

		void SetActivateLoopSound(BSSoundHandle const& afSound)
		{
			using func_t = decltype(&ExtraDataList::SetActivateLoopSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActivateLoopSound };
			func(this, afSound);
		}

		void SetSound(BSSoundHandle const& afSound)
		{
			using func_t = decltype(&ExtraDataList::SetSound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetSound };
			func(this, afSound);
		}

		void SetGhost(bool abGhost)
		{
			using func_t = decltype(&ExtraDataList::SetGhost);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetGhost };
			func(this, abGhost);
		}

		void SetWorn(bool abWorn, bool abwearleft)
		{
			using func_t = decltype(&ExtraDataList::SetWorn);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetWorn };
			func(this, abWorn, abwearleft);
		}

		void SetCanNotWear(bool abCantWear)
		{
			using func_t = decltype(&ExtraDataList::SetCanNotWear);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCanNotWear };
			func(this, abCantWear);
		}

		void SetSeedIndex(std::uint8_t aiSeed)
		{
			using func_t = decltype(&ExtraDataList::SetSeedIndex);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetSeedIndex };
			func(this, aiSeed);
		}

		void SetPackageStartLocation(TESWorldSpace* apWorld, TESObjectCELL* apIntCell, NiPoint3 const& aPt, float afzrotation)
		{
			using func_t = decltype(&ExtraDataList::SetPackageStartLocation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPackageStartLocation };
			func(this, apWorld, apIntCell, aPt, afzrotation);
		}

		void RemoveContainerChanges()
		{
			using func_t = decltype(&ExtraDataList::RemoveContainerChanges);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveContainerChanges };
			func(this);
		}

		void RemoveCount()
		{
			using func_t = decltype(&ExtraDataList::RemoveCount);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveCount };
			func(this);
		}

		void RemoveScript()
		{
			using func_t = decltype(&ExtraDataList::RemoveScript);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveScript };
			func(this);
		}

		void ClearScriptLocals()
		{
			using func_t = decltype(&ExtraDataList::ClearScriptLocals);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::ClearScriptLocals };
			func(this);
		}

		void RemoveWorn(bool ableftworn)
		{
			using func_t = decltype(&ExtraDataList::RemoveWorn);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveWorn };
			func(this, ableftworn);
		}

		NiPoint3 SetStartingAngle(TESObjectREFR* result, NiPoint3 newAngle)
		{
			using func_t = decltype(&ExtraDataList::SetStartingAngle);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetStartingAngle };
			return func(this, result, newAngle);
		}

		NiPoint3 SetStartingLocation(TESObjectREFR* result, NiPoint3 newLocation)
		{
			using func_t = decltype(&ExtraDataList::SetStartingLocation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetStartingLocation };
			return func(this, result, newLocation);
		}

		void SetStartingWorldOrCell(TESForm* apWorldOrCell)
		{
			using func_t = decltype(&ExtraDataList::SetStartingWorldOrCell);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetStartingWorldOrCell };
			func(this, apWorldOrCell);
		}

		void SetStartingWorldOrCellForRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetStartingWorldOrCellForRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetStartingWorldOrCellForRef };
			func(this, apRef);
		}

		TESForm* GetStartingWorldOrCell()
		{
			using func_t = decltype(&ExtraDataList::GetStartingWorldOrCell);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetStartingWorldOrCell };
			return func(this);
		}

		std::uint32_t GetActionFlag()
		{
			using func_t = decltype(&ExtraDataList::GetActionFlag);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActionFlag };
			return func(this);
		}

		bool GetAction(OBJECT_ACTION aeType)
		{
			using func_t = decltype(&ExtraDataList::GetAction);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetAction };
			return func(this, aeType);
		}

		void SetActionFlag(OBJECT_ACTION aeType)
		{
			using func_t = decltype(&ExtraDataList::SetActionFlag);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActionFlag };
			func(this, aeType);
		}

		void SetAction(OBJECT_ACTION aeType)
		{
			using func_t = decltype(&ExtraDataList::SetAction);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetAction };
			func(this, aeType);
		}

		void ClearAction(OBJECT_ACTION aeType)
		{
			using func_t = decltype(&ExtraDataList::ClearAction);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::ClearAction };
			func(this, aeType);
		}

		void SetActionRef(TESObjectREFR* apRefIn)
		{
			using func_t = decltype(&ExtraDataList::SetActionRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActionRef };
			func(this, apRefIn);
		}

		void SetHealthPerc(float afHealthPerc)
		{
			using func_t = decltype(&ExtraDataList::SetHealthPerc);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetHealthPerc };
			func(this, afHealthPerc);
		}

		float GetObjectHealth()
		{
			using func_t = decltype(&ExtraDataList::GetObjectHealth);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetObjectHealth };
			return func(this);
		}

		void SetObjectHealth(float afHealth)
		{
			using func_t = decltype(&ExtraDataList::SetObjectHealth);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetObjectHealth };
			func(this, afHealth);
		}

		void SetCell3D(NiNode* apObjectRoot)
		{
			using func_t = decltype(&ExtraDataList::SetCell3D);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCell3D };
			func(this, apObjectRoot);
		}

		void SetbhkWorld(bhkWorld* apWorld)
		{
			using func_t = decltype(&ExtraDataList::SetbhkWorld);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetbhkWorld };
			func(this, apWorld);
		}

		void SetTerminalState(std::uint8_t acState)
		{
			using func_t = decltype(&ExtraDataList::SetTerminalState);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetTerminalState };
			func(this, acState);
		}

		std::uint8_t GetTerminalState()
		{
			using func_t = decltype(&ExtraDataList::GetTerminalState);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetTerminalState };
			return func(this);
		}

		void SetTerminalLockState(char acLockState)
		{
			using func_t = decltype(&ExtraDataList::SetTerminalLockState);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetTerminalLockState };
			func(this, acLockState);
		}

		char GetTerminalLockState()
		{
			using func_t = decltype(&ExtraDataList::GetTerminalLockState);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetTerminalLockState };
			return func(this);
		}

		void SetAcousticSpace(BGSAcousticSpace* apSpace)
		{
			using func_t = decltype(&ExtraDataList::SetAcousticSpace);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetAcousticSpace };
			func(this, apSpace);
		}

		void SetClimate(TESClimate* apClimate)
		{
			using func_t = decltype(&ExtraDataList::SetClimate);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetClimate };
			func(this, apClimate);
		}

		void SetImageSpace(TESImageSpace* apImageSpace)
		{
			using func_t = decltype(&ExtraDataList::SetImageSpace);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetImageSpace };
			func(this, apImageSpace);
		}

		void SetImpactSwap(ImpactSwap* apImpactSwap)
		{
			using func_t = decltype(&ExtraDataList::SetImpactSwap);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetImpactSwap };
			func(this, apImpactSwap);
		}

		ImpactSwap* GetImpactSwap()
		{
			using func_t = decltype(&ExtraDataList::GetImpactSwap);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetImpactSwap };
			return func(this);
		}

		void SetCanopyShadowMask(std::int32_t aeState, NiRenderedTexture* apTex, void** apOutRect)
		{
			using func_t = decltype(&ExtraDataList::SetCanopyShadowMask);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCanopyShadowMask };
			func(this, aeState, apTex, apOutRect);
		}

		std::int32_t GetCanopyShadowMask(NiRenderedTexture*& apOutTex, void** apOutRect)
		{
			using func_t = decltype(&ExtraDataList::GetCanopyShadowMask);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetCanopyShadowMask };
			return func(this, apOutTex, apOutRect);
		}

		void SetEditorID(char const* apEditorID)
		{
			using func_t = decltype(&ExtraDataList::SetEditorID);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetEditorID };
			func(this, apEditorID);
		}

		void SetReferencePointer(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetReferencePointer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetReferencePointer };
			func(this, apRef);
		}

		TESObjectREFR* GetReferencePointer()
		{
			using func_t = decltype(&ExtraDataList::GetReferencePointer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetReferencePointer };
			return func(this);
		}

		void RemoveReferencePointer()
		{
			using func_t = decltype(&ExtraDataList::RemoveReferencePointer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveReferencePointer };
			func(this);
		}

		void SetPackageExtra(TESPackage* apPack, std::int32_t aiIndex, TESObjectREFR* apRef, bool abcomplete, bool abactivated, bool abDoneOnce)
		{
			using func_t = decltype(&ExtraDataList::SetPackageExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPackageExtra };
			func(this, apPack, aiIndex, apRef, abcomplete, abactivated, abDoneOnce);
		}

		void SetPackageExtraTarget(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetPackageExtraTarget);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPackageExtraTarget };
			func(this, apRef);
		}

		TESPackage* GetPackageExtra()
		{
			using func_t = decltype(&ExtraDataList::GetPackageExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPackageExtra };
			return func(this);
		}

		std::int32_t GetPackageExtraIndex()
		{
			using func_t = decltype(&ExtraDataList::GetPackageExtraIndex);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPackageExtraIndex };
			return func(this);
		}

		TESObjectREFR* GetPackageExtraTarget()
		{
			using func_t = decltype(&ExtraDataList::GetPackageExtraTarget);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPackageExtraTarget };
			return func(this);
		}

		void RemovePackageExtra()
		{
			using func_t = decltype(&ExtraDataList::RemovePackageExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemovePackageExtra };
			func(this);
		}

		void SetTrespassPackageExtra(TrespassPackage* apPack)
		{
			using func_t = decltype(&ExtraDataList::SetTrespassPackageExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetTrespassPackageExtra };
			func(this, apPack);
		}

		TrespassPackage* GetTrespassPackage()
		{
			using func_t = decltype(&ExtraDataList::GetTrespassPackage);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetTrespassPackage };
			return func(this);
		}

		void RemoveTrespassPackage()
		{
			using func_t = decltype(&ExtraDataList::RemoveTrespassPackage);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveTrespassPackage };
			func(this);
		}

		void AddToPlayerCrimeList(Crime* apCrime, float afTimeStamp)
		{
			using func_t = decltype(&ExtraDataList::AddToPlayerCrimeList);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddToPlayerCrimeList };
			func(this, apCrime, afTimeStamp);
		}

		BSSimpleList<Crime*>* GetPlayerCrimeList()
		{
			using func_t = decltype(&ExtraDataList::GetPlayerCrimeList);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPlayerCrimeList };
			return func(this);
		}

		void RemoveLevelItemExtra()
		{
			using func_t = decltype(&ExtraDataList::RemoveLevelItemExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveLevelItemExtra };
			func(this);
		}

		bool IsExtraDefaultforContainer(bool bwornignore)
		{
			using func_t = decltype(&ExtraDataList::IsExtraDefaultforContainer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::IsExtraDefaultforContainer };
			return func(this, bwornignore);
		}

		void SetLevelItemExtra(std::int32_t aiIndex)
		{
			using func_t = decltype(&ExtraDataList::SetLevelItemExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLevelItemExtra };
			func(this, aiIndex);
		}

		void SetLevelItemExtraFlag(bool bflag)
		{
			using func_t = decltype(&ExtraDataList::SetLevelItemExtraFlag);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLevelItemExtraFlag };
			func(this, bflag);
		}

		void SetPersistentCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&ExtraDataList::SetPersistentCell);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPersistentCell };
			func(this, apCell);
		}

		TESObjectCELL* GetPersistentCell()
		{
			using func_t = decltype(&ExtraDataList::GetPersistentCell);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPersistentCell };
			return func(this);
		}

		void SetRagDollData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetRagDollData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRagDollData };
			func(this, apRef);
		}

		void SetRagDollDataFromCopy(RagDollData* apRagData)
		{
			using func_t = decltype(&ExtraDataList::SetRagDollDataFromCopy);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRagDollDataFromCopy };
			func(this, apRagData);
		}

		RagDollData* GetRagDollData()
		{
			using func_t = decltype(&ExtraDataList::GetRagDollData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRagDollData };
			return func(this);
		}

		void SetRunOnceExtraPackage(TESPackage* apPack, char acDay)
		{
			using func_t = decltype(&ExtraDataList::SetRunOnceExtraPackage);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRunOnceExtraPackage };
			func(this, apPack, acDay);
		}

		void SetEnableStateParent(TESObjectREFR* apParent)
		{
			using func_t = decltype(&ExtraDataList::SetEnableStateParent);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetEnableStateParent };
			func(this, apParent);
		}

		void SetEnableStateParentFlags(std::uint8_t acFlags)
		{
			using func_t = decltype(&ExtraDataList::SetEnableStateParentFlags);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetEnableStateParentFlags };
			func(this, acFlags);
		}

		void AddEnableStateChild(TESObjectREFR* apChild)
		{
			using func_t = decltype(&ExtraDataList::AddEnableStateChild);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddEnableStateChild };
			func(this, apChild);
		}

		void RemoveEnableStateChild(TESObjectREFR* apChild)
		{
			using func_t = decltype(&ExtraDataList::RemoveEnableStateChild);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveEnableStateChild };
			func(this, apChild);
		}

		TESObjectREFR* GetItemDropper()
		{
			using func_t = decltype(&ExtraDataList::GetItemDropper);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetItemDropper };
			return func(this);
		}

		void SetItemDropper(TESObjectREFR* apDropper)
		{
			using func_t = decltype(&ExtraDataList::SetItemDropper);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetItemDropper };
			func(this, apDropper);
		}

		TESObjectREFR* GetDroppedWeapon()
		{
			using func_t = decltype(&ExtraDataList::GetDroppedWeapon);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetDroppedWeapon };
			return func(this);
		}

		BSSimpleList<TESObjectREFR*>* GetDroppedItemList()
		{
			using func_t = decltype(&ExtraDataList::GetDroppedItemList);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetDroppedItemList };
			return func(this);
		}

		void RemoveDroppedItemList()
		{
			using func_t = decltype(&ExtraDataList::RemoveDroppedItemList);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveDroppedItemList };
			func(this);
		}

		void AddDroppedItem(TESObjectREFR* apItem)
		{
			using func_t = decltype(&ExtraDataList::AddDroppedItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddDroppedItem };
			func(this, apItem);
		}

		void RemoveDroppedItem(TESObjectREFR* apItem)
		{
			using func_t = decltype(&ExtraDataList::RemoveDroppedItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveDroppedItem };
			func(this, apItem);
		}

		void SetWaterType(TESWaterForm* apWater)
		{
			using func_t = decltype(&ExtraDataList::SetWaterType);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetWaterType };
			func(this, apWater);
		}

		void SetRandomTeleportMarker(TESObjectREFR* apMarker)
		{
			using func_t = decltype(&ExtraDataList::SetRandomTeleportMarker);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRandomTeleportMarker };
			func(this, apMarker);
		}

		TESObjectREFR* GetAshPileRef()
		{
			using func_t = decltype(&ExtraDataList::GetAshPileRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetAshPileRef };
			return func(this);
		}

		void SetAshPileRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetAshPileRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetAshPileRef };
			func(this, apRef);
		}

		TESObjectREFR* GetLinkedRef()
		{
			using func_t = decltype(&ExtraDataList::GetLinkedRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLinkedRef };
			return func(this);
		}

		void SetLinkedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetLinkedRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLinkedRef };
			func(this, apRef);
		}

		BSSimpleList<TESObjectREFR*>* GetLinkedRefChildren()
		{
			using func_t = decltype(&ExtraDataList::GetLinkedRefChildren);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLinkedRefChildren };
			return func(this);
		}

		void AddLinkedRefChild(TESObjectREFR* apChild)
		{
			using func_t = decltype(&ExtraDataList::AddLinkedRefChild);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddLinkedRefChild };
			func(this, apChild);
		}

		void RemoveLinkedRefChild(TESObjectREFR* apChild)
		{
			using func_t = decltype(&ExtraDataList::RemoveLinkedRefChild);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveLinkedRefChild };
			func(this, apChild);
		}

		void SetOpenCloseActivateRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetOpenCloseActivateRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetOpenCloseActivateRef };
			func(this, apRef);
		}

		BSSimpleList<REF_ACTIVATE_DATA*>* GetActivateParentList()
		{
			using func_t = decltype(&ExtraDataList::GetActivateParentList);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActivateParentList };
			return func(this);
		}

		REF_ACTIVATE_DATA* GetActivateData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::GetActivateData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActivateData };
			return func(this, apRef);
		}

		void RemoveActivateParent(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::RemoveActivateParent);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveActivateParent };
			func(this, apRef);
		}

		float GetActivateDelay(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::GetActivateDelay);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActivateDelay };
			return func(this, apRef);
		}

		void SetActivateDelay(TESObjectREFR* apRef, float afVal)
		{
			using func_t = decltype(&ExtraDataList::SetActivateDelay);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActivateDelay };
			func(this, apRef, afVal);
		}

		bool IsActivateParentOnly()
		{
			using func_t = decltype(&ExtraDataList::IsActivateParentOnly);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::IsActivateParentOnly };
			return func(this);
		}

		void SetActivateParentOnly(bool abVal)
		{
			using func_t = decltype(&ExtraDataList::SetActivateParentOnly);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActivateParentOnly };
			func(this, abVal);
		}

		BSStringT<char> GetActivateTextOverride()
		{
			using func_t = decltype(&ExtraDataList::GetActivateTextOverride);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActivateTextOverride };
			return func(this);
		}

		void SetActivateTextOverride(char* pTextOverride)
		{
			using func_t = decltype(&ExtraDataList::SetActivateTextOverride);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActivateTextOverride };
			func(this, pTextOverride);
		}

		BSSimpleList<REF_ACTIVATE_DATA*>* GetActivateRefChildren()
		{
			using func_t = decltype(&ExtraDataList::GetActivateRefChildren);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActivateRefChildren };
			return func(this);
		}

		void SetActivateChildrenTimer(float afTimer)
		{
			using func_t = decltype(&ExtraDataList::SetActivateChildrenTimer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActivateChildrenTimer };
			func(this, afTimer);
		}

		float GetActivateChildrenTimer()
		{
			using func_t = decltype(&ExtraDataList::GetActivateChildrenTimer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActivateChildrenTimer };
			return func(this);
		}

		BSSimpleList<REF_DECAL_DATA*>* GetDecalRefs()
		{
			using func_t = decltype(&ExtraDataList::GetDecalRefs);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetDecalRefs };
			return func(this);
		}

		void AddDecalRef(TESObjectREFR* apRef, NiPoint3 const& aIntersect, NiPoint3 const& aNormal)
		{
			using func_t = decltype(&ExtraDataList::AddDecalRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddDecalRef };
			func(this, apRef, aIntersect, aNormal);
		}

		BSSimpleList<REF_REFLECTED_DATA*>* GetReflectedRefs()
		{
			using func_t = decltype(&ExtraDataList::GetReflectedRefs);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetReflectedRefs };
			return func(this);
		}

		BSSimpleList<REF_REFLECTOR_DATA*>* GetReflectorRefs()
		{
			using func_t = decltype(&ExtraDataList::GetReflectorRefs);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetReflectorRefs };
			return func(this);
		}

		void SetReflectsRef(TESObjectREFR* apRef, bool bValue)
		{
			using func_t = decltype(&ExtraDataList::SetReflectsRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetReflectsRef };
			func(this, apRef, bValue);
		}

		void SetRefractsRef(TESObjectREFR* apRef, bool bValue)
		{
			using func_t = decltype(&ExtraDataList::SetRefractsRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRefractsRef };
			func(this, apRef, bValue);
		}

		BSSimpleList<TESObjectREFR*>* GetLitWaterRefs()
		{
			using func_t = decltype(&ExtraDataList::GetLitWaterRefs);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLitWaterRefs };
			return func(this);
		}

		void SetWaterLightRef(TESObjectREFR* apRef, bool bValue)
		{
			using func_t = decltype(&ExtraDataList::SetWaterLightRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetWaterLightRef };
			func(this, apRef, bValue);
		}

		void SetLitWaterRef(TESObjectREFR* apRef, bool bValue)
		{
			using func_t = decltype(&ExtraDataList::SetLitWaterRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLitWaterRef };
			func(this, apRef, bValue);
		}

		void AddPrimitive(BGSPrimitive* apPrimitive)
		{
			using func_t = decltype(&ExtraDataList::AddPrimitive);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddPrimitive };
			func(this, apPrimitive);
		}

		BGSPrimitive* GetPrimitive()
		{
			using func_t = decltype(&ExtraDataList::GetPrimitive);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPrimitive };
			return func(this);
		}

		void SetPatrolRefData(PatrolRefData* apPatrolRefData)
		{
			using func_t = decltype(&ExtraDataList::SetPatrolRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPatrolRefData };
			func(this, apPatrolRefData);
		}

		PatrolRefData* GetPatrolRefData()
		{
			using func_t = decltype(&ExtraDataList::GetPatrolRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPatrolRefData };
			return func(this);
		}

		void SetOcclusionPlaneLinkedRefData(OcclusionPlaneLinkedRefData* apData)
		{
			using func_t = decltype(&ExtraDataList::SetOcclusionPlaneLinkedRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetOcclusionPlaneLinkedRefData };
			func(this, apData);
		}

		OcclusionPlaneLinkedRefData* GetOcclusionPlaneLinkedRefData()
		{
			using func_t = decltype(&ExtraDataList::GetOcclusionPlaneLinkedRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetOcclusionPlaneLinkedRefData };
			return func(this);
		}

		void SetLinkedPlaneRef(TESObjectREFR* apRef, std::int32_t aiEdge)
		{
			using func_t = decltype(&ExtraDataList::SetLinkedPlaneRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLinkedPlaneRef };
			func(this, apRef, aiEdge);
		}

		void SetPortalLinkedRefData(PortalLinkedRefData* apData)
		{
			using func_t = decltype(&ExtraDataList::SetPortalLinkedRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPortalLinkedRefData };
			func(this, apData);
		}

		PortalLinkedRefData* GetPortalLinkedRefData()
		{
			using func_t = decltype(&ExtraDataList::GetPortalLinkedRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPortalLinkedRefData };
			return func(this);
		}

		void SetRoomLinkedRefData(RoomLinkedRefData* apData)
		{
			using func_t = decltype(&ExtraDataList::SetRoomLinkedRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRoomLinkedRefData };
			func(this, apData);
		}

		RoomLinkedRefData* GetRoomLinkedRefData()
		{
			using func_t = decltype(&ExtraDataList::GetRoomLinkedRefData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRoomLinkedRefData };
			return func(this);
		}

		bool GetRoomIsMaster()
		{
			using func_t = decltype(&ExtraDataList::GetRoomIsMaster);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRoomIsMaster };
			return func(this);
		}

		TESObjectREFR* GetMasterRoom()
		{
			using func_t = decltype(&ExtraDataList::GetMasterRoom);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetMasterRoom };
			return func(this);
		}

		void SetPortalLinkedRoomRef(std::int32_t aiWhich, TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetPortalLinkedRoomRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPortalLinkedRoomRef };
			func(this, aiWhich, apRef);
		}

		TESObjectREFR* GetPortalLinkedRoomRef(std::int32_t aiWhich)
		{
			using func_t = decltype(&ExtraDataList::GetPortalLinkedRoomRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPortalLinkedRoomRef };
			return func(this, aiWhich);
		}

		void AddRoomLinkedRoomRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::AddRoomLinkedRoomRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddRoomLinkedRoomRef };
			func(this, apRef);
		}

		void RemoveRoomLinkedPortalRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::RemoveRoomLinkedPortalRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveRoomLinkedPortalRef };
			func(this, apRef);
		}

		BSPortal* GetPortal()
		{
			using func_t = decltype(&ExtraDataList::GetPortal);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPortal };
			return func(this);
		}

		void SetPortal(BSPortal* apPortal)
		{
			using func_t = decltype(&ExtraDataList::SetPortal);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPortal };
			func(this, apPortal);
		}

		BSMultiBoundRoom* GetRoom()
		{
			using func_t = decltype(&ExtraDataList::GetRoom);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRoom };
			return func(this);
		}

		void SetRoom(BSMultiBoundRoom* apRoom)
		{
			using func_t = decltype(&ExtraDataList::SetRoom);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRoom };
			func(this, apRoom);
		}

		void SetCollisionData(CollisionData* apCollisionData)
		{
			using func_t = decltype(&ExtraDataList::SetCollisionData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCollisionData };
			func(this, apCollisionData);
		}

		CollisionData* GetCollisionData()
		{
			using func_t = decltype(&ExtraDataList::GetCollisionData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetCollisionData };
			return func(this);
		}

		void SetActorPackageData(ActorPackageData* apData)
		{
			using func_t = decltype(&ExtraDataList::SetActorPackageData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActorPackageData };
			func(this, apData);
		}

		ActorPackageData* GetActorPackageData()
		{
			using func_t = decltype(&ExtraDataList::GetActorPackageData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetActorPackageData };
			return func(this);
		}

		void NotifyGuardsAboutActivation(TESObjectREFR* apObject, TESObjectREFR* apActionRef)
		{
			using func_t = decltype(&ExtraDataList::NotifyGuardsAboutActivation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::NotifyGuardsAboutActivation };
			func(this, apObject, apActionRef);
		}

		TESObjectREFR* GetMerchantContainer()
		{
			using func_t = decltype(&ExtraDataList::GetMerchantContainer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetMerchantContainer };
			return func(this);
		}

		void SetMerchantContainer(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetMerchantContainer);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetMerchantContainer };
			func(this, apRef);
		}

		void GetLevCreaMultiplier(float& afOutMult, std::int32_t& aiOutAllBelowForce)
		{
			using func_t = decltype(&ExtraDataList::GetLevCreaMultiplier);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLevCreaMultiplier };
			func(this, afOutMult, aiOutAllBelowForce);
		}

		void SetLevCreaModifier(std::int32_t aiVal)
		{
			using func_t = decltype(&ExtraDataList::SetLevCreaModifier);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLevCreaModifier };
			func(this, aiVal);
		}

		void SetNoRumors(bool abVal)
		{
			using func_t = decltype(&ExtraDataList::SetNoRumors);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetNoRumors };
			func(this, abVal);
		}

		void ClearRumorsExtra()
		{
			using func_t = decltype(&ExtraDataList::ClearRumorsExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::ClearRumorsExtra };
			func(this);
		}

		bool HasLevCreaCalced()
		{
			using func_t = decltype(&ExtraDataList::HasLevCreaCalced);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::HasLevCreaCalced };
			return func(this);
		}

		TESActorBase* GetLevCreaOriginalBase()
		{
			using func_t = decltype(&ExtraDataList::GetLevCreaOriginalBase);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLevCreaOriginalBase };
			return func(this);
		}

		TESActorBase* GetLevCreaTemplate()
		{
			using func_t = decltype(&ExtraDataList::GetLevCreaTemplate);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLevCreaTemplate };
			return func(this);
		}

		void SetLeveledCreature(TESActorBase* apOriginalBase, TESActorBase* apTemplate)
		{
			using func_t = decltype(&ExtraDataList::SetLeveledCreature);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLeveledCreature };
			func(this, apOriginalBase, apTemplate);
		}

		void SetDetachTime(std::uint32_t aiTime)
		{
			using func_t = decltype(&ExtraDataList::SetDetachTime);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetDetachTime };
			func(this, aiTime);
		}

		void SetSeenData(SeenData* apData)
		{
			using func_t = decltype(&ExtraDataList::SetSeenData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetSeenData };
			func(this, apData);
		}

		void SetNorthRotation(float afVal)
		{
			using func_t = decltype(&ExtraDataList::SetNorthRotation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetNorthRotation };
			func(this, afVal);
		}

		TESObjectREFR* GetXTarget()
		{
			using func_t = decltype(&ExtraDataList::GetXTarget);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetXTarget };
			return func(this);
		}

		void SetXTarget(TESObjectREFR* apTarget)
		{
			using func_t = decltype(&ExtraDataList::SetXTarget);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetXTarget };
			func(this, apTarget);
		}

		BGSEncounterZone* GetEncounterZone()
		{
			using func_t = decltype(&ExtraDataList::GetEncounterZone);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetEncounterZone };
			return func(this);
		}

		void SetEncounterZone(BGSEncounterZone* apZone)
		{
			using func_t = decltype(&ExtraDataList::SetEncounterZone);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetEncounterZone };
			func(this, apZone);
		}

		void SetEmittanceSource(TESForm* apSource)
		{
			using func_t = decltype(&ExtraDataList::SetEmittanceSource);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetEmittanceSource };
			func(this, apSource);
		}

		TESObjectREFR* GetMultiBoundRef()
		{
			using func_t = decltype(&ExtraDataList::GetMultiBoundRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetMultiBoundRef };
			return func(this);
		}

		void SetMultiBoundRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetMultiBoundRef);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetMultiBoundRef };
			func(this, apRef);
		}

		void SetMultiBoundData(MultiBoundMarkerData* apData)
		{
			using func_t = decltype(&ExtraDataList::SetMultiBoundData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetMultiBoundData };
			func(this, apData);
		}

		BSMultiBound* GetMultiBound()
		{
			using func_t = decltype(&ExtraDataList::GetMultiBound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetMultiBound };
			return func(this);
		}

		void SetMultiBound(BSMultiBound* apBound)
		{
			using func_t = decltype(&ExtraDataList::SetMultiBound);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetMultiBound };
			func(this, apBound);
		}

		BSOcclusionPlane* GetOcclusionPlane()
		{
			using func_t = decltype(&ExtraDataList::GetOcclusionPlane);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetOcclusionPlane };
			return func(this);
		}

		void SetOcclusionPlane(BSOcclusionPlane* apPlane)
		{
			using func_t = decltype(&ExtraDataList::SetOcclusionPlane);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetOcclusionPlane };
			func(this, apPlane);
		}

		void SetRadius(float afRadius)
		{
			using func_t = decltype(&ExtraDataList::SetRadius);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRadius };
			func(this, afRadius);
		}

		float GetRadius()
		{
			using func_t = decltype(&ExtraDataList::GetRadius);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRadius };
			return func(this);
		}

		void SetRadiation(float afRadiation)
		{
			using func_t = decltype(&ExtraDataList::SetRadiation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRadiation };
			func(this, afRadiation);
		}

		void AddFollower(Actor* apActor)
		{
			using func_t = decltype(&ExtraDataList::AddFollower);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddFollower };
			func(this, apActor);
		}

		std::int32_t AddFriendHit()
		{
			using func_t = decltype(&ExtraDataList::AddFriendHit);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddFriendHit };
			return func(this);
		}

		std::int32_t GetFriendHitCount()
		{
			using func_t = decltype(&ExtraDataList::GetFriendHitCount);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetFriendHitCount };
			return func(this);
		}

		void RemoveFriendHitsExtra()
		{
			using func_t = decltype(&ExtraDataList::RemoveFriendHitsExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveFriendHitsExtra };
			func(this);
		}

		void RemoveFollower(Actor* apActor)
		{
			using func_t = decltype(&ExtraDataList::RemoveFollower);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveFollower };
			func(this, apActor);
		}

		ExtraFollower* GetFollowerExtra()
		{
			using func_t = decltype(&ExtraDataList::GetFollowerExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetFollowerExtra };
			return func(this);
		}

		void RemoveFollowerExtra()
		{
			using func_t = decltype(&ExtraDataList::RemoveFollowerExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveFollowerExtra };
			func(this);
		}

		void SetRefractionPropertyExtra(bool abflag, float afRefractionPower)
		{
			using func_t = decltype(&ExtraDataList::SetRefractionPropertyExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetRefractionPropertyExtra };
			func(this, abflag, afRefractionPower);
		}

		ExtraRefractionProperty* GetRefractionPropertyExtra()
		{
			using func_t = decltype(&ExtraDataList::GetRefractionPropertyExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetRefractionPropertyExtra };
			return func(this);
		}

		void SetLastFinishedSequence(char const* apSequenceName)
		{
			using func_t = decltype(&ExtraDataList::SetLastFinishedSequence);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetLastFinishedSequence };
			func(this, apSequenceName);
		}

		char* GetLastFinishedSequence()
		{
			using func_t = decltype(&ExtraDataList::GetLastFinishedSequence);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetLastFinishedSequence };
			return func(this);
		}

		void RemoveLastFinishedSequence()
		{
			using func_t = decltype(&ExtraDataList::RemoveLastFinishedSequence);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveLastFinishedSequence };
			func(this);
		}

		void SetSavedAnimation(char* apBuffer)
		{
			using func_t = decltype(&ExtraDataList::SetSavedAnimation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetSavedAnimation };
			func(this, apBuffer);
		}

		void RemoveSavedAnimation()
		{
			using func_t = decltype(&ExtraDataList::RemoveSavedAnimation);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveSavedAnimation };
			func(this);
		}

		void SetSavedHavokData(char* apBuffer)
		{
			using func_t = decltype(&ExtraDataList::SetSavedHavokData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetSavedHavokData };
			func(this, apBuffer);
		}

		bool RestoreSavedHavokData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::RestoreSavedHavokData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RestoreSavedHavokData };
			return func(this, apRef);
		}

		void RemoveSavedHavokData()
		{
			using func_t = decltype(&ExtraDataList::RemoveSavedHavokData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveSavedHavokData };
			func(this);
		}

		std::uint16_t GetSaveSize(std::uint32_t aiFlags, TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetSaveSize };
			return func(this, aiFlags, apRef);
		}

		void SaveGame(std::uint32_t aiFlags, TESObjectREFR* apRef)
		{
			using func_t = void (ExtraDataList::*)(std::uint32_t, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SaveGame };
			func(this, aiFlags, apRef);
		}

		void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags, TESObjectREFR* apRef)
		{
			using func_t = void (ExtraDataList::*)(std::uint32_t, std::uint32_t, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::LoadGame };
			func(this, aiFlags, aiCurrentFlags, apRef);
		}

		void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags, TESObjectREFR* apRef, TESForm* apBaseObject)
		{
			using func_t = void (ExtraDataList::*)(std::uint32_t, std::uint32_t, TESObjectREFR*, TESForm*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::InitLoadGame };
			func(this, aiFlags, aiOldFlags, apRef, apBaseObject);
		}

		void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags, TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::FinishInitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::FinishInitLoadGame };
			func(this, aiFlags, aiOldFlags, apRef);
		}

		void Revert(std::uint32_t aiFlags, TESObjectREFR* apRef)
		{
			using func_t = void (ExtraDataList::*)(std::uint32_t, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::Revert };
			func(this, aiFlags, apRef);
		}

		void RemoveAllSaveableData(std::uint32_t aiFlags, TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::RemoveAllSaveableData);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveAllSaveableData };
			func(this, aiFlags, apRef);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (ExtraDataList::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ExtraDataList::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer, TESForm* apBaseObject)
		{
			using func_t = void (ExtraDataList::*)(BGSLoadFormBuffer*, TESForm*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::InitLoadGame_1 };
			func(this, apLoadGameBuffer, apBaseObject);
		}

		void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&ExtraDataList::FinishLoadGame);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::FinishLoadGame };
			func(this, apLoadGameBuffer);
		}

		void Revert(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ExtraDataList::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::Revert_1 };
			func(this, apLoadGameBuffer);
		}

		void RevertUnsavedExtra(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&ExtraDataList::RevertUnsavedExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RevertUnsavedExtra };
			func(this, apLoadGameBuffer);
		}

		void SetHotKey(char acValue)
		{
			using func_t = decltype(&ExtraDataList::SetHotKey);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetHotKey };
			func(this, acValue);
		}

		char GetHotKey()
		{
			using func_t = decltype(&ExtraDataList::GetHotKey);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetHotKey };
			return func(this);
		}

		void RemoveHotKey()
		{
			using func_t = decltype(&ExtraDataList::RemoveHotKey);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveHotKey };
			func(this);
		}

		void SetInfoGeneralTopic(MenuTopic* apItem)
		{
			using func_t = decltype(&ExtraDataList::SetInfoGeneralTopic);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetInfoGeneralTopic };
			func(this, apItem);
		}

		MenuTopic* GetInfoGeneralTopic(TESObjectREFR* apSpeaker)
		{
			using func_t = decltype(&ExtraDataList::GetInfoGeneralTopic);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetInfoGeneralTopic };
			return func(this, apSpeaker);
		}

		void SetTalkingActorExtra(BGSTalkingActivator* apTalkAct, TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraDataList::SetTalkingActorExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetTalkingActorExtra };
			func(this, apTalkAct, apRef);
		}

		ExtraTalkingActor* GetTalkingActorExtra()
		{
			using func_t = decltype(&ExtraDataList::GetTalkingActorExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetTalkingActorExtra };
			return func(this);
		}

		void SetModelSwap(TESModel* apModelSwap, TESForm* apModelSwapForm)
		{
			using func_t = decltype(&ExtraDataList::SetModelSwap);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetModelSwap };
			func(this, apModelSwap, apModelSwapForm);
		}

		TESModel* GetModelSwap()
		{
			using func_t = decltype(&ExtraDataList::GetModelSwap);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetModelSwap };
			return func(this);
		}

		void SetNavMeshPortal(ExtraNavMeshPortal* apPortal)
		{
			using func_t = decltype(&ExtraDataList::SetNavMeshPortal);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetNavMeshPortal };
			func(this, apPortal);
		}

		void SetWeaponModSlot(std::uint8_t slot)
		{
			using func_t = decltype(&ExtraDataList::SetWeaponModSlot);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetWeaponModSlot };
			func(this, slot);
		}

		std::uint8_t GetWeaponModFlags()
		{
			using func_t = decltype(&ExtraDataList::GetWeaponModFlags);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetWeaponModFlags };
			return func(this);
		}

		void AddFactionChangesExtra()
		{
			using func_t = decltype(&ExtraDataList::AddFactionChangesExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddFactionChangesExtra };
			func(this);
		}

		ExtraFactionChanges* GetFactionChangesExtra()
		{
			using func_t = decltype(&ExtraDataList::GetFactionChangesExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetFactionChangesExtra };
			return func(this);
		}

		ExtraDismemberedLimbs* AddDismembermentExtra()
		{
			using func_t = decltype(&ExtraDataList::AddDismembermentExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::AddDismembermentExtra };
			return func(this);
		}

		ExtraDismemberedLimbs* GetDismembermentExtra()
		{
			using func_t = decltype(&ExtraDataList::GetDismembermentExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetDismembermentExtra };
			return func(this);
		}

		void RemoveDismembermentExtra()
		{
			using func_t = decltype(&ExtraDataList::RemoveDismembermentExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveDismembermentExtra };
			func(this);
		}

		void SetActorCauseExtra(ActorCause* apActorCause)
		{
			using func_t = decltype(&ExtraDataList::SetActorCauseExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetActorCauseExtra };
			func(this, apActorCause);
		}

		void SetCombatStyle(TESCombatStyle* apCombatStyle)
		{
			using func_t = decltype(&ExtraDataList::SetCombatStyle);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetCombatStyle };
			func(this, apCombatStyle);
		}

		ExtraAmmo* GetAmmoExtra()
		{
			using func_t = decltype(&ExtraDataList::GetAmmoExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetAmmoExtra };
			return func(this);
		}

		void SetAmmoExtra(TESAmmo* apAmmoType, std::int32_t aiCount)
		{
			using func_t = decltype(&ExtraDataList::SetAmmoExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetAmmoExtra };
			func(this, apAmmoType, aiCount);
		}

		ExtraSayToTopicInfo* GetSayToExtra()
		{
			using func_t = decltype(&ExtraDataList::GetSayToExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetSayToExtra };
			return func(this);
		}

		void SetExtraSayTopicInfoOnceADayExtra(SayOnceTopicInfos* apInfo)
		{
			using func_t = decltype(&ExtraDataList::SetExtraSayTopicInfoOnceADayExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetExtraSayTopicInfoOnceADayExtra };
			func(this, apInfo);
		}

		void RemoveExtraSayTopicInfoOnceADayExtra()
		{
			using func_t = decltype(&ExtraDataList::RemoveExtraSayTopicInfoOnceADayExtra);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::RemoveExtraSayTopicInfoOnceADayExtra };
			func(this);
		}

		TESObjectREFR* SetInWaterZone(WaterZone* apZone, bool abValue)
		{
			using func_t = decltype(&ExtraDataList::SetInWaterZone);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetInWaterZone };
			return func(this, apZone, abValue);
		}

		NiTMap<WaterZone*, std::int32_t>* QWaterZoneMap()
		{
			using func_t = decltype(&ExtraDataList::QWaterZoneMap);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::QWaterZoneMap };
			return func(this);
		}

		void SetIgnoredBySandbox(bool abVal)
		{
			using func_t = decltype(&ExtraDataList::SetIgnoredBySandbox);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetIgnoredBySandbox };
			func(this, abVal);
		}

		void SetPatrolRefInUse(TESObjectREFR* apUser)
		{
			using func_t = decltype(&ExtraDataList::SetPatrolRefInUse);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::SetPatrolRefInUse };
			func(this, apUser);
		}

		bool GetPatrolRefCanBeUsedBy(TESObjectREFR const* apUser)
		{
			using func_t = decltype(&ExtraDataList::GetPatrolRefCanBeUsedBy);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetPatrolRefCanBeUsedBy };
			return func(this, apUser);
		}

		ExtraFollowerSwimBreadcrumbs* GetOrCreateExtraFollowerSwimBreadcrumbs()
		{
			using func_t = decltype(&ExtraDataList::GetOrCreateExtraFollowerSwimBreadcrumbs);
			static REL::Relocation<func_t> func{ Offsets::ExtraDataList::GetOrCreateExtraFollowerSwimBreadcrumbs };
			return func(this);
		}
	};
	static_assert(sizeof(ExtraDataList) == 0x20);
}
