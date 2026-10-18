#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_WEAPON_ENUM.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BGSWorldLocation.h"
#include "RE/B/BSMap.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSStringT.h"
#include "RE/E/ENUM_FORM_ID.h"
#include "RE/E/ExtraDataList.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/O/OBJECT_ACTION.h"
#include "RE/O/OBJ_REFR.h"
#include "RE/R/RADIO_RANGE_TYPE.h"
#include "RE/S/SIT_SLEEP_STATE.h"
#include "RE/T/TESChildCell.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class Actor;
	class ActorCause;
	class Animation;
	class BGSEncounterZone;
	class BGSHavokSaveData;
	class BGSLoadFormBuffer;
	class BGSLoadGameBuffer;
	class BGSSaveFormBuffer;
	class BGSSaveGameBuffer;
	class BSAnimNoteReceiver;
	class BSExtraData;
	class BSFaceGenAnimationData;
	class BSFaceGenNiNode;
	class BSMultiBound;
	class BSMultiBoundRoom;
	class BipedAnim;
	class DoorTeleportData;
	class ExtraLock;
	class FORM;
	class FORM_GROUP;
	class FurnitureMark;
	class HavokSaveData;
	class ItemChange;
	class LOADED_REF_DATA;
	class MagicCaster;
	class MagicTarget;
	class MapMarkerData;
	class MobileObject;
	class MultiBoundMarkerData;
	class NiAVObject;
	class NiColor;
	class NiControllerManager;
	class NiControllerSequence;
	class NiFixedString;
	class NiGeometry;
	class NiNode;
	class REFR_LIGHT;
	class REFR_LOCK;
	class RagDollData;
	class Script;
	class ScriptLocals;
	class TESActorBase;
	class TESBoundObject;
	class TESContainer;
	class TESFile;
	class TESGlobal;
	class TESModel;
	class TESObjectCELL;
	class TESSound;
	class TESTopic;
	class TESWorldSpace;
	class TargetEntry;
	class TrapEntry;
	class WaterZone;
	class bhkNiCollisionObject;
	class bhkWorldNS_ObjectRecData;

	class TESObjectREFR :
		public TESForm,  // 00
		public TESChildCell  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectREFR };
		static constexpr auto VTABLE{ VTABLE::TESObjectREFR };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kREFR_ID };

		// override (TESForm)
		virtual ~TESObjectREFR() = default;                                                                                  // 04
		virtual void ClearData() override;                                                                                   // 05
		virtual bool ProcessBeforeSave() override;                                                                           // 06
		virtual bool Load(TESFile* apFile) override;                                                                         // 08
		virtual void Save() override;                                                                                        // 0B
		virtual bool SavesBefore(FORM* apGroupFORM) override;                                                                // 0E
		virtual bool SavesBefore(TESForm* apForm) override;                                                                  // 0F
		virtual TESForm* CreateDuplicateForm(bool abCreateEditorID, NiTPointerMap<TESForm*, TESForm*>* apCopyMap) override;  // 10
		virtual void PostDuplicateProcess(NiTPointerMap<TESForm*, TESForm*>* apCopyMap) override;                            // 11
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                   // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                 // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                               // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                 // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                 // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                             // 19
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                 // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                           // 1B
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                   // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                                                 // 1D
		virtual void CheckSaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                            // 20
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                           // 21
		virtual void InitItem() override;                                                                                    // 22
		virtual ENUM_FORM_ID GetSavedFormType() override;                                                                    // 23
		virtual void GetFormDetailedString(BSStringT<char>& aString) override;                                               // 24
		virtual bool GetOnLocalMap() override;                                                                               // 2E
		virtual void SetOnLocalMap(bool abVal) override;                                                                     // 2F
		virtual void SetDelete(bool abDeleted) override;                                                                     // 31
		virtual void SetAltered(bool abAltered) override;                                                                    // 32
		virtual void SetQuestObject(bool abQuest) override;                                                                  // 33
		virtual bool IsReference() override;                                                                                 // 3C
		virtual void Copy(TESForm* apCopy) override;                                                                         // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                      // 43
		virtual bool BelongsInGroup(FORM* apGroupFORM, bool abAllowParentGroups, bool abCurrentOnly) override;               // 44
		virtual void CreateGroupData(FORM* apOutGroupFORM, FORM_GROUP* apParentGroup) override;                              // 45

		// add
		virtual bool GetEditorLocation(NiPoint3& arOriginalLocation, NiPoint3& arOriginalAngle, TESForm*& arpLocationForm, TESForm* apLocationForm);                                                                                                                          // 4E
		virtual BSSoundHandle VoiceSoundFunction(TESTopic* result, Actor* apTopic, bool apTarget, bool abPlayerhead, bool abAlwaysPlay, bool abForceCorrectDuration);                                                                                                         // 4F
		virtual void UpdateSoundCallBack();                                                                                                                                                                                                                                   // 50
		virtual void DamageObject(float afDamage, bool abSelfDamage);                                                                                                                                                                                                         // 51
		virtual bool GetCastShadows();                                                                                                                                                                                                                                        // 52
		virtual void SetCastShadows(bool abVal);                                                                                                                                                                                                                              // 53
		virtual void SetMotionBlur(bool abVal);                                                                                                                                                                                                                               // 54
		virtual bool GetDangerous();                                                                                                                                                                                                                                          // 55
		virtual bool GetObstacle();                                                                                                                                                                                                                                           // 56
		virtual bool GetQuestObject();                                                                                                                                                                                                                                        // 57
		virtual void Unk_58();                                                                                                                                                                                                                                                // 58
		virtual void SetActorCause(ActorCause* apActorCause);                                                                                                                                                                                                                 // 59
		virtual ActorCause* GetActorCause();                                                                                                                                                                                                                                  // 5A
		virtual NiPoint3 GetStartingAngle();                                                                                                                                                                                                                                  // 5B
		virtual NiPoint3 GetStartingLocation();                                                                                                                                                                                                                               // 5C
		virtual void SetStartingPosition(NiPoint3 aposition);                                                                                                                                                                                                                 // 5D
		virtual void UpdateRefLight();                                                                                                                                                                                                                                        // 5E
		virtual TESObjectREFR* RemoveItem(TESBoundObject* apObject, ExtraDataList* apExtra, std::int32_t aiNumber, bool abStealing, bool abDropWorld, TESObjectREFR* apContainerObj, NiPoint3 const* apPoint, NiPoint3 const* apRotate, bool abDelete, bool abPreferStolen);  // 5F
		virtual void RemoveItemType(ENUM_FORM_ID aeType, bool abStealing, std::int32_t aiNumber);                                                                                                                                                                             // 60
		virtual bool AddWornItem(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool abForceEquip);                                                                                                                                                 // 61
		virtual bool RemoveWornItem(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra);                                                                                                                                                                 // 62
		virtual void DoTrap(TrapEntry* apTrap, TargetEntry* apTarget);                                                                                                                                                                                                        // 63
		virtual void AddObjecttoContainer(TESBoundObject* apObj, ExtraDataList* apExtra, std::int32_t aicount);                                                                                                                                                               // 64
		virtual NiPoint3 GetLookingAtLocation();                                                                                                                                                                                                                              // 65
		virtual MagicCaster* GetMagicCaster();                                                                                                                                                                                                                                // 66
		virtual MagicTarget* GetMagicTarget();                                                                                                                                                                                                                                // 67
		virtual bool IsChild(bool abIgnoreHeight);                                                                                                                                                                                                                            // 68
		virtual TESActorBase* GetTemplateActorBase();                                                                                                                                                                                                                         // 69
		virtual void SetTemplateActorBase(TESActorBase* apTemplate);                                                                                                                                                                                                          // 6A
		virtual BSFaceGenNiNode* GetFaceNodeBiped(NiNode* apHeadNode);                                                                                                                                                                                                        // 6B
		virtual BSFaceGenNiNode* GetFaceNodeSkinned(NiNode* apHeadNode);                                                                                                                                                                                                      // 6C
		virtual BSFaceGenNiNode* GetFaceNode(NiNode* apHeadNode);                                                                                                                                                                                                             // 6D
		virtual BSFaceGenAnimationData* GetFaceAnimationData(NiNode* apHeadNode);                                                                                                                                                                                             // 6E
		virtual bool ClampToGround();                                                                                                                                                                                                                                         // 6F
		virtual bool DetachHavok();                                                                                                                                                                                                                                           // 70
		virtual void InitHavok();                                                                                                                                                                                                                                             // 71
		virtual NiAVObject* Load3D(bool abBackgroundLoading);                                                                                                                                                                                                                 // 72
		virtual void Set3D(NiAVObject* apObject, bool abTestProcessLevel);                                                                                                                                                                                                    // 73
		virtual NiAVObject* Get3D();                                                                                                                                                                                                                                          // 74
		virtual bool GetRandomAnim();                                                                                                                                                                                                                                         // 75
		virtual NiPoint3 GetBoundMin();                                                                                                                                                                                                                                       // 76
		virtual NiPoint3 GetBoundMax();                                                                                                                                                                                                                                       // 77
		virtual void UpdateAnimation();                                                                                                                                                                                                                                       // 78
		virtual Animation* GetAnimation();                                                                                                                                                                                                                                    // 79
		virtual BipedAnim* GetBiped();                                                                                                                                                                                                                                        // 7A
		virtual BipedAnim* GetCurrentBiped();                                                                                                                                                                                                                                 // 7B
		virtual void SetBiped(BipedAnim* apBiped);                                                                                                                                                                                                                            // 7C
		virtual NiPoint3 const& GetLocationOnReference();                                                                                                                                                                                                                     // 7D
		virtual void SetRunsInLow(bool abFlag);                                                                                                                                                                                                                               // 7E
		virtual void MoveHavok(bool abForceRec);                                                                                                                                                                                                                              // 7F
		virtual void SetActionComplete(bool bValue);                                                                                                                                                                                                                          // 80
		virtual void SetMovementComplete(bool abValue);                                                                                                                                                                                                                       // 81
		virtual void ResetInventory(bool abLeveledOnly);                                                                                                                                                                                                                      // 82
		virtual NiAVObject* GetFireNode();                                                                                                                                                                                                                                    // 83
		virtual void SetFireNode(NiAVObject* apFireNode);                                                                                                                                                                                                                     // 84
		virtual SIT_SLEEP_STATE GetSitSleepState();                                                                                                                                                                                                                           // 85
		virtual bool IsNpc();                                                                                                                                                                                                                                                 // 86
		virtual bool IsCreature();                                                                                                                                                                                                                                            // 87
		virtual bool IsExplosion();                                                                                                                                                                                                                                           // 88
		virtual bool IsProjectile();                                                                                                                                                                                                                                          // 89
		virtual void SetParentCell(TESObjectCELL* apCell);                                                                                                                                                                                                                    // 8A
		virtual bool IsDead(bool bNotEssential);                                                                                                                                                                                                                              // 8B
		virtual bool IsKnockedOut();                                                                                                                                                                                                                                          // 8C
		virtual bool IsParalyzed();                                                                                                                                                                                                                                           // 8D
		virtual BSAnimNoteReceiver* CreateAnimNoteReceiver();                                                                                                                                                                                                                 // 8E
		virtual BSAnimNoteReceiver* GetAnimNoteReceiever();                                                                                                                                                                                                                   // 8F

		NiPoint3 const& GetAngleOnReference()
		{
			using func_t = decltype(&TESObjectREFR::GetAngleOnReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetAngleOnReference };
			return func(this);
		}

		bool IsMultiBoundRef()
		{
			using func_t = decltype(&TESObjectREFR::IsMultiBoundRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsMultiBoundRef };
			return func(this);
		}

		bool IsMarker()
		{
			using func_t = decltype(&TESObjectREFR::IsMarker);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsMarker };
			return func(this);
		}

		bool GetLoadedDataFlag(std::uint32_t aiFlag)
		{
			using func_t = decltype(&TESObjectREFR::GetLoadedDataFlag);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLoadedDataFlag };
			return func(this, aiFlag);
		}

		static TESObjectREFR* GetBackgroundLoadingRef()
		{
			using func_t = decltype(&TESObjectREFR::GetBackgroundLoadingRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetBackgroundLoadingRef };
			return func();
		}

		NiAVObject* GetActorBone(NiAVObject* apRoot, char* apSearch)
		{
			using func_t = NiAVObject* (TESObjectREFR::*)(NiAVObject*, char*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetActorBone };
			return func(this, apRoot, apSearch);
		}

		void SetLocationOnReferenceSimple(NiPoint3 const& arPoint)
		{
			using func_t = decltype(&TESObjectREFR::SetLocationOnReferenceSimple);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetLocationOnReferenceSimple };
			func(this, arPoint);
		}

		BSExtraData* GetExtraData(std::uint8_t aType)
		{
			using func_t = decltype(&TESObjectREFR::GetExtraData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetExtraData };
			return func(this, aType);
		}

		TESObjectREFR* ctor()
		{
			using func_t = TESObjectREFR*(__thiscall*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ctor };
			return func(this);
		}

		TESContainer* HasContainer()
		{
			using func_t = decltype(&TESObjectREFR::HasContainer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasContainer };
			return func(this);
		}

		bool GetIsOfType(TESBoundObject* apObj)
		{
			using func_t = decltype(&TESObjectREFR::GetIsOfType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetIsOfType };
			return func(this, apObj);
		}

		std::uint16_t GetAttachedAnimationSaveSize()
		{
			using func_t = decltype(&TESObjectREFR::GetAttachedAnimationSaveSize);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetAttachedAnimationSaveSize };
			return func(this);
		}

		void SaveAttachedAnimation()
		{
			using func_t = decltype(&TESObjectREFR::SaveAttachedAnimation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveAttachedAnimation };
			func(this);
		}

		void ResetAttachedAnimation()
		{
			using func_t = decltype(&TESObjectREFR::ResetAttachedAnimation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ResetAttachedAnimation };
			func(this);
		}

		static std::uint16_t GetControllerManagerSaveSize(NiControllerManager* apManager)
		{
			using func_t = decltype(&TESObjectREFR::GetControllerManagerSaveSize);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetControllerManagerSaveSize };
			return func(apManager);
		}

		static void SaveControllerManager(NiControllerManager* apManager, float afTime)
		{
			using func_t = void(__cdecl*)(NiControllerManager*, float);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveControllerManager };
			func(apManager, afTime);
		}

		static void LoadControllerManager(NiControllerManager* apManager, NiAVObject* apObj3D, float afTime)
		{
			using func_t = void(__cdecl*)(NiControllerManager*, NiAVObject*, float);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadControllerManager };
			func(apManager, apObj3D, afTime);
		}

		std::uint16_t GetHavokDataSaveSize(HavokSaveData* apHavokSaveData)
		{
			using func_t = decltype(&TESObjectREFR::GetHavokDataSaveSize);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetHavokDataSaveSize };
			return func(this, apHavokSaveData);
		}

		void SaveHavokData(HavokSaveData* apHavokSaveData)
		{
			using func_t = void (TESObjectREFR::*)(HavokSaveData*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveHavokData };
			func(this, apHavokSaveData);
		}

		void LoadHavokData(std::uint16_t aiSaveSize)
		{
			using func_t = void (TESObjectREFR::*)(std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadHavokData };
			func(this, aiSaveSize);
		}

		static void GetCollisionObjectSize(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::GetCollisionObjectSize);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetCollisionObjectSize };
			func(apCollision, arData);
		}

		static void SaveHavokDataForCollisionObjectOld(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::SaveHavokDataForCollisionObjectOld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveHavokDataForCollisionObjectOld };
			func(apCollision, arData);
		}

		static void LoadHavokDataForCollisionObjectOld(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::LoadHavokDataForCollisionObjectOld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadHavokDataForCollisionObjectOld };
			func(apCollision, arData);
		}

		void LoadHavokDataPreVersion81(std::uint16_t aiSaveSize)
		{
			using func_t = decltype(&TESObjectREFR::LoadHavokDataPreVersion81);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadHavokDataPreVersion81 };
			func(this, aiSaveSize);
		}

		static void LoadHavokDataForCollisionObjectPreVersion81(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::LoadHavokDataForCollisionObjectPreVersion81);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadHavokDataForCollisionObjectPreVersion81 };
			func(apCollision, arData);
		}

		bool GetOriginalOpenByDefaultState()
		{
			using func_t = decltype(&TESObjectREFR::GetOriginalOpenByDefaultState);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetOriginalOpenByDefaultState };
			return func(this);
		}

		bool MoveToEditorLocation(TESForm* apLocationForm)
		{
			using func_t = decltype(&TESObjectREFR::MoveToEditorLocation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::MoveToEditorLocation };
			return func(this, apLocationForm);
		}

		void Update3DPosition()
		{
			using func_t = decltype(&TESObjectREFR::Update3DPosition);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Update3DPosition };
			func(this);
		}

		void GatherHavokSaveData(BGSHavokSaveData* apHavokSaveData)
		{
			using func_t = decltype(&TESObjectREFR::GatherHavokSaveData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GatherHavokSaveData };
			func(this, apHavokSaveData);
		}

		void SaveHavokData(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (TESObjectREFR::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveHavokData_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadHavokData(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (TESObjectREFR::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadHavokData_1 };
			func(this, apLoadGameBuffer);
		}

		static void GatherHavokSaveDataForCollisionObject(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::GatherHavokSaveDataForCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GatherHavokSaveDataForCollisionObject };
			func(apCollision, arData);
		}

		static void SaveHavokDataForCollisionObject(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::SaveHavokDataForCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveHavokDataForCollisionObject };
			func(apCollision, arData);
		}

		static void LoadHavokDataForCollisionObject(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::LoadHavokDataForCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadHavokDataForCollisionObject };
			func(apCollision, arData);
		}

		bool CheckSaveAnimation()
		{
			using func_t = decltype(&TESObjectREFR::CheckSaveAnimation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::CheckSaveAnimation };
			return func(this);
		}

		void SaveAnimation(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&TESObjectREFR::SaveAnimation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveAnimation };
			func(this, apSaveGameBuffer);
		}

		void LoadAnimation(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&TESObjectREFR::LoadAnimation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadAnimation };
			func(this, apLoadGameBuffer);
		}

		void ResetAnimation()
		{
			using func_t = decltype(&TESObjectREFR::ResetAnimation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ResetAnimation };
			func(this);
		}

		bool SetSequencePosition(NiControllerManager* apManager, char const* apSequence, float afPosition)
		{
			using func_t = decltype(&TESObjectREFR::SetSequencePosition);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetSequencePosition };
			return func(this, apManager, apSequence, afPosition);
		}

		static void SaveControllerManager(NiControllerManager* apManager, BGSSaveGameBuffer* apSaveGameBuffer, float afTime)
		{
			using func_t = void(__cdecl*)(NiControllerManager*, BGSSaveGameBuffer*, float);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SaveControllerManager_1 };
			func(apManager, apSaveGameBuffer, afTime);
		}

		static void LoadControllerManager(NiControllerManager* apManager, BGSLoadGameBuffer* apLoadGameBuffer, float afTime)
		{
			using func_t = void(__cdecl*)(NiControllerManager*, BGSLoadGameBuffer*, float);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::LoadControllerManager_1 };
			func(apManager, apLoadGameBuffer, afTime);
		}

		static std::uint32_t GetLightingObjectType(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESObjectREFR::GetLightingObjectType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLightingObjectType };
			return func(ap3D);
		}

		static TESObjectREFR* CreateReference(std::uint8_t aeType, bool abadd)
		{
			using func_t = decltype(&TESObjectREFR::CreateReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::CreateReference };
			return func(aeType, abadd);
		}

		void SetDroppedRef(bool abVal)
		{
			using func_t = decltype(&TESObjectREFR::SetDroppedRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetDroppedRef };
			func(this, abVal);
		}

		void SetTargeted(bool abVal)
		{
			using func_t = decltype(&TESObjectREFR::SetTargeted);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetTargeted };
			func(this, abVal);
		}

		bool MustBeVisibleDistant()
		{
			using func_t = decltype(&TESObjectREFR::MustBeVisibleDistant);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::MustBeVisibleDistant };
			return func(this);
		}

		bool GetVisibleDistant()
		{
			using func_t = decltype(&TESObjectREFR::GetVisibleDistant);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetVisibleDistant };
			return func(this);
		}

		bool GetIsImposter()
		{
			using func_t = decltype(&TESObjectREFR::GetIsImposter);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetIsImposter };
			return func(this);
		}

		bool GetIsInvisibleLODMultType()
		{
			using func_t = decltype(&TESObjectREFR::GetIsInvisibleLODMultType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetIsInvisibleLODMultType };
			return func(this);
		}

		void SetIsInvisibleLODMultType(bool abIsInvisibleLODMultType)
		{
			using func_t = decltype(&TESObjectREFR::SetIsInvisibleLODMultType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetIsInvisibleLODMultType };
			func(this, abIsInvisibleLODMultType);
		}

		bool HasTemp3D()
		{
			using func_t = decltype(&TESObjectREFR::HasTemp3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasTemp3D };
			return func(this);
		}

		bool MustRefPersist()
		{
			using func_t = decltype(&TESObjectREFR::MustRefPersist);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::MustRefPersist };
			return func(this);
		}

		bool GetRefPersists()
		{
			using func_t = decltype(&TESObjectREFR::GetRefPersists);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetRefPersists };
			return func(this);
		}

		bool GetPersistFlagValue()
		{
			using func_t = decltype(&TESObjectREFR::GetPersistFlagValue);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetPersistFlagValue };
			return func(this);
		}

		void SetRefPersists(bool abVal)
		{
			using func_t = decltype(&TESObjectREFR::SetRefPersists);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetRefPersists };
			func(this, abVal);
		}

		static bool HasTimeControllers(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESObjectREFR::HasTimeControllers);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasTimeControllers };
			return func(ap3D);
		}

		bool HasScript()
		{
			using func_t = decltype(&TESObjectREFR::HasScript);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasScript };
			return func(this);
		}

		void InitScript()
		{
			using func_t = decltype(&TESObjectREFR::InitScript);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::InitScript };
			func(this);
		}

		bool RunScript()
		{
			using func_t = decltype(&TESObjectREFR::RunScript);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RunScript };
			return func(this);
		}

		void InitAnimation()
		{
			using func_t = decltype(&TESObjectREFR::InitAnimation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::InitAnimation };
			func(this);
		}

		BSSimpleList<char const*>* BuildKFFileList(ANIM_GROUP_WEAPON_ENUM aeWeapType)
		{
			using func_t = decltype(&TESObjectREFR::BuildKFFileList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::BuildKFFileList };
			return func(this, aeWeapType);
		}

		void EndSequence(NiControllerSequence* apSequence)
		{
			using func_t = decltype(&TESObjectREFR::EndSequence);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::EndSequence };
			func(this, apSequence);
		}

		Script* GetScriptPointer()
		{
			using func_t = decltype(&TESObjectREFR::GetScriptPointer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetScriptPointer };
			return func(this);
		}

		ScriptLocals* GetScriptVariables()
		{
			using func_t = decltype(&TESObjectREFR::GetScriptVariables);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetScriptVariables };
			return func(this);
		}

		float GetScale()
		{
			using func_t = decltype(&TESObjectREFR::GetScale);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetScale };
			return func(this);
		}

		void SetScale(float newscale)
		{
			using func_t = decltype(&TESObjectREFR::SetScale);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetScale };
			func(this, newscale);
		}

		TESForm* GetMyOwner()
		{
			using func_t = decltype(&TESObjectREFR::GetMyOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMyOwner };
			return func(this);
		}

		TESForm* GetOwner()
		{
			using func_t = decltype(&TESObjectREFR::GetOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetOwner };
			return func(this);
		}

		bool IsPartofEvilFaction()
		{
			using func_t = decltype(&TESObjectREFR::IsPartofEvilFaction);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsPartofEvilFaction };
			return func(this);
		}

		TESGlobal* GetOwnershipGlobal()
		{
			using func_t = decltype(&TESObjectREFR::GetOwnershipGlobal);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetOwnershipGlobal };
			return func(this);
		}

		std::int32_t GetOwnershipRank()
		{
			using func_t = decltype(&TESObjectREFR::GetOwnershipRank);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetOwnershipRank };
			return func(this);
		}

		void SetOwner(TESForm* apOwner)
		{
			using func_t = decltype(&TESObjectREFR::SetOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetOwner };
			func(this, apOwner);
		}

		void SetGlobal(TESGlobal* apGlobal)
		{
			using func_t = decltype(&TESObjectREFR::SetGlobal);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetGlobal };
			func(this, apGlobal);
		}

		void SetRank(std::int32_t aiRank)
		{
			using func_t = decltype(&TESObjectREFR::SetRank);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetRank };
			func(this, aiRank);
		}

		void RemoveOwner()
		{
			using func_t = decltype(&TESObjectREFR::RemoveOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RemoveOwner };
			func(this);
		}

		BGSEncounterZone* GetEncounterZone()
		{
			using func_t = decltype(&TESObjectREFR::GetEncounterZone);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetEncounterZone };
			return func(this);
		}

		BGSEncounterZone* GetLocationEncounterZone()
		{
			using func_t = decltype(&TESObjectREFR::GetLocationEncounterZone);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLocationEncounterZone };
			return func(this);
		}

		void SetEncounterZone(BGSEncounterZone* apZone)
		{
			using func_t = decltype(&TESObjectREFR::SetEncounterZone);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetEncounterZone };
			func(this, apZone);
		}

		std::uint32_t GetCalcLevel(bool abAllowShift)
		{
			using func_t = decltype(&TESObjectREFR::GetCalcLevel);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetCalcLevel };
			return func(this, abAllowShift);
		}

		bool GetMarkerUsed(std::uint32_t aiMarkerIndex, bool abIgnoreReservations)
		{
			using func_t = decltype(&TESObjectREFR::GetMarkerUsed);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMarkerUsed };
			return func(this, aiMarkerIndex, abIgnoreReservations);
		}

		void SetMarkerUsed(std::uint32_t aiMarkerIndex, bool abVal)
		{
			using func_t = decltype(&TESObjectREFR::SetMarkerUsed);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetMarkerUsed };
			func(this, aiMarkerIndex, abVal);
		}

		void SetMarkerReserved(std::uint32_t aiMarkerIndex, bool abVal)
		{
			using func_t = decltype(&TESObjectREFR::SetMarkerReserved);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetMarkerReserved };
			func(this, aiMarkerIndex, abVal);
		}

		bool HasFreeMarker(bool abIgnoreReservations)
		{
			using func_t = decltype(&TESObjectREFR::HasFreeMarker);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasFreeMarker };
			return func(this, abIgnoreReservations);
		}

		std::int32_t GetFirstFreeMarkerIndex(bool abIgnoreReservations)
		{
			using func_t = decltype(&TESObjectREFR::GetFirstFreeMarkerIndex);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetFirstFreeMarkerIndex };
			return func(this, abIgnoreReservations);
		}

		void FreeUpAllMarkers()
		{
			using func_t = decltype(&TESObjectREFR::FreeUpAllMarkers);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::FreeUpAllMarkers };
			func(this);
		}

		bool GetMarkerAtIndex(std::int32_t aiIndex, FurnitureMark& aOutMarker)
		{
			using func_t = decltype(&TESObjectREFR::GetMarkerAtIndex);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMarkerAtIndex };
			return func(this, aiIndex, aOutMarker);
		}

		bool IsFurniture()
		{
			using func_t = decltype(&TESObjectREFR::IsFurniture);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsFurniture };
			return func(this);
		}

		bool GetClosestFreeMarker(NiPoint3 const& aLocation, bool abSitOK, bool abSleepOK, FurnitureMark& aOutMarker, std::uint32_t& aiOutMarkerIndex, bool abIgnoreReservations)
		{
			using func_t = decltype(&TESObjectREFR::GetClosestFreeMarker);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetClosestFreeMarker };
			return func(this, aLocation, abSitOK, abSleepOK, aOutMarker, aiOutMarkerIndex, abIgnoreReservations);
		}

		float GetHealth()
		{
			using func_t = decltype(&TESObjectREFR::GetHealth);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetHealth };
			return func(this);
		}

		void SetHealth(float afVal)
		{
			using func_t = decltype(&TESObjectREFR::SetHealth);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetHealth };
			func(this, afVal);
		}

		float GetRadius()
		{
			using func_t = decltype(&TESObjectREFR::GetRadius);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetRadius };
			return func(this);
		}

		DoorTeleportData* GetTeleport()
		{
			using func_t = decltype(&TESObjectREFR::GetTeleport);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetTeleport };
			return func(this);
		}

		DoorTeleportData* AddTeleport()
		{
			using func_t = decltype(&TESObjectREFR::AddTeleport);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddTeleport };
			return func(this);
		}

		NiPoint3 const& GetLinkedDoorTeleportPosition()
		{
			using func_t = decltype(&TESObjectREFR::GetLinkedDoorTeleportPosition);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLinkedDoorTeleportPosition };
			return func(this);
		}

		NiPoint3 const& GetLinkedDoorTeleportRotation()
		{
			using func_t = decltype(&TESObjectREFR::GetLinkedDoorTeleportRotation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLinkedDoorTeleportRotation };
			return func(this);
		}

		MapMarkerData* GetMapMarkerData()
		{
			using func_t = decltype(&TESObjectREFR::GetMapMarkerData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMapMarkerData };
			return func(this);
		}

		REFR_LOCK* AddLock()
		{
			using func_t = decltype(&TESObjectREFR::AddLock);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddLock };
			return func(this);
		}

		REFR_LOCK* GetMyLock()
		{
			using func_t = decltype(&TESObjectREFR::GetMyLock);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMyLock };
			return func(this);
		}

		REFR_LOCK* GetLock()
		{
			using func_t = decltype(&TESObjectREFR::GetLock);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLock };
			return func(this);
		}

		std::int32_t GetLockLevel()
		{
			using func_t = decltype(&TESObjectREFR::GetLockLevel);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLockLevel };
			return func(this);
		}

		ExtraLock* GetExtraLock()
		{
			using func_t = decltype(&TESObjectREFR::GetExtraLock);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetExtraLock };
			return func(this);
		}

		void Lock()
		{
			using func_t = decltype(&TESObjectREFR::Lock);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Lock };
			func(this);
		}

		void UnLock()
		{
			using func_t = decltype(&TESObjectREFR::UnLock);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::UnLock };
			func(this);
		}

		std::uint32_t GetSeed()
		{
			using func_t = decltype(&TESObjectREFR::GetSeed);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetSeed };
			return func(this);
		}

		void SetSeed(std::uint32_t aiSeed)
		{
			using func_t = decltype(&TESObjectREFR::SetSeed);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetSeed };
			func(this, aiSeed);
		}

		TESObjectREFR* GetXTarget()
		{
			using func_t = decltype(&TESObjectREFR::GetXTarget);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetXTarget };
			return func(this);
		}

		bool CheckUsesExternalEmittance()
		{
			using func_t = decltype(&TESObjectREFR::CheckUsesExternalEmittance);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::CheckUsesExternalEmittance };
			return func(this);
		}

		TESForm* GetEmittanceSource()
		{
			using func_t = decltype(&TESObjectREFR::GetEmittanceSource);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetEmittanceSource };
			return func(this);
		}

		MultiBoundMarkerData* GetMultiBoundData()
		{
			using func_t = decltype(&TESObjectREFR::GetMultiBoundData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMultiBoundData };
			return func(this);
		}

		NiPoint3 const& GetMultiBoundHalfExtent()
		{
			using func_t = decltype(&TESObjectREFR::GetMultiBoundHalfExtent);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMultiBoundHalfExtent };
			return func(this);
		}

		BSMultiBound* GetMultiBound()
		{
			using func_t = decltype(&TESObjectREFR::GetMultiBound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMultiBound };
			return func(this);
		}

		BSMultiBoundRoom* GetMultiBoundRoom()
		{
			using func_t = decltype(&TESObjectREFR::GetMultiBoundRoom);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMultiBoundRoom };
			return func(this);
		}

		void SetMultiBoundRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectREFR::SetMultiBoundRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetMultiBoundRef };
			func(this, apRef);
		}

		TESObjectREFR* GetLinkedRef()
		{
			using func_t = decltype(&TESObjectREFR::GetLinkedRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLinkedRef };
			return func(this);
		}

		void SetLinkedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectREFR::SetLinkedRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetLinkedRef };
			func(this, apRef);
		}

		void DrawRefLink(bool abDraw)
		{
			using func_t = decltype(&TESObjectREFR::DrawRefLink);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::DrawRefLink };
			func(this, abDraw);
		}

		void RedrawRefLinks(bool abDraw, BSMap<TESObjectREFR*, bool>* pDrawnMap)
		{
			using func_t = decltype(&TESObjectREFR::RedrawRefLinks);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RedrawRefLinks };
			func(this, abDraw, pDrawnMap);
		}

		void DrawActivateRefLink(bool abDraw)
		{
			using func_t = decltype(&TESObjectREFR::DrawActivateRefLink);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::DrawActivateRefLink };
			func(this, abDraw);
		}

		bool IsActivatingChildren()
		{
			using func_t = decltype(&TESObjectREFR::IsActivatingChildren);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsActivatingChildren };
			return func(this);
		}

		void InitChildActivates(TESObjectREFR* apActionRef)
		{
			using func_t = decltype(&TESObjectREFR::InitChildActivates);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::InitChildActivates };
			func(this, apActionRef);
		}

		bool UpdateChildActivates()
		{
			using func_t = decltype(&TESObjectREFR::UpdateChildActivates);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::UpdateChildActivates };
			return func(this);
		}

		void ApplyAllDecals(bool abSetDecalData)
		{
			using func_t = decltype(&TESObjectREFR::ApplyAllDecals);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ApplyAllDecals };
			func(this, abSetDecalData);
		}

		void ClearAllDecals()
		{
			using func_t = decltype(&TESObjectREFR::ClearAllDecals);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ClearAllDecals };
			func(this);
		}

		void SetMerchantContainer(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectREFR::SetMerchantContainer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetMerchantContainer };
			func(this, apRef);
		}

		TESObjectREFR* GetEnableStateParent()
		{
			using func_t = decltype(&TESObjectREFR::GetEnableStateParent);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetEnableStateParent };
			return func(this);
		}

		void SetEnableStateParent(TESObjectREFR* apParent)
		{
			using func_t = decltype(&TESObjectREFR::SetEnableStateParent);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetEnableStateParent };
			func(this, apParent);
		}

		bool GetEnableStateInverse()
		{
			using func_t = decltype(&TESObjectREFR::GetEnableStateInverse);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetEnableStateInverse };
			return func(this);
		}

		bool CheckEnableParentLoop()
		{
			using func_t = decltype(&TESObjectREFR::CheckEnableParentLoop);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::CheckEnableParentLoop };
			return func(this);
		}

		void UpdateEnableStateChildrenFlagsRecursive()
		{
			using func_t = decltype(&TESObjectREFR::UpdateEnableStateChildrenFlagsRecursive);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::UpdateEnableStateChildrenFlagsRecursive };
			func(this);
		}

		BSSimpleList<TESObjectREFR*>* GetEnableStateChildList()
		{
			using func_t = decltype(&TESObjectREFR::GetEnableStateChildList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetEnableStateChildList };
			return func(this);
		}

		static void SetDroppedItemData(TESObjectREFR* apDropper, TESObjectREFR* apDroppedItem)
		{
			using func_t = decltype(&TESObjectREFR::SetDroppedItemData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetDroppedItemData };
			func(apDropper, apDroppedItem);
		}

		TESWorldSpace* GetPackageStartLocationWorld()
		{
			using func_t = decltype(&TESObjectREFR::GetPackageStartLocationWorld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetPackageStartLocationWorld };
			return func(this);
		}

		TESObjectCELL* GetPackageStartLocationInteriorCell()
		{
			using func_t = decltype(&TESObjectREFR::GetPackageStartLocationInteriorCell);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetPackageStartLocationInteriorCell };
			return func(this);
		}

		NiPoint3 const& GetPackageStartLocationCoord()
		{
			using func_t = decltype(&TESObjectREFR::GetPackageStartLocationCoord);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetPackageStartLocationCoord };
			return func(this);
		}

		void SetPackageStartLocation(TESWorldSpace* apWorld, TESObjectCELL* apIntCell, NiPoint3 const& aPt, float afzrotation)
		{
			using func_t = decltype(&TESObjectREFR::SetPackageStartLocation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetPackageStartLocation };
			func(this, apWorld, apIntCell, aPt, afzrotation);
		}

		bool GetRespawn()
		{
			using func_t = decltype(&TESObjectREFR::GetRespawn);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetRespawn };
			return func(this);
		}

		bool IsLeveledCreature()
		{
			using func_t = decltype(&TESObjectREFR::IsLeveledCreature);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsLeveledCreature };
			return func(this);
		}

		bool HasLeveledCreatureCalced()
		{
			using func_t = decltype(&TESObjectREFR::HasLeveledCreatureCalced);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasLeveledCreatureCalced };
			return func(this);
		}

		void RestoreLeveledCreatureOriginalBase()
		{
			using func_t = decltype(&TESObjectREFR::RestoreLeveledCreatureOriginalBase);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RestoreLeveledCreatureOriginalBase };
			func(this);
		}

		float GetRadioStationRadius()
		{
			using func_t = decltype(&TESObjectREFR::GetRadioStationRadius);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetRadioStationRadius };
			return func(this);
		}

		RADIO_RANGE_TYPE GetRadioStationRangeType()
		{
			using func_t = decltype(&TESObjectREFR::GetRadioStationRangeType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetRadioStationRangeType };
			return func(this);
		}

		bool Is3DHighPriority()
		{
			using func_t = decltype(&TESObjectREFR::Is3DHighPriority);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Is3DHighPriority };
			return func(this);
		}

		void SetLoadedDataFlag(std::uint32_t aiFlag, bool abValue)
		{
			using func_t = decltype(&TESObjectREFR::SetLoadedDataFlag);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetLoadedDataFlag };
			func(this, aiFlag, abValue);
		}

		void InitHavokForPlaceableWater()
		{
			using func_t = decltype(&TESObjectREFR::InitHavokForPlaceableWater);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::InitHavokForPlaceableWater };
			func(this);
		}

		void InitHavokForPrimitiveTrigger()
		{
			using func_t = decltype(&TESObjectREFR::InitHavokForPrimitiveTrigger);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::InitHavokForPrimitiveTrigger };
			func(this);
		}

		void InitHavokForCollisionObject()
		{
			using func_t = decltype(&TESObjectREFR::InitHavokForCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::InitHavokForCollisionObject };
			func(this);
		}

		void InitHavokForAcousticSpace()
		{
			using func_t = decltype(&TESObjectREFR::InitHavokForAcousticSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::InitHavokForAcousticSpace };
			func(this);
		}

		void UpdateReference3D()
		{
			using func_t = decltype(&TESObjectREFR::UpdateReference3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::UpdateReference3D };
			func(this);
		}

		static TESObjectREFR* FindReferenceFor3D(NiAVObject* apAVObjectIn)
		{
			using func_t = decltype(&TESObjectREFR::FindReferenceFor3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::FindReferenceFor3D };
			return func(apAVObjectIn);
		}

		NiMatrix3 GetOrientation()
		{
			using func_t = decltype(&TESObjectREFR::GetOrientation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetOrientation };
			return func(this);
		}

		void SetOrientation(NiMatrix3 rot)
		{
			using func_t = decltype(&TESObjectREFR::SetOrientation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetOrientation };
			func(this, rot);
		}

		NiMatrix3 MultipleMatrixByRace(NiMatrix3& result)
		{
			using func_t = decltype(&TESObjectREFR::MultipleMatrixByRace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::MultipleMatrixByRace };
			return func(this, result);
		}

		static NiPoint3 GetBoundMax(NiAVObject* result)
		{
			using func_t = NiPoint3(__cdecl*)(NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetBoundMax };
			return func(result);
		}

		void Release3DRelatedData()
		{
			using func_t = decltype(&TESObjectREFR::Release3DRelatedData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Release3DRelatedData };
			func(this);
		}

		void Set3DSimple(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESObjectREFR::Set3DSimple);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Set3DSimple };
			func(this, ap3D);
		}

		bool ReplaceModel()
		{
			using func_t = decltype(&TESObjectREFR::ReplaceModel);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ReplaceModel };
			return func(this);
		}

		NiAVObject* GetActorBone(NiAVObject* apRoot, NiFixedString& apSearch)
		{
			using func_t = NiAVObject* (TESObjectREFR::*)(NiAVObject*, NiFixedString&);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetActorBone_1 };
			return func(this, apRoot, apSearch);
		}

		void ClearInterpolators()
		{
			using func_t = decltype(&TESObjectREFR::ClearInterpolators);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ClearInterpolators };
			func(this);
		}

		char const* GetModel()
		{
			using func_t = decltype(&TESObjectREFR::GetModel);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetModel };
			return func(this);
		}

		float GetModelBoundSize()
		{
			using func_t = decltype(&TESObjectREFR::GetModelBoundSize);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetModelBoundSize };
			return func(this);
		}

		TESModel* GetTESModel()
		{
			using func_t = decltype(&TESObjectREFR::GetTESModel);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetTESModel };
			return func(this);
		}

		void RemoveWeapon()
		{
			using func_t = decltype(&TESObjectREFR::RemoveWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RemoveWeapon };
			func(this);
		}

		void MarkAsPickedUp()
		{
			using func_t = decltype(&TESObjectREFR::MarkAsPickedUp);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::MarkAsPickedUp };
			func(this);
		}

		void MarkAsDeleted()
		{
			using func_t = decltype(&TESObjectREFR::MarkAsDeleted);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::MarkAsDeleted };
			func(this);
		}

		bool Is3DCritical()
		{
			using func_t = decltype(&TESObjectREFR::Is3DCritical);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Is3DCritical };
			return func(this);
		}

		float GetDistanceFromPoint(NiPoint3 const& aPt)
		{
			using func_t = decltype(&TESObjectREFR::GetDistanceFromPoint);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetDistanceFromPoint };
			return func(this, aPt);
		}

		float GetDistanceFromReference(TESObjectREFR* apRef, bool abDisabled, bool bSameSpace)
		{
			using func_t = decltype(&TESObjectREFR::GetDistanceFromReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetDistanceFromReference };
			return func(this, apRef, abDisabled, bSameSpace);
		}

		NiPoint3 GetDeltaForAngle(float result)
		{
			using func_t = decltype(&TESObjectREFR::GetDeltaForAngle);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetDeltaForAngle };
			return func(this, result);
		}

		REFR_LIGHT* GetLight()
		{
			using func_t = decltype(&TESObjectREFR::GetLight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetLight };
			return func(this);
		}

		void SetLight(NiAVObject* apObj, bool abStateOn)
		{
			using func_t = decltype(&TESObjectREFR::SetLight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetLight };
			func(this, apObj, abStateOn);
		}

		void AddLight(bool abMagic)
		{
			using func_t = decltype(&TESObjectREFR::AddLight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddLight };
			func(this, abMagic);
		}

		void RemoveLight(bool abMagic)
		{
			using func_t = decltype(&TESObjectREFR::RemoveLight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RemoveLight };
			func(this, abMagic);
		}

		void KillLight(bool abMagic)
		{
			using func_t = decltype(&TESObjectREFR::KillLight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::KillLight };
			func(this, abMagic);
		}

		bool CanBeMoved()
		{
			using func_t = decltype(&TESObjectREFR::CanBeMoved);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::CanBeMoved };
			return func(this);
		}

		bool GetAction(OBJECT_ACTION type)
		{
			using func_t = decltype(&TESObjectREFR::GetAction);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetAction };
			return func(this, type);
		}

		void SetAction(OBJECT_ACTION type)
		{
			using func_t = decltype(&TESObjectREFR::SetAction);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetAction };
			func(this, type);
		}

		void ClearAction(OBJECT_ACTION type)
		{
			using func_t = decltype(&TESObjectREFR::ClearAction);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ClearAction };
			func(this, type);
		}

		void SetActionRef(TESObjectREFR* apRefIn)
		{
			using func_t = decltype(&TESObjectREFR::SetActionRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetActionRef };
			func(this, apRefIn);
		}

		TESObjectREFR* GetActionRef()
		{
			using func_t = decltype(&TESObjectREFR::GetActionRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetActionRef };
			return func(this);
		}

		bool GetDismembered(BGSBodyPart_LIMB_ENUM aeLimb)
		{
			using func_t = decltype(&TESObjectREFR::GetDismembered);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetDismembered };
			return func(this, aeLimb);
		}

		bool Activate(TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjecttoGet, std::int32_t aiCount)
		{
			using func_t = decltype(&TESObjectREFR::Activate);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Activate };
			return func(this, apActionRef, abIdFlag, apObjecttoGet, aiCount);
		}

		static void MoveRefToNewSpace(TESObjectREFR* apRef, TESObjectCELL* apInterior, TESWorldSpace* apWorld)
		{
			using func_t = decltype(&TESObjectREFR::MoveRefToNewSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::MoveRefToNewSpace };
			func(apRef, apInterior, apWorld);
		}

		void Enable()
		{
			using func_t = decltype(&TESObjectREFR::Enable);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Enable };
			func(this);
		}

		void Disable()
		{
			using func_t = decltype(&TESObjectREFR::Disable);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::Disable };
			func(this);
		}

		void AddReferenceItem(TESObjectREFR* apObject, std::int32_t aiNumber, bool abFlag, bool abWearit)
		{
			using func_t = decltype(&TESObjectREFR::AddReferenceItem);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddReferenceItem };
			func(this, apObject, aiNumber, abFlag, abWearit);
		}

		void AddBoundObjectItem(TESBoundObject* apObject, ExtraDataList* apExtra, std::int32_t aiNumber)
		{
			using func_t = decltype(&TESObjectREFR::AddBoundObjectItem);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddBoundObjectItem };
			func(this, apObject, apExtra, aiNumber);
		}

		bool WearingObject(TESBoundObject* apObject)
		{
			using func_t = decltype(&TESObjectREFR::WearingObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::WearingObject };
			return func(this, apObject);
		}

		bool HasObjectId(std::uint32_t aId)
		{
			using func_t = decltype(&TESObjectREFR::HasObjectId);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasObjectId };
			return func(this, aId);
		}

		ItemChange* GetInventoryItem(std::int32_t aiIndex, bool abBarter)
		{
			using func_t = ItemChange* (TESObjectREFR::*)(std::int32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetInventoryItem };
			return func(this, aiIndex, abBarter);
		}

		std::int32_t GetInventoryCount(bool abBarter, bool abPlayableCount)
		{
			using func_t = decltype(&TESObjectREFR::GetInventoryCount);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetInventoryCount };
			return func(this, abBarter, abPlayableCount);
		}

		std::int32_t GetInventoryObjectCount(TESBoundObject* apObject)
		{
			using func_t = decltype(&TESObjectREFR::GetInventoryObjectCount);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetInventoryObjectCount };
			return func(this, apObject);
		}

		BGSWorldLocation GetWorldLocation()
		{
			using func_t = decltype(&TESObjectREFR::GetWorldLocation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetWorldLocation };
			return func(this);
		}

		void SetObjectReference(TESBoundObject* apObject)
		{
			using func_t = decltype(&TESObjectREFR::SetObjectReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetObjectReference };
			func(this, apObject);
		}

		void SetAngleOnReference(NiPoint3 aPoint)
		{
			using func_t = decltype(&TESObjectREFR::SetAngleOnReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetAngleOnReference };
			func(this, aPoint);
		}

		void SetAngleOnReferenceX(float afx)
		{
			using func_t = decltype(&TESObjectREFR::SetAngleOnReferenceX);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetAngleOnReferenceX };
			func(this, afx);
		}

		void SetAngleOnReferenceY(float afy)
		{
			using func_t = decltype(&TESObjectREFR::SetAngleOnReferenceY);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetAngleOnReferenceY };
			func(this, afy);
		}

		void SetAngleOnReferenceZ(float afz)
		{
			using func_t = decltype(&TESObjectREFR::SetAngleOnReferenceZ);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetAngleOnReferenceZ };
			func(this, afz);
		}

		void SetLocationOnReference(NiPoint3 const& arPoint)
		{
			using func_t = decltype(&TESObjectREFR::SetLocationOnReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetLocationOnReference };
			func(this, arPoint);
		}

		TESForm* GetSpace()
		{
			using func_t = decltype(&TESObjectREFR::GetSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetSpace };
			return func(this);
		}

		bool GetInterior()
		{
			using func_t = decltype(&TESObjectREFR::GetInterior);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetInterior };
			return func(this);
		}

		TESWorldSpace* GetWorldSpace()
		{
			using func_t = decltype(&TESObjectREFR::GetWorldSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetWorldSpace };
			return func(this);
		}

		bool GetVATStarget()
		{
			using func_t = decltype(&TESObjectREFR::GetVATStarget);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetVATStarget };
			return func(this);
		}

		ItemChange* GetInventoryItem(TESBoundObject* apObject, std::uint32_t aId)
		{
			using func_t = ItemChange* (TESObjectREFR::*)(TESBoundObject*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetInventoryItem_1 };
			return func(this, apObject, aId);
		}

		static void FilteredAddObject(bhkNiCollisionObject* apCollision, bhkWorldNS_ObjectRecData& arData)
		{
			using func_t = decltype(&TESObjectREFR::FilteredAddObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::FilteredAddObject };
			func(apCollision, arData);
		}

		void CleanUpTraps()
		{
			using func_t = decltype(&TESObjectREFR::CleanUpTraps);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::CleanUpTraps };
			func(this);
		}

		void PreCalcTriStripsShapeAabb(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESObjectREFR::PreCalcTriStripsShapeAabb);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::PreCalcTriStripsShapeAabb };
			func(this, ap3D);
		}

		float GetWeightInContainer(bool abIsHardcore)
		{
			using func_t = decltype(&TESObjectREFR::GetWeightInContainer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetWeightInContainer };
			return func(this, abIsHardcore);
		}

		void RestoreRagDollData(RagDollData* pragdata)
		{
			using func_t = decltype(&TESObjectREFR::RestoreRagDollData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RestoreRagDollData };
			func(this, pragdata);
		}

		void ShowPrimitive(bool abShow)
		{
			using func_t = decltype(&TESObjectREFR::ShowPrimitive);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ShowPrimitive };
			func(this, abShow);
		}

		static void TransChangeCallback(bhkNiCollisionObject* apCollision, std::uint32_t aiChanged)
		{
			using func_t = decltype(&TESObjectREFR::TransChangeCallback);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::TransChangeCallback };
			func(apCollision, aiChanged);
		}

		static void DebugDisplayCallback(NiGeometry* ap3D, NiColor const& color)
		{
			using func_t = decltype(&TESObjectREFR::DebugDisplayCallback);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::DebugDisplayCallback };
			func(ap3D, color);
		}

		std::int32_t GetGoldCount()
		{
			using func_t = decltype(&TESObjectREFR::GetGoldCount);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetGoldCount };
			return func(this);
		}

		bool HasQuestObject()
		{
			using func_t = decltype(&TESObjectREFR::HasQuestObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasQuestObject };
			return func(this);
		}

		static bool AddAddonNodes(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectREFR::AddAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddAddonNodes };
			return func(apNode);
		}

		static bool AddMasterParticleAddonNodes(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectREFR::AddMasterParticleAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddMasterParticleAddonNodes };
			return func(apNode);
		}

		static bool RemoveMasterParticleAddonNodes(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectREFR::RemoveMasterParticleAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RemoveMasterParticleAddonNodes };
			return func(apNode);
		}

		static bool RemoveSounds(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectREFR::RemoveSounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RemoveSounds };
			return func(apNode);
		}

		static bool RemoveAddonNodes(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectREFR::RemoveAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RemoveAddonNodes };
			return func(apNode);
		}

		static bool HasAddonNodes(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectREFR::HasAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasAddonNodes };
			return func(apNode);
		}

		static bool HasAddonFlags(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectREFR::HasAddonFlags);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::HasAddonFlags };
			return func(apNode);
		}

		static void RandomizeAddons(NiAVObject* apObj, float afPhase)
		{
			using func_t = decltype(&TESObjectREFR::RandomizeAddons);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RandomizeAddons };
			func(apObj, afPhase);
		}

		bool IsAnOwner(Actor* pOwner, bool busefaction)
		{
			using func_t = decltype(&TESObjectREFR::IsAnOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsAnOwner };
			return func(this, pOwner, busefaction);
		}

		bool IsOwnerEvil(TESForm* apOwner)
		{
			using func_t = decltype(&TESObjectREFR::IsOwnerEvil);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsOwnerEvil };
			return func(this, apOwner);
		}

		void GetMapNameForLocation(BSStringT<char>& aOutMapName)
		{
			using func_t = decltype(&TESObjectREFR::GetMapNameForLocation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetMapNameForLocation };
			func(this, aOutMapName);
		}

		MobileObject* AddTalkingActivatorMobileObjectREFR()
		{
			using func_t = decltype(&TESObjectREFR::AddTalkingActivatorMobileObjectREFR);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddTalkingActivatorMobileObjectREFR };
			return func(this);
		}

		void AddLockChange()
		{
			using func_t = decltype(&TESObjectREFR::AddLockChange);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AddLockChange };
			func(this);
		}

		void SetLastFinishedSequence(char const* apSequenceName)
		{
			using func_t = decltype(&TESObjectREFR::SetLastFinishedSequence);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetLastFinishedSequence };
			func(this, apSequenceName);
		}

		std::int32_t GetTargetType()
		{
			using func_t = decltype(&TESObjectREFR::GetTargetType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetTargetType };
			return func(this);
		}

		bool IsCrimeToActivate()
		{
			using func_t = decltype(&TESObjectREFR::IsCrimeToActivate);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::IsCrimeToActivate };
			return func(this);
		}

		void AttachSound(bool abAttach)
		{
			using func_t = decltype(&TESObjectREFR::AttachSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::AttachSound };
			func(this, abAttach);
		}

		bool CanHaveSound()
		{
			using func_t = decltype(&TESObjectREFR::CanHaveSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::CanHaveSound };
			return func(this);
		}

		bool ShouldPlaySound()
		{
			using func_t = decltype(&TESObjectREFR::ShouldPlaySound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::ShouldPlaySound };
			return func(this);
		}

		void UpdateAddonNodeSounds(bool abDetachAll)
		{
			using func_t = decltype(&TESObjectREFR::UpdateAddonNodeSounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::UpdateAddonNodeSounds };
			func(this, abDetachAll);
		}

		void UpdateAddonNodeSoundsRecursive(NiAVObject* apRoot, bool abDetachAll)
		{
			using func_t = decltype(&TESObjectREFR::UpdateAddonNodeSoundsRecursive);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::UpdateAddonNodeSoundsRecursive };
			func(this, apRoot, abDetachAll);
		}

		void SetSayToTopic(TESTopic* apTopic)
		{
			using func_t = decltype(&TESObjectREFR::SetSayToTopic);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetSayToTopic };
			func(this, apTopic);
		}

		void FixAttachedBSObjectSizeAndTransform()
		{
			using func_t = decltype(&TESObjectREFR::FixAttachedBSObjectSizeAndTransform);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::FixAttachedBSObjectSizeAndTransform };
			func(this);
		}

		float GetRelevantWaterHeight()
		{
			using func_t = decltype(&TESObjectREFR::GetRelevantWaterHeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetRelevantWaterHeight };
			return func(this);
		}

		void SetInZone(WaterZone* apZone, bool abValue)
		{
			using func_t = decltype(&TESObjectREFR::SetInZone);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetInZone };
			func(this, apZone, abValue);
		}

		bool QUnderwater()
		{
			using func_t = decltype(&TESObjectREFR::QUnderwater);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::QUnderwater };
			return func(this);
		}

		void SetUnderwater(bool abVal)
		{
			using func_t = decltype(&TESObjectREFR::SetUnderwater);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SetUnderwater };
			func(this, abVal);
		}

		bool GetInaccessible()
		{
			using func_t = decltype(&TESObjectREFR::GetInaccessible);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetInaccessible };
			return func(this);
		}

		bool GetIsHiddenDoor()
		{
			using func_t = decltype(&TESObjectREFR::GetIsHiddenDoor);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetIsHiddenDoor };
			return func(this);
		}

		void RemoveFromAllWater(bool abTraverseAllZones)
		{
			using func_t = decltype(&TESObjectREFR::RemoveFromAllWater);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::RemoveFromAllWater };
			func(this, abTraverseAllZones);
		}

		void SayForceGoodbyeGreetingToPlayer(TESTopic* apGreetTopic, bool abForceSubtitle, bool abForceHeadTrack)
		{
			using func_t = decltype(&TESObjectREFR::SayForceGoodbyeGreetingToPlayer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::SayForceGoodbyeGreetingToPlayer };
			func(this, apGreetTopic, abForceSubtitle, abForceHeadTrack);
		}

		TESTopic* GetSayToTopic()
		{
			using func_t = decltype(&TESObjectREFR::GetSayToTopic);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetSayToTopic };
			return func(this);
		}

		bool UpdateMultiboundShapeTransformsRecursive(NiAVObject* apObject)
		{
			using func_t = decltype(&TESObjectREFR::UpdateMultiboundShapeTransformsRecursive);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::UpdateMultiboundShapeTransformsRecursive };
			return func(this, apObject);
		}

		float GetRawScale()
		{
			using func_t = decltype(&TESObjectREFR::GetRawScale);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetRawScale };
			return func(this);
		}

		TESBoundObject* GetObjectReference()
		{
			using func_t = decltype(&TESObjectREFR::GetObjectReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectREFR::GetObjectReference };
			return func(this);
		}

	public:
		// members
		TESSound*        pRandomSound;  // 1C
		OBJ_REFR         data;          // 20
		float            fRefScale;     // 3C
		TESObjectCELL*   pParentCell;   // 40
		ExtraDataList    m_Extra;       // 44
		LOADED_REF_DATA* pLoadedData;   // 64
	};
	static_assert(sizeof(TESObjectREFR) == 0x68);
}
