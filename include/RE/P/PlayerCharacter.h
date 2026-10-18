#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTION_FLAGS.h"
#include "RE/A/ACTOR_TYPE.h"
#include "RE/A/ActionPoints_Action.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/C/Character.h"
#include "RE/C/CharacterProgression.h"
#include "RE/G/GamePlayFormulas_DifficultyLevel.h"
#include "RE/G/GamePlayFormulas_HardcoreSetting.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/K/KILL_CAM_TYPE.h"
#include "RE/M/ModifierList_ClampStyle.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTMap.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/P/PLAYER_ACTION.h"
#include "RE/P/PackageNS_CRIME_TYPE.h"
#include "RE/T/TESRegionList.h"
#include "RE/T/TeleportPath.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class ActorsNearPlayerData;
	class AlchemyItem;
	class Animation;
	class AudioMarkerInfo;
	class BGSLoadFormBuffer;
	class BGSMusicType;
	class BGSNote;
	class BGSPerk;
	class BGSPerkEntry;
	class BGSQuestObjective;
	class BGSSaveFormBuffer;
	class BipedAnim;
	class CameraCaster;
	class CasinoData;
	class CombatController;
	class CombatGroup;
	class DialoguePackage;
	class ExtraDataList;
	class FurnitureMark;
	class HitCaster;
	class ImageSpaceModifierInstanceDOF;
	class ImageSpaceModifierInstanceDRB;
	class ItemChange;
	class MAP_MARKER_STRUCT;
	class MagicItem;
	class MagicShaderHitEffect;
	class MagicTarget;
	class MediaLocationController;
	class MobileObject;
	class NiAVObject;
	class NiLight;
	class NiNode;
	class PLAYER_TARGET_LOC;
	class PackageLocation;
	class PerkRankData;
	class PlayerActionObject;
	class Projectile;
	class QueuedFile;
	class SpellItem;
	class TESAmmo;
	class TESBoundObject;
	class TESCaravanCard;
	class TESClass;
	class TESForm;
	class TESObject;
	class TESObjectBOOK;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESObjectWEAP;
	class TESQuest;
	class TESQuestStageItem;
	class TESQuestTarget;
	class TESRegion;
	class TESRegionSound;
	class TESReputation;
	class TESTopic;
	class TESWorldSpace;
	class bhkMouseSpringAction;
	class bhkRigidBody;

	class PlayerCharacter :
		public Character  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PlayerCharacter };
		static constexpr auto VTABLE{ VTABLE::PlayerCharacter };

		enum class DISABLE_PLAYER_CONTROLS : std::int32_t
		{
			kDPC_NONE = 0x0,
			kDPC_MOVEMENT = 0x1,
			kDPC_LOOKING = 0x2,
			kDPC_PIPBOY = 0x4,
			kDPC_FIGHTING = 0x8,
			kDPC_POV_SWITCH = 0x10,
			kDPC_ROLL_OVER = 0x20,
			kDPC_SNEAKING = 0x40,
			kDPC_COUNT = 0x7,
			kDPC_ALL = 0xFF,
		};

		enum class GrabbingType : std::int32_t
		{
			kGRAB_NONE = 0x0,
			kGRAB_NORMAL = 0x1,
			kGRAB_INVENTORY_DROP = 0x2,
			kGRAB_TELEKINESIS = 0x3,
		};

		enum class ModifierGroup : std::int32_t
		{
			kTEMPORARY = 0x0,
			kSCRIPTS = 0x1,
			kDAMAGE = 0x2,
		};

		enum class PROGRESS_EVENT : std::int32_t
		{
			kLEVEL_UP = 0x0,
			kDEATH = 0x1,
			kEVENT_COUNT = 0x2,
		};

		enum class TerminalAccessType : std::int32_t
		{
			kTAT_HAS_NOTE = 0x0,
			kTAT_HACKED = 0x1,
			kTAT_LOCKED = 0x2,
			kTAT_HACK_ELIGIBLE = 0x3,
			kTAT_HACK_INELIGIBLE = 0x4,
		};

		// override (Character)
		virtual ~PlayerCharacter() = default;                                                                                                                               // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                                                  // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                                              // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                                                // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                            // 19
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                                                                // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                                                          // 1B
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                  // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                                                                                                // 1D
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                          // 21
		virtual void UpdateRefLight() override;                                                                                                                             // 5E
		virtual NiPoint3 GetLookingAtLocation() override;                                                                                                                   // 65
		virtual NiAVObject* Load3D(bool abBackgroundLoading) override;                                                                                                      // 72
		virtual void Set3D(NiAVObject* apObject, bool abTestProcessLevel) override;                                                                                         // 73
		virtual NiAVObject* Get3D() override;                                                                                                                               // 74
		virtual void UpdateAnimation() override;                                                                                                                            // 78
		virtual Animation* GetAnimation() override;                                                                                                                         // 79
		virtual BipedAnim* GetBiped() override;                                                                                                                             // 7A
		virtual BipedAnim* GetCurrentBiped() override;                                                                                                                      // 7B
		virtual bool IsNpc() override;                                                                                                                                      // 86
		virtual void SetParentCell(TESObjectCELL* apCell) override;                                                                                                         // 8A
		virtual void SetDialoguewithPlayer(bool abFlag) override;                                                                                                           // 9E
		virtual void EndDialogue() override;                                                                                                                                // A2
		virtual float GetHeading(bool abIgnoreImmobile) override;                                                                                                           // AF
		virtual void Update(float afDelta) override;                                                                                                                        // BE
		virtual void Resurrect(bool abResetInventory, bool abAttach3D, bool abGetupResurect) override;                                                                      // C9
		virtual void SetAdvanceNumber(std::int32_t inumber) override;                                                                                                       // CA
		virtual std::int32_t GetAdvanceNumber() override;                                                                                                                   // CB
		virtual void SetSkillAdvanceDelayed(ActorValue_Index aeskill) override;                                                                                             // CC
		virtual void UseActionPoints(float afAmount) override;                                                                                                              // CF
		virtual void UseActionPoints(ActionPoints_Action aeAction) override;                                                                                                // D0
		virtual bool IsOverEncumbered() override;                                                                                                                           // D6
		virtual bool IsPc() override;                                                                                                                                       // D8
		virtual bool GetCannibal() override;                                                                                                                                // D9
		virtual void SetCannibal(bool ab) override;                                                                                                                         // DA
		virtual bool GetSandman() override;                                                                                                                                 // DB
		virtual void SetSandman(bool ab) override;                                                                                                                          // DC
		virtual void InitiateSandmanPackage(Actor* apTarget, TESObjectREFR* pfurniture, FurnitureMark* aMarker, std::uint8_t auiIndex) override;                            // DD
		virtual void InitiateCannibalPackage(Actor* apTarget) override;                                                                                                     // DE
		virtual void SetRefraction(bool abEnable, float afRefractionPower) override;                                                                                        // E1
		virtual ACTOR_TYPE GetActorType() override;                                                                                                                         // E4
		virtual void SetActorValue(ActorValue_Index aiWhich, float afValue) override;                                                                                       // E5
		virtual void SetActorValue(ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                                // E6
		virtual void TempModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker) override;                                                         // E7
		virtual void PermanentModActorValue(ActorValue_Index aiWhich, float a_arg2, Actor* a_arg3) override;                                                                // E8
		virtual void PermanentModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker) override;                                                    // E9
		virtual void DamageModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker) override;                                                       // EB
		virtual void ModActorBaseValue(ActorValue_Index aiWhich, float afValue) override;                                                                                   // EC
		virtual void ModActorBaseValue(ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                            // ED
		virtual bool DamageEquipment(ItemChange* apEquipment, float afDamage, bool abIgnoreArmorSkill) override;                                                            // F2
		virtual TESObjectREFR* DropObject(TESObject* apobject, ExtraDataList* apExtra, std::int32_t ainumber, NiPoint3 const* apPoint, NiPoint3 const* apRotate) override;  // F3
		virtual void PickUpObject(TESObjectREFR* apobjREFR, std::int32_t aicount, bool abflag) override;                                                                    // F4
		virtual void CastScroll(TESObjectBOOK* apScroll, MagicTarget* apTarget) override;                                                                                   // F5
		virtual void UpdateWornEnchantments(float afElapsedTime) override;                                                                                                  // F7
		virtual bool AddSpell(SpellItem* apSpellIn) override;                                                                                                               // F8
		virtual bool RemoveSpell(SpellItem* apSpellIn) override;                                                                                                            // F9
		virtual bool ReloadWeapon(TESObjectWEAP* apWeapon, std::int32_t aiReloadAnim, bool bUseModValue) override;                                                          // FA
		virtual bool ReloadWeaponNV(TESObjectWEAP* apWeapon, std::int32_t aiReloadAnim, bool bUseModValue, bool bFromInventory) override;                                   // FB
		virtual std::uint32_t UseAmmo(std::int32_t aiShotCount) override;                                                                                                   // FC
		virtual void CheckTempModifiers() override;                                                                                                                         // FD
		virtual CombatGroup* GetCombatGroup() override;                                                                                                                     // FE
		virtual void SetCombatGroup(CombatGroup* apGroup) override;                                                                                                         // FF
		virtual void InitiateSpectator() override;                                                                                                                          // 103
		virtual void InitiateGetUpPackage() override;                                                                                                                       // 106
		virtual void SetAlpha(float afNewAlpha) override;                                                                                                                   // 107
		virtual CombatController* GetCombatController() override;                                                                                                           // 10A
		virtual Actor* GetCombatTarget() override;                                                                                                                          // 10B
		virtual void StopCombat(Actor* apAttacker) override;                                                                                                                // 10D
		virtual bool HasBeenAttacked() override;                                                                                                                            // 11C
		virtual void SetBeenAttacked(bool abFlag) override;                                                                                                                 // 11D
		virtual void UseSkill(ActorValue_Index aiSkill, std::uint32_t aiAction) override;                                                                                   // 11F
		virtual void RewardExperience(std::int32_t aiAmount) override;                                                                                                      // 122
		virtual float GetBaseValueOverride(ActorValue_Index aiWhich, bool& abExists) override;                                                                              // 123
		virtual void SetBaseValueOverride(ActorValue_Index aiWhich, float afValue) override;                                                                                // 124
		virtual void AddGunWobble() override;                                                                                                                               // 125
		virtual void AddPerk(BGSPerk* apPerk, std::uint8_t acRank, bool bAlt) override;                                                                                     // 126
		virtual void RemovePerk(BGSPerk* apPerk, bool bAlt) override;                                                                                                       // 127
		virtual std::uint8_t GetPerkRank(BGSPerk* apPerk, bool bAlt) override;                                                                                              // 128
		virtual void AddPerkEntry(BGSPerkEntry* apPerkEntry, bool bAlt) override;                                                                                           // 129
		virtual void RemovePerkEntry(BGSPerkEntry* apPerkEntry, bool bAlt) override;                                                                                        // 12A
		virtual BSSimpleList<BGSPerkEntry*>* GetPerkEntryList(std::uint8_t acEntryPoint, bool bAlt) override;                                                               // 12B
		virtual void StartAnimOn1stPerson(std::uint16_t asAnimGroup, ACTION_FLAGS aeFlags) override;                                                                        // 12C
		virtual bool IsImmobile() override;                                                                                                                                 // 12D
		virtual void HandleHealthDamage(Actor* apAttacker, float afDamage) override;                                                                                        // 12E
		virtual void CreateActorMover() override;                                                                                                                           // 134
		virtual NiPoint3 CalculateAnticipatedLocation(float result) override;                                                                                               // 136

		// add
		virtual bool InitiateDialogue(MobileObject* apTarget, PackageLocation* pPackLoc, PackageLocation* pPackSecondLoc, bool bHeadTrack, bool bMove, bool bflag, TESTopic* pTopic);  // 139
		virtual BSSimpleList<PerkRankData*>* GetPerkList(bool bAlt);                                                                                                                   // 13A

		[[nodiscard]] static PlayerCharacter* GetSingleton() noexcept
		{
			static REL::Relocation<PlayerCharacter**> singleton{ Offsets::PlayerCharacter::pSingleton };
			return *singleton;
		}

		CharacterProgression* GetCharacterProgressionInfo()
		{
			using func_t = decltype(&PlayerCharacter::GetCharacterProgressionInfo);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetCharacterProgressionInfo };
			return func(this);
		}

		BSSimpleList<TESTopic*>* GetTopicList()
		{
			using func_t = decltype(&PlayerCharacter::GetTopicList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetTopicList };
			return func(this);
		}

		NiNode* GetInventory3D()
		{
			using func_t = decltype(&PlayerCharacter::GetInventory3D);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetInventory3D };
			return func(this);
		}

		bool IsHardcore()
		{
			using func_t = decltype(&PlayerCharacter::IsHardcore);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsHardcore };
			return func(this);
		}

		bool Is3rdPerson()
		{
			using func_t = decltype(&PlayerCharacter::Is3rdPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::Is3rdPerson };
			return func(this);
		}

		void SetForceActivateRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&PlayerCharacter::SetForceActivateRef);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetForceActivateRef };
			func(this, apRef);
		}

		bool IsActually3rdPerson()
		{
			using func_t = decltype(&PlayerCharacter::IsActually3rdPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsActually3rdPerson };
			return func(this);
		}

		void ClearAutoAim()
		{
			using func_t = decltype(&PlayerCharacter::ClearAutoAim);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ClearAutoAim };
			func(this);
		}

		TESRegion* GetOccupiedRegion()
		{
			using func_t = decltype(&PlayerCharacter::GetOccupiedRegion);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetOccupiedRegion };
			return func(this);
		}

		bool GetTempPerson()
		{
			using func_t = decltype(&PlayerCharacter::GetTempPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetTempPerson };
			return func(this);
		}

		bool GetWant3rdPerson()
		{
			using func_t = decltype(&PlayerCharacter::GetWant3rdPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetWant3rdPerson };
			return func(this);
		}

		BSSimpleList<ActorsNearPlayerData*>* GetListofPerceivedActors()
		{
			using func_t = decltype(&PlayerCharacter::GetListofPerceivedActors);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetListofPerceivedActors };
			return func(this);
		}

		bool GetControlsDisabled(PlayerCharacter::DISABLE_PLAYER_CONTROLS aeDPC)
		{
			using func_t = decltype(&PlayerCharacter::GetControlsDisabled);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetControlsDisabled };
			return func(this, aeDPC);
		}

		bool IsSleeping()
		{
			using func_t = decltype(&PlayerCharacter::IsSleeping);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsSleeping };
			return func(this);
		}

		void SetSleeping(std::int32_t aiTime, bool absleep)
		{
			using func_t = decltype(&PlayerCharacter::SetSleeping);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetSleeping };
			func(this, aiTime, absleep);
		}

		void Force3rdPerson(bool ab3rdPerson)
		{
			using func_t = decltype(&PlayerCharacter::Force3rdPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::Force3rdPerson };
			func(this, ab3rdPerson);
		}

		bool GetInChargen()
		{
			using func_t = decltype(&PlayerCharacter::GetInChargen);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetInChargen };
			return func(this);
		}

		TESQuest* GetActiveQuest()
		{
			using func_t = decltype(&PlayerCharacter::GetActiveQuest);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetActiveQuest };
			return func(this);
		}

		void SetAIControlledPackage(bool abTF)
		{
			using func_t = decltype(&PlayerCharacter::SetAIControlledPackage);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetAIControlledPackage };
			func(this, abTF);
		}

		void DisableHardcoreTracking()
		{
			using func_t = decltype(&PlayerCharacter::DisableHardcoreTracking);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::DisableHardcoreTracking };
			func(this);
		}

		NiPoint3 const& GetCachedWorldCameraPos()
		{
			using func_t = decltype(&PlayerCharacter::GetCachedWorldCameraPos);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetCachedWorldCameraPos };
			return func(this);
		}

		void SetReputationUpdate(TESReputation* pRep)
		{
			using func_t = decltype(&PlayerCharacter::SetReputationUpdate);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetReputationUpdate };
			func(this, pRep);
		}

		bhkRigidBody* QCameraRigidBody()
		{
			using func_t = decltype(&PlayerCharacter::QCameraRigidBody);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::QCameraRigidBody };
			return func(this);
		}

		float GetEyeHeight()
		{
			using func_t = decltype(&PlayerCharacter::GetEyeHeight);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetEyeHeight };
			return func(this);
		}

		float GetWorldFOV()
		{
			using func_t = decltype(&PlayerCharacter::GetWorldFOV);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetWorldFOV };
			return func(this);
		}

		BSSimpleList<TESCaravanCard*>* GetInactiveCaravanCardList()
		{
			using func_t = decltype(&PlayerCharacter::GetInactiveCaravanCardList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetInactiveCaravanCardList };
			return func(this);
		}

		BSSimpleList<TESCaravanCard*>* GetActiveCaravanCardList()
		{
			using func_t = decltype(&PlayerCharacter::GetActiveCaravanCardList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetActiveCaravanCardList };
			return func(this);
		}

		NiAVObject* GetWeaponSightingNode()
		{
			using func_t = decltype(&PlayerCharacter::GetWeaponSightingNode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetWeaponSightingNode };
			return func(this);
		}

		TESObjectREFR* QPlayerMapMarker()
		{
			using func_t = decltype(&PlayerCharacter::QPlayerMapMarker);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::QPlayerMapMarker };
			return func(this);
		}

		void SetKillCamModeCallback(std::int32_t aiVal)
		{
			using func_t = decltype(&PlayerCharacter::SetKillCamModeCallback);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetKillCamModeCallback };
			func(this, aiVal);
		}

		void SetHardcoreCallback(std::int32_t aiVal)
		{
			using func_t = decltype(&PlayerCharacter::SetHardcoreCallback);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetHardcoreCallback };
			func(this, aiVal);
		}

		MagicShaderHitEffect* GetInventoryWeaponEffect()
		{
			using func_t = decltype(&PlayerCharacter::GetInventoryWeaponEffect);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetInventoryWeaponEffect };
			return func(this);
		}

		bhkMouseSpringAction* GetGrabSpring()
		{
			using func_t = decltype(&PlayerCharacter::GetGrabSpring);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetGrabSpring };
			return func(this);
		}

		bool IsPCToddler()
		{
			using func_t = decltype(&PlayerCharacter::IsPCToddler);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsPCToddler };
			return func(this);
		}

		std::uint32_t GetTotalPlayingTime()
		{
			using func_t = decltype(&PlayerCharacter::GetTotalPlayingTime);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetTotalPlayingTime };
			return func(this);
		}

		void UpdateTotalPlayingTime()
		{
			using func_t = decltype(&PlayerCharacter::UpdateTotalPlayingTime);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateTotalPlayingTime };
			func(this);
		}

		void ResetLastPlayingTimeUpdate()
		{
			using func_t = decltype(&PlayerCharacter::ResetLastPlayingTimeUpdate);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetLastPlayingTimeUpdate };
			func(this);
		}

		float Get1stPersonFOV()
		{
			using func_t = decltype(&PlayerCharacter::Get1stPersonFOV);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::Get1stPersonFOV };
			return func(this);
		}

		TESObjectREFR* GetGrabObject()
		{
			using func_t = decltype(&PlayerCharacter::GetGrabObject);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetGrabObject };
			return func(this);
		}

		void SetWeaponSightingNode(NiAVObject* apSightingNode)
		{
			using func_t = decltype(&PlayerCharacter::SetWeaponSightingNode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetWeaponSightingNode };
			func(this, apSightingNode);
		}

		void IncNumCrimes(PackageNS_CRIME_TYPE aiCrimeType, std::int32_t aiAmount)
		{
			using func_t = decltype(&PlayerCharacter::IncNumCrimes);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IncNumCrimes };
			func(this, aiCrimeType, aiAmount);
		}

		bool GetPlayerGreetFlag()
		{
			using func_t = decltype(&PlayerCharacter::GetPlayerGreetFlag);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetPlayerGreetFlag };
			return func(this);
		}

		PlayerCharacter* ctor()
		{
			using func_t = PlayerCharacter*(__thiscall*)(PlayerCharacter*);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ctor };
			return func(this);
		}

		void RemoveActorFromPlayercombatList(Actor* apActor)
		{
			using func_t = decltype(&PlayerCharacter::RemoveActorFromPlayercombatList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RemoveActorFromPlayercombatList };
			func(this, apActor);
		}

		void AddActorToPlayerCombatList(Actor* apActor)
		{
			using func_t = decltype(&PlayerCharacter::AddActorToPlayerCombatList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AddActorToPlayerCombatList };
			func(this, apActor);
		}

		bool GetUnderAIControl()
		{
			using func_t = decltype(&PlayerCharacter::GetUnderAIControl);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetUnderAIControl };
			return func(this);
		}

		void SetOccupiedRegion(TESRegion* pRegion)
		{
			using func_t = decltype(&PlayerCharacter::SetOccupiedRegion);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetOccupiedRegion };
			func(this, pRegion);
		}

		void SetActorBaseValue(ActorValue_Index aiWhich, std::int32_t aiValue)
		{
			using func_t = void (PlayerCharacter::*)(ActorValue_Index, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetActorBaseValue };
			func(this, aiWhich, aiValue);
		}

		void SetActorBaseValue(ActorValue_Index aiWhich, float afValue)
		{
			using func_t = void (PlayerCharacter::*)(ActorValue_Index, float);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetActorBaseValue_1 };
			func(this, aiWhich, afValue);
		}

		void GetInventoryEncumbrance(float& afCurrentEncumbrance, float& afMaxEncumbrance)
		{
			using func_t = decltype(&PlayerCharacter::GetInventoryEncumbrance);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetInventoryEncumbrance };
			func(this, afCurrentEncumbrance, afMaxEncumbrance);
		}

		TESObjectCELL* GetWaterCell(float afCheckRadius)
		{
			using func_t = decltype(&PlayerCharacter::GetWaterCell);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetWaterCell };
			return func(this, afCheckRadius);
		}

		void RequestPositionPlayer(PLAYER_TARGET_LOC* apTargetLoc)
		{
			using func_t = decltype(&PlayerCharacter::RequestPositionPlayer);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RequestPositionPlayer };
			func(this, apTargetLoc);
		}

		bool HandlePositionPlayerRequest()
		{
			using func_t = decltype(&PlayerCharacter::HandlePositionPlayerRequest);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::HandlePositionPlayerRequest };
			return func(this);
		}

		void FastTravel(TESObjectREFR* apRef)
		{
			using func_t = decltype(&PlayerCharacter::FastTravel);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::FastTravel };
			func(this, apRef);
		}

		void ClearCellsIfTargetNotLoaded(TESObjectCELL* apTarget, TESWorldSpace* apWorldSpace)
		{
			using func_t = decltype(&PlayerCharacter::ClearCellsIfTargetNotLoaded);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ClearCellsIfTargetNotLoaded };
			func(this, apTarget, apWorldSpace);
		}

		bool CanFastTravel()
		{
			using func_t = decltype(&PlayerCharacter::CanFastTravel);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CanFastTravel };
			return func(this);
		}

		void CenterOnCell(char* apCellID, TESObjectCELL* apCellIn)
		{
			using func_t = decltype(&PlayerCharacter::CenterOnCell);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CenterOnCell };
			func(this, apCellID, apCellIn);
		}

		void ShaderNearbyItems()
		{
			using func_t = decltype(&PlayerCharacter::ShaderNearbyItems);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ShaderNearbyItems };
			func(this);
		}

		void SetSlowMoCamera(TESObjectREFR* pTarget, float a_arg2, bool a_arg3, BGSBodyPart_LIMB_ENUM bKillShot)
		{
			using func_t = decltype(&PlayerCharacter::SetSlowMoCamera);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetSlowMoCamera };
			func(this, pTarget, a_arg2, a_arg3, bKillShot);
		}

		void ResetKillCam(KILL_CAM_TYPE eOldType, bool bForceReset)
		{
			using func_t = decltype(&PlayerCharacter::ResetKillCam);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetKillCam };
			func(this, eOldType, bForceReset);
		}

		void UpdatePlayerCombat(float afDelta)
		{
			using func_t = decltype(&PlayerCharacter::UpdatePlayerCombat);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdatePlayerCombat };
			func(this, afDelta);
		}

		bool UpdateHeadingAndLooking(float afDelta, bool abHorse, std::uint16_t* apMoveMode, bool abScanFinished)
		{
			using func_t = decltype(&PlayerCharacter::UpdateHeadingAndLooking);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateHeadingAndLooking };
			return func(this, afDelta, abHorse, apMoveMode, abScanFinished);
		}

		void AmmoSwapHelper(bool abStartReloadAnimation, bool bOnlyIfEmpty)
		{
			using func_t = decltype(&PlayerCharacter::AmmoSwapHelper);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AmmoSwapHelper };
			func(this, abStartReloadAnimation, bOnlyIfEmpty);
		}

		void UpdateFlyCamera(float afDelta, bool abFreezeTime)
		{
			using func_t = decltype(&PlayerCharacter::UpdateFlyCamera);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateFlyCamera };
			func(this, afDelta, abFreezeTime);
		}

		void CheckBorderRegion()
		{
			using func_t = decltype(&PlayerCharacter::CheckBorderRegion);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CheckBorderRegion };
			func(this);
		}

		void ResetAudioMarkerList()
		{
			using func_t = decltype(&PlayerCharacter::ResetAudioMarkerList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetAudioMarkerList };
			func(this);
		}

		void ResetMapMarkerStructList()
		{
			using func_t = decltype(&PlayerCharacter::ResetMapMarkerStructList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetMapMarkerStructList };
			func(this);
		}

		void ForceGrenadeHold()
		{
			using func_t = decltype(&PlayerCharacter::ForceGrenadeHold);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ForceGrenadeHold };
			func(this);
		}

		bool CheckUserInputAttacks()
		{
			using func_t = decltype(&PlayerCharacter::CheckUserInputAttacks);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CheckUserInputAttacks };
			return func(this);
		}

		void UpdateChaseCamera(NiPoint3* apCameraPos, NiPoint3* apTargetPos, bool abSnapXY)
		{
			using func_t = decltype(&PlayerCharacter::UpdateChaseCamera);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateChaseCamera };
			func(this, apCameraPos, apTargetPos, abSnapXY);
		}

		void UpdateUFOCamera()
		{
			using func_t = decltype(&PlayerCharacter::UpdateUFOCamera);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateUFOCamera };
			func(this);
		}

		void UpdateCamera(bool abForce)
		{
			using func_t = decltype(&PlayerCharacter::UpdateCamera);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateCamera };
			func(this, abForce);
		}

		void SetSelectedSpell(MagicItem* apSelectedSpell)
		{
			using func_t = decltype(&PlayerCharacter::SetSelectedSpell);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetSelectedSpell };
			func(this, apSelectedSpell);
		}

		void SetSelectedScroll(TESObjectBOOK* apScroll)
		{
			using func_t = decltype(&PlayerCharacter::SetSelectedScroll);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetSelectedScroll };
			func(this, apScroll);
		}

		void ReturnToLastKnownGoodPosition(bool abPositionPlayer)
		{
			using func_t = decltype(&PlayerCharacter::ReturnToLastKnownGoodPosition);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ReturnToLastKnownGoodPosition };
			func(this, abPositionPlayer);
		}

		bool IsSleepingorResting()
		{
			using func_t = decltype(&PlayerCharacter::IsSleepingorResting);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsSleepingorResting };
			return func(this);
		}

		void PlayerSleep()
		{
			using func_t = decltype(&PlayerCharacter::PlayerSleep);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::PlayerSleep };
			func(this);
		}

		void ExportProgressData(PlayerCharacter::PROGRESS_EVENT aeEvent)
		{
			using func_t = decltype(&PlayerCharacter::ExportProgressData);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ExportProgressData };
			func(this, aeEvent);
		}

		void RewardKarma(std::int32_t aiAmount)
		{
			using func_t = decltype(&PlayerCharacter::RewardKarma);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RewardKarma };
			func(this, aiAmount);
		}

		void SetInChargen(bool abflag)
		{
			using func_t = decltype(&PlayerCharacter::SetInChargen);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetInChargen };
			func(this, abflag);
		}

		void UpdatePlayer3d()
		{
			using func_t = decltype(&PlayerCharacter::UpdatePlayer3d);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdatePlayer3d };
			func(this);
		}

		bool IsVanityMode()
		{
			using func_t = decltype(&PlayerCharacter::IsVanityMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsVanityMode };
			return func(this);
		}

		void StopVanityMode()
		{
			using func_t = decltype(&PlayerCharacter::StopVanityMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::StopVanityMode };
			func(this);
		}

		bool SetFirstPerson(bool abFirst)
		{
			using func_t = decltype(&PlayerCharacter::SetFirstPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetFirstPerson };
			return func(this, abFirst);
		}

		void UpdateFirstPersonZoom()
		{
			using func_t = decltype(&PlayerCharacter::UpdateFirstPersonZoom);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateFirstPersonZoom };
			func(this);
		}

		bool ForceTemp3rdPerson(bool abForceCameraDistance)
		{
			using func_t = decltype(&PlayerCharacter::ForceTemp3rdPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ForceTemp3rdPerson };
			return func(this, abForceCameraDistance);
		}

		void UpdateTemp3rdPerson()
		{
			using func_t = decltype(&PlayerCharacter::UpdateTemp3rdPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateTemp3rdPerson };
			func(this);
		}

		bool ForceTemp1stPerson(bool abIronSights1stPerson)
		{
			using func_t = decltype(&PlayerCharacter::ForceTemp1stPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ForceTemp1stPerson };
			return func(this, abIronSights1stPerson);
		}

		void UpdateTemp1stPerson()
		{
			using func_t = decltype(&PlayerCharacter::UpdateTemp1stPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateTemp1stPerson };
			func(this);
		}

		float SetFOV(float afFOV)
		{
			using func_t = decltype(&PlayerCharacter::SetFOV);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetFOV };
			return func(this, afFOV);
		}

		Animation* GetAnimation(bool abFirstPerson)
		{
			using func_t = Animation* (PlayerCharacter::*)(bool);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetAnimation };
			return func(this, abFirstPerson);
		}

		BipedAnim* GetBiped(bool abFirstPerson)
		{
			using func_t = BipedAnim* (PlayerCharacter::*)(bool);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetBiped };
			return func(this, abFirstPerson);
		}

		NiAVObject* Get3D(bool abFirstPerson)
		{
			using func_t = NiAVObject* (PlayerCharacter::*)(bool);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::Get3D };
			return func(this, abFirstPerson);
		}

		NiAVObject* GetCurrent3D()
		{
			using func_t = decltype(&PlayerCharacter::GetCurrent3D);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetCurrent3D };
			return func(this);
		}

		NiNode* CloneInventory3D(bool abFlag)
		{
			using func_t = decltype(&PlayerCharacter::CloneInventory3D);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CloneInventory3D };
			return func(this, abFlag);
		}

		void RecursiveReadyInventoryNode(NiNode* apNode)
		{
			using func_t = decltype(&PlayerCharacter::RecursiveReadyInventoryNode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RecursiveReadyInventoryNode };
			func(this, apNode);
		}

		void Show1stPerson(bool abFirstPerson)
		{
			using func_t = decltype(&PlayerCharacter::Show1stPerson);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::Show1stPerson };
			func(this, abFirstPerson);
		}

		void UpdateArmRotation()
		{
			using func_t = decltype(&PlayerCharacter::UpdateArmRotation);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateArmRotation };
			func(this);
		}

		static void SetGodMode(bool abGodMode)
		{
			using func_t = decltype(&PlayerCharacter::SetGodMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetGodMode };
			func(abGodMode);
		}

		static bool IsGodMode()
		{
			using func_t = decltype(&PlayerCharacter::IsGodMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsGodMode };
			return func();
		}

		static bool IsDemigodMode()
		{
			using func_t = decltype(&PlayerCharacter::IsDemigodMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsDemigodMode };
			return func();
		}

		bool AddQuestStageItem(TESQuestStageItem* apNewItem)
		{
			using func_t = decltype(&PlayerCharacter::AddQuestStageItem);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AddQuestStageItem };
			return func(this, apNewItem);
		}

		void SetActiveQuest(TESQuest* apActiveQuest)
		{
			using func_t = decltype(&PlayerCharacter::SetActiveQuest);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetActiveQuest };
			func(this, apActiveQuest);
		}

		BSSimpleList<TESQuestTarget*>* GetCurrentTargetList()
		{
			using func_t = decltype(&PlayerCharacter::GetCurrentTargetList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetCurrentTargetList };
			return func(this);
		}

		void CheckForQuestTargetUpdate(TESObjectREFR* apMovingRef)
		{
			using func_t = decltype(&PlayerCharacter::CheckForQuestTargetUpdate);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CheckForQuestTargetUpdate };
			func(this, apMovingRef);
		}

		void BuildPathToTarget(TESObjectREFR* apTargetRef, TeleportPath* apOutResultPath, bool abIgnoreLocks)
		{
			using func_t = decltype(&PlayerCharacter::BuildPathToTarget);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::BuildPathToTarget };
			func(this, apTargetRef, apOutResultPath, abIgnoreLocks);
		}

		void SetPlayerMapMarker(NiPoint3 apSpace, TESForm* a_arg2)
		{
			using func_t = decltype(&PlayerCharacter::SetPlayerMapMarker);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetPlayerMapMarker };
			func(this, apSpace, a_arg2);
		}

		void RemovePlayerMapMarker()
		{
			using func_t = decltype(&PlayerCharacter::RemovePlayerMapMarker);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RemovePlayerMapMarker };
			func(this);
		}

		void FocusOnActor(MobileObject* apActor, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&PlayerCharacter::FocusOnActor);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::FocusOnActor };
			func(this, apActor, a_arg2, a_arg3);
		}

		std::int32_t GetNumberActorsInCombat()
		{
			using func_t = decltype(&PlayerCharacter::GetNumberActorsInCombat);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetNumberActorsInCombat };
			return func(this);
		}

		bool IsPlayerCharacterInCombat(bool* abAreAllCombatTargetsSearching)
		{
			using func_t = decltype(&PlayerCharacter::IsPlayerCharacterInCombat);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsPlayerCharacterInCombat };
			return func(this, abAreAllCombatTargetsSearching);
		}

		void ResetPlayerGreetFlag()
		{
			using func_t = decltype(&PlayerCharacter::ResetPlayerGreetFlag);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetPlayerGreetFlag };
			func(this);
		}

		void InitiateSitSleepPackage(TESObjectREFR* apCurrentFurniture)
		{
			using func_t = decltype(&PlayerCharacter::InitiateSitSleepPackage);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::InitiateSitSleepPackage };
			func(this, apCurrentFurniture);
		}

		bool IsActorFollowingPlayer(Actor* apActor)
		{
			using func_t = decltype(&PlayerCharacter::IsActorFollowingPlayer);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsActorFollowingPlayer };
			return func(this, apActor);
		}

		bool IsActorFollowingEscortingPlayer(Actor* apActor, bool bAll)
		{
			using func_t = decltype(&PlayerCharacter::IsActorFollowingEscortingPlayer);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsActorFollowingEscortingPlayer };
			return func(this, apActor, bAll);
		}

		void SetNeedResetHardcoreTimer(bool aNeedReset)
		{
			using func_t = decltype(&PlayerCharacter::SetNeedResetHardcoreTimer);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetNeedResetHardcoreTimer };
			func(this, aNeedReset);
		}

		bool AddEatDrinkItem(MagicItem* apItem)
		{
			using func_t = decltype(&PlayerCharacter::AddEatDrinkItem);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AddEatDrinkItem };
			return func(this, apItem);
		}

		void DoIronSightsZoom(float afDelta)
		{
			using func_t = decltype(&PlayerCharacter::DoIronSightsZoom);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::DoIronSightsZoom };
			func(this, afDelta);
		}

		void CheckPoisonWeapon(AlchemyItem* apPoison)
		{
			using func_t = decltype(&PlayerCharacter::CheckPoisonWeapon);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CheckPoisonWeapon };
			func(this, apPoison);
		}

		static void PoisonWeapon()
		{
			using func_t = decltype(&PlayerCharacter::PoisonWeapon);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::PoisonWeapon };
			func();
		}

		void AddQueuedEnchantment(TESBoundObject* apObject, ExtraDataList* apExtra)
		{
			using func_t = decltype(&PlayerCharacter::AddQueuedEnchantment);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AddQueuedEnchantment };
			func(this, apObject, apExtra);
		}

		void RemoveQueuedEnchantment(TESBoundObject* apObject, ExtraDataList* apExtra)
		{
			using func_t = decltype(&PlayerCharacter::RemoveQueuedEnchantment);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RemoveQueuedEnchantment };
			func(this, apObject, apExtra);
		}

		void Setup3rdPersonCameraCaster()
		{
			using func_t = decltype(&PlayerCharacter::Setup3rdPersonCameraCaster);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::Setup3rdPersonCameraCaster };
			func(this);
		}

		void Preload1stPersonAnimsFileList()
		{
			using func_t = decltype(&PlayerCharacter::Preload1stPersonAnimsFileList);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::Preload1stPersonAnimsFileList };
			func(this);
		}

		void QueuePlayerAnims(IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = decltype(&PlayerCharacter::QueuePlayerAnims);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::QueuePlayerAnims };
			func(this, aePriority, apParent);
		}

		void SetControlsDisabled(bool abDisable, PlayerCharacter::DISABLE_PLAYER_CONTROLS aeDPC)
		{
			using func_t = void (PlayerCharacter::*)(bool, PlayerCharacter::DISABLE_PLAYER_CONTROLS);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetControlsDisabled };
			func(this, abDisable, aeDPC);
		}

		void SetControlsDisabled(std::uint8_t aucDisabled)
		{
			using func_t = void (PlayerCharacter::*)(std::uint8_t);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetControlsDisabled_1 };
			func(this, aucDisabled);
		}

		void ForcePhysicsGrabDrop()
		{
			using func_t = decltype(&PlayerCharacter::ForcePhysicsGrabDrop);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ForcePhysicsGrabDrop };
			func(this);
		}

		void CreateMouseSpring(TESObjectREFR* apObject, PlayerCharacter::GrabbingType aeGrabType, float afDistance)
		{
			using func_t = decltype(&PlayerCharacter::CreateMouseSpring);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CreateMouseSpring };
			func(this, apObject, aeGrabType, afDistance);
		}

		void UpdateMouseSpring(float afTimeDelta)
		{
			using func_t = decltype(&PlayerCharacter::UpdateMouseSpring);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateMouseSpring };
			func(this, afTimeDelta);
		}

		void DestroyMouseSpring()
		{
			using func_t = decltype(&PlayerCharacter::DestroyMouseSpring);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::DestroyMouseSpring };
			func(this);
		}

		bool UpdateDropSpring(float afTimeDelta)
		{
			using func_t = decltype(&PlayerCharacter::UpdateDropSpring);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateDropSpring };
			return func(this, afTimeDelta);
		}

		bool GetDropPoint(TESBoundObject* apObject, NiPoint3& aPoint, bool abAllowBackupPoint, bool abAdvanceExtraRotate)
		{
			using func_t = decltype(&PlayerCharacter::GetDropPoint);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetDropPoint };
			return func(this, apObject, aPoint, abAllowBackupPoint, abAdvanceExtraRotate);
		}

		static void DeathMenu()
		{
			using func_t = decltype(&PlayerCharacter::DeathMenu);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::DeathMenu };
			func();
		}

		bool ToggleFlyCam(bool abFreezeTime)
		{
			using func_t = decltype(&PlayerCharacter::ToggleFlyCam);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ToggleFlyCam };
			return func(this, abFreezeTime);
		}

		void ResetMagicCastSound()
		{
			using func_t = decltype(&PlayerCharacter::ResetMagicCastSound);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetMagicCastSound };
			func(this);
		}

		void PlayImpactBasedHitShader(TESObjectREFR* apRef)
		{
			using func_t = decltype(&PlayerCharacter::PlayImpactBasedHitShader);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::PlayImpactBasedHitShader };
			func(this, apRef);
		}

		void HavokActivateDroppedReference()
		{
			using func_t = decltype(&PlayerCharacter::HavokActivateDroppedReference);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::HavokActivateDroppedReference };
			func(this);
		}

		void ResetShapeCasterInfo()
		{
			using func_t = decltype(&PlayerCharacter::ResetShapeCasterInfo);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetShapeCasterInfo };
			func(this);
		}

		void EnteringMenuMode()
		{
			using func_t = decltype(&PlayerCharacter::EnteringMenuMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::EnteringMenuMode };
			func(this);
		}

		std::int32_t GetNumberOfFollowers()
		{
			using func_t = decltype(&PlayerCharacter::GetNumberOfFollowers);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetNumberOfFollowers };
			return func(this);
		}

		bool IsPlayerFollower(Actor* apActor)
		{
			using func_t = decltype(&PlayerCharacter::IsPlayerFollower);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsPlayerFollower };
			return func(this, apActor);
		}

		void ShowInsufficientChargeMessage()
		{
			using func_t = decltype(&PlayerCharacter::ShowInsufficientChargeMessage);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ShowInsufficientChargeMessage };
			func(this);
		}

		bool IsConflictingObject(NiAVObject* apObj)
		{
			using func_t = decltype(&PlayerCharacter::IsConflictingObject);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsConflictingObject };
			return func(this, apObj);
		}

		void UpdateConflictingObjects()
		{
			using func_t = decltype(&PlayerCharacter::UpdateConflictingObjects);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateConflictingObjects };
			func(this);
		}

		void AddPlayerAction(PLAYER_ACTION aeAction, float a_arg2, TESObjectREFR* a_arg3)
		{
			using func_t = decltype(&PlayerCharacter::AddPlayerAction);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AddPlayerAction };
			func(this, aeAction, a_arg2, a_arg3);
		}

		void UpdateAutoAimActor()
		{
			using func_t = decltype(&PlayerCharacter::UpdateAutoAimActor);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateAutoAimActor };
			func(this);
		}

		void UpdateImageSpaceIronsights()
		{
			using func_t = decltype(&PlayerCharacter::UpdateImageSpaceIronsights);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateImageSpaceIronsights };
			func(this);
		}

		void UpdateImageSpaceVATS()
		{
			using func_t = decltype(&PlayerCharacter::UpdateImageSpaceVATS);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateImageSpaceVATS };
			func(this);
		}

		void StopIronSightsImageSpace()
		{
			using func_t = decltype(&PlayerCharacter::StopIronSightsImageSpace);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::StopIronSightsImageSpace };
			func(this);
		}

		void ApplyAutoAimActor(Projectile* apProjectile, NiAVObject* apReleaseObj, float& apHeading, float& apLooking, NiPoint3* apOrigin, float afStartHeading, float afStartLooking)
		{
			using func_t = decltype(&PlayerCharacter::ApplyAutoAimActor);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ApplyAutoAimActor };
			func(this, apProjectile, apReleaseObj, apHeading, apLooking, apOrigin, afStartHeading, afStartLooking);
		}

		void AddNote(BGSNote* apNote, bool abVerbose)
		{
			using func_t = decltype(&PlayerCharacter::AddNote);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AddNote };
			func(this, apNote, abVerbose);
		}

		PlayerCharacter::TerminalAccessType GetTerminalAccess(TESObjectREFR* apTerminalRef)
		{
			using func_t = decltype(&PlayerCharacter::GetTerminalAccess);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetTerminalAccess };
			return func(this, apTerminalRef);
		}

		void SetMoveMode(std::uint32_t aiMoveMode, bool abValue)
		{
			using func_t = decltype(&PlayerCharacter::SetMoveMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetMoveMode };
			func(this, aiMoveMode, abValue);
		}

		ActorsNearPlayerData* IsActorPerceived(Actor* apActor)
		{
			using func_t = decltype(&PlayerCharacter::IsActorPerceived);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsActorPerceived };
			return func(this, apActor);
		}

		void RemovePerceivedActor(Actor* apActor)
		{
			using func_t = decltype(&PlayerCharacter::RemovePerceivedActor);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RemovePerceivedActor };
			func(this, apActor);
		}

		void UpdateMenuModeButton(float afTimeDelta)
		{
			using func_t = decltype(&PlayerCharacter::UpdateMenuModeButton);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateMenuModeButton };
			func(this, afTimeDelta);
		}

		void CheckForClosesConversation(MobileObject* apSpeaker, MobileObject* apTarget, DialoguePackage* apDialogPack)
		{
			using func_t = decltype(&PlayerCharacter::CheckForClosesConversation);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CheckForClosesConversation };
			func(this, apSpeaker, apTarget, apDialogPack);
		}

		bool IsStandingOnFurniture()
		{
			using func_t = decltype(&PlayerCharacter::IsStandingOnFurniture);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsStandingOnFurniture };
			return func(this);
		}

		TESObjectREFR* GetBumpedRef()
		{
			using func_t = decltype(&PlayerCharacter::GetBumpedRef);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetBumpedRef };
			return func(this);
		}

		Actor* GetBumpedActor()
		{
			using func_t = decltype(&PlayerCharacter::GetBumpedActor);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetBumpedActor };
			return func(this);
		}

		bool IsPipboyActive()
		{
			using func_t = decltype(&PlayerCharacter::IsPipboyActive);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsPipboyActive };
			return func(this);
		}

		bool CanEquipOrUseObject(ItemChange* apItem)
		{
			using func_t = decltype(&PlayerCharacter::CanEquipOrUseObject);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CanEquipOrUseObject };
			return func(this, apItem);
		}

		std::uint32_t AttemptYield()
		{
			using func_t = decltype(&PlayerCharacter::AttemptYield);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AttemptYield };
			return func(this);
		}

		void ReportRadiationChange()
		{
			using func_t = decltype(&PlayerCharacter::ReportRadiationChange);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ReportRadiationChange };
			func(this);
		}

		void AddRockItAmmo(TESBoundObject* apObj, ExtraDataList* apExtra, std::int32_t aiNumAdded)
		{
			using func_t = decltype(&PlayerCharacter::AddRockItAmmo);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AddRockItAmmo };
			func(this, apObj, apExtra, aiNumAdded);
		}

		ItemChange* RemoveRockItAmmo(TESBoundObject* apObj, ExtraDataList* apExtra, std::int32_t aiNumRemoved, bool abReturnRemovedItem)
		{
			using func_t = decltype(&PlayerCharacter::RemoveRockItAmmo);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::RemoveRockItAmmo };
			return func(this, apObj, apExtra, aiNumRemoved, abReturnRemovedItem);
		}

		ItemChange* GetRandomRockItAmmoItem()
		{
			using func_t = decltype(&PlayerCharacter::GetRandomRockItAmmoItem);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetRandomRockItAmmoItem };
			return func(this);
		}

		void ClearRockItAmmo()
		{
			using func_t = decltype(&PlayerCharacter::ClearRockItAmmo);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ClearRockItAmmo };
			func(this);
		}

		void ResetRockItAmmoWeight(bool abRecalculateWeight)
		{
			using func_t = decltype(&PlayerCharacter::ResetRockItAmmoWeight);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::ResetRockItAmmoWeight };
			func(this, abRecalculateWeight);
		}

		void SetPCToddler(bool abVal)
		{
			using func_t = decltype(&PlayerCharacter::SetPCToddler);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetPCToddler };
			func(this, abVal);
		}

		void SetPCYoung(bool abVal)
		{
			using func_t = decltype(&PlayerCharacter::SetPCYoung);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetPCYoung };
			func(this, abVal);
		}

		bool IsImportantConversationRunning()
		{
			using func_t = decltype(&PlayerCharacter::IsImportantConversationRunning);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::IsImportantConversationRunning };
			return func(this);
		}

		MediaLocationController* GetMediaLocationController()
		{
			using func_t = decltype(&PlayerCharacter::GetMediaLocationController);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetMediaLocationController };
			return func(this);
		}

		AudioMarkerInfo* GetClosestAudioMarkerInfo()
		{
			using func_t = decltype(&PlayerCharacter::GetClosestAudioMarkerInfo);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetClosestAudioMarkerInfo };
			return func(this);
		}

		void UpdateHardcoreMode()
		{
			using func_t = decltype(&PlayerCharacter::UpdateHardcoreMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::UpdateHardcoreMode };
			func(this);
		}

		void SetHardcore(GamePlayFormulas_HardcoreSetting aeHardcoreLevel, bool bIgnoreTracking)
		{
			using func_t = decltype(&PlayerCharacter::SetHardcore);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetHardcore };
			func(this, aeHardcoreLevel, bIgnoreTracking);
		}

	protected:
		void SetAIControlledToPosition(bool abTF)
		{
			using func_t = decltype(&PlayerCharacter::SetAIControlledToPosition);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetAIControlledToPosition };
			func(this, abTF);
		}

		void SetAIControlledFromPosition(bool abTF)
		{
			using func_t = decltype(&PlayerCharacter::SetAIControlledFromPosition);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::SetAIControlledFromPosition };
			func(this, abTF);
		}

		void PositionPlayer(NiPoint3 aAngle, NiPoint3 abResetWeather, TESObjectCELL* a_arg3, bool a_arg4)
		{
			using func_t = decltype(&PlayerCharacter::PositionPlayer);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::PositionPlayer };
			func(this, aAngle, abResetWeather, a_arg3, a_arg4);
		}

		void PositionPlayerExterior(NiPoint3 aPos, NiPoint3 aAngle, TESWorldSpace* apWorld, bool abResetWeather)
		{
			using func_t = decltype(&PlayerCharacter::PositionPlayerExterior);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::PositionPlayerExterior };
			func(this, aPos, aAngle, apWorld, abResetWeather);
		}

		float GetModifier(PlayerCharacter::ModifierGroup eGroup, ActorValue_Index aiWhich)
		{
			using func_t = decltype(&PlayerCharacter::GetModifier);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::GetModifier };
			return func(this, eGroup, aiWhich);
		}

		void AlterModifier(PlayerCharacter::ModifierGroup eGroup, ActorValue_Index aiWhich, float a_arg3, ModifierList_ClampStyle a_arg4)
		{
			using func_t = decltype(&PlayerCharacter::AlterModifier);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::AlterModifier };
			func(this, eGroup, aiWhich, a_arg3, a_arg4);
		}

		bool CheckInvulnerable(ActorValue_Index aiWhich, float afValue)
		{
			using func_t = decltype(&PlayerCharacter::CheckInvulnerable);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::CheckInvulnerable };
			return func(this, aiWhich, afValue);
		}

		void HandlePhysicsGrab(float afTimeDelta)
		{
			using func_t = decltype(&PlayerCharacter::HandlePhysicsGrab);
			static REL::Relocation<func_t> func{ Offsets::PlayerCharacter::HandlePhysicsGrab };
			func(this, afTimeDelta);
		}

	public:
		// members
		std::uint8_t                         unk1C8[0x24];                      // 1C8 opaque
		PLAYER_TARGET_LOC*                   pQueuedTargetLoc;                  // 1EC
		TESObjectWEAP*                       pQueuedWeaponAttach;               // 1F0
		float                                fTimeSinceLastAmmoRegenTick;       // 1F4
		char                                 cShotsSinceLastAmmoRegen;          // 1F8
		std::uint8_t                         pad1F9[0x3];                       // 1F9
		std::int32_t                         iSandmanDetection;                 // 1FC
		std::int32_t                         iCombatPersue;                     // 200
		bool                                 bTravelUseDoor;                    // 204
		bool                                 bOnElevator;                       // 205
		bool                                 bForceQuestTargetUpdate;           // 206
		std::uint8_t                         pad207;                            // 207
		DialoguePackage*                     pClosestConversation;              // 208
		bool                                 btransporting;                     // 20C
		std::uint8_t                         pad20D[0x3];                       // 20D
		BSSimpleList<ActiveEffect*>*         pActiveEffectList;                 // 210
		MagicItem*                           pCurrentSpell;                     // 214
		MagicTarget*                         pDesiredTarget;                    // 218
		CameraCaster*                        pCameraCaster;                     // 21C
		HitCaster*                           pHitCaster;                        // 220
		DialoguePackage*                     pAIConversationRunning;            // 224
		std::int32_t                         iNumberofStealWarnings;            // 228
		float                                fStealWarningTimer;                // 22C
		std::int32_t                         iNumberofPickpocketWarnings;       // 230
		float                                fPickPocketWarningTimer;           // 234
		BSSimpleList<MagicItem*>*            EatDrinkItems;                     // 238
		BSSimpleList<TESBoundObject*>*       QueuedWornEnchantments;            // 23C
		bool                                 bShowQuestItemsInInventory;        // 240
		std::uint8_t                         pad241[0x3];                       // 241
		float                                TemporaryActorValueModifiers[77];  // 244
		float                                ScriptActorValueModifiers[77];     // 378
		float                                fHealthModifier;                   // 4AC
		float                                DamageActorValueModifiers[77];     // 4B0
		BSSimpleList<BGSNote*>               listNotes;                         // 5E4
		ImageSpaceModifierInstanceDOF*       pIronsightsDOFInstance;            // 5EC
		ImageSpaceModifierInstanceDOF*       pVatsDOFInstance;                  // 5F0
		ImageSpaceModifierInstanceDRB*       pVatsDRBInstance;                  // 5F4
		bool                                 bHostileDetection;                 // 5F8
		bool                                 bIsAcousticSpaceTransition;        // 5F9
		std::uint16_t                        pad5FA;                            // 5FA
		BSSimpleList<Actor*>                 pListOfTeammates;                  // 5FC
		TESObjectREFR*                       pLastExtDoorActivated;             // 604
		bool                                 bSpeaking;                         // 608
		std::uint8_t                         pad609[0x3];                       // 609
		BSSimpleList<PlayerActionObject*>*   pListofActions;                    // 60C
		BSSimpleList<CasinoData*>*           pListofCasinoData;                 // 610
		BSSimpleList<TESCaravanCard*>*       pInactiveListofCaravanCards;       // 614
		BSSimpleList<TESCaravanCard*>*       pActiveListofCaravanCards;         // 618
		std::uint32_t                        iCaravanCapWinnings;               // 61C
		std::uint32_t                        iCaravanCapLosses;                 // 620
		std::uint32_t                        iCaravanWinnings;                  // 624
		std::uint32_t                        iCaravanLosses;                    // 628
		std::uint32_t                        iCaravanLargestWinning;            // 62C
		std::int32_t                         iCasinoCheatLevel;                 // 630
		NiPointer<bhkMouseSpringAction>      spGrabSpring;                      // 634
		TESObjectREFR*                       pGrabbedObject;                    // 638
		PlayerCharacter::GrabbingType        eGrabType;                         // 63C
		float                                fGrabObjectWeight;                 // 640
		float                                fGrabDistance;                     // 644
		bool                                 bsave3rdPerson;                    // 648
		bool                                 b3rdPersonSaved;                   // 649
		bool                                 b3rdPerson;                        // 64A
		bool                                 bActually3rdPerson;                // 64B
		bool                                 bWant3rdPerson;                    // 64C
		bool                                 bTemp3rdPerson;                    // 64D
		bool                                 bTemp3rdPersonSwitchBack;          // 64E
		bool                                 bTemp1stPerson;                    // 64F
		bool                                 bTemp1stPersonSwitchBack;          // 650
		bool                                 bAlwaysRun;                        // 651
		bool                                 bAutoMove;                         // 652
		std::uint8_t                         pad653;                            // 653
		std::int32_t                         iSleepTime;                        // 654
		bool                                 bIsSleeping;                       // 658
		std::uint8_t                         pad659[0x3];                       // 659
		float                                fFOV;                              // 65C
		float                                fsecondRunning;                    // 660
		float                                fsecondSwimming;                   // 664
		float                                fsecondSneaking;                   // 668
		bool                                 bActorinSneakRange;                // 66C
		bool                                 bCanFastTravel;                    // 66D
		bool                                 bCanWait;                          // 66E
		std::uint8_t                         pad66F;                            // 66F
		float                                fWorldFOV;                         // 670
		float                                f1stPersonFOV;                     // 674
		float                                f3rdPersonFOV;                     // 678
		std::int32_t                         iNumberTraining;                   // 67C
		std::uint8_t                         ucControlsDisabled;                // 680
		bool                                 bBlockActivate;                    // 681
		std::uint16_t                        pad682;                            // 682
		float                                fBlockActivateTimer;               // 684
		TESObjectREFR*                       pForceActivateRef;                 // 688
		BipedAnim*                           p1stPersonBipedAnim;               // 68C
		Animation*                           p1stPersonAnimation;               // 690
		NiPointer<NiAVObject>                sp1stPerson3D;                     // 694
		float                                fEyeHeight;                        // 698
		NiPointer<NiNode>                    spInventoryPC;                     // 69C
		Animation*                           pInventoryAnimation;               // 6A0
		MagicShaderHitEffect*                pInventoryWeaponEffect;            // 6A4
		BSSimpleList<TESTopic*>              listTopics;                        // 6A8
		BSSimpleList<TESQuestStageItem*>     listQuestLog;                      // 6B0
		TESQuest*                            pActiveQuest;                      // 6B8
		BSSimpleList<BGSQuestObjective*>     listObjectives;                    // 6BC
		BSSimpleList<TESQuestTarget*>        listQuestTargets;                  // 6C4
		bool                                 bGreetingPlayer;                   // 6CC
		std::uint8_t                         pad6CD[0x3];                       // 6CD
		float                                fGreetTimer;                       // 6D0
		std::int32_t                         ihourstosleep;                     // 6D4
		char                                 cMurder;                           // 6D8
		std::uint8_t                         pad6D9[0x3];                       // 6D9
		std::int32_t                         iAmountStolenSold;                 // 6DC
		float                                fSortActorDistanceTimer;           // 6E0
		float                                fSitHeadingDelta;                  // 6E4
		bool                                 bBeenAttacked;                     // 6E8
		std::uint8_t                         pad6E9[0x3];                       // 6E9
		MagicItem*                           pSelectedSpell;                    // 6EC
		TESObjectBOOK*                       pSelectedScroll;                   // 6F0
		TESObjectREFR*                       pPlayerMapMarker;                  // 6F4
		TeleportPath                         PlayerMarkerPath;                  // 6F8
		float                                fProjectileReleaseTimer;           // 730
		std::int32_t                         iNumAdvance;                       // 734
		ActorValue_Index                     eskilladvance;                     // 738
		TESClass*                            pDefaultClass;                     // 73C
		TESClass*                            pClassBasedOn;                     // 740
		std::uint32_t                        pCrimeCounts[5];                   // 744
		AlchemyItem*                         pPendingPoison;                    // 758
		bool                                 bChargen;                          // 75C
		bool                                 bAllowEGMCacheClear;               // 75D
		bool                                 bTelekinesisSelected;              // 75E
		std::uint8_t                         pad75F;                            // 75F
		TESRegion*                           pOccupiedRegion;                   // 760
		TESRegionList                        m_AllOccupiedRegions;              // 764
		BSSimpleList<TESRegionSound*>        CurrentRegionSoundList;            // 774
		BSSoundHandle                        StatusSoundHandle;                 // 77C
		void*                                pInitialStateBuffer;               // 788
		std::uint32_t                        iLastPlayingTimeUpdate;            // 78C
		std::uint32_t                        iTotalPlayingTime;                 // 790
		std::uint32_t                        iCharacterSeed;                    // 794
		bool                                 bAiControlledToPos;                // 798
		bool                                 bAiControlledFromPos;              // 799
		bool                                 bAiControlledActivate;             // 79A
		bool                                 bAiControlledPackage;              // 79B
		bool                                 bInBorderContainedCell;            // 79C
		bool                                 bReturnToLastKnownGoodPosition;    // 79D
		std::uint16_t                        pad79E;                            // 79E
		NiPoint3                             LastKnownGoodPosition;             // 7A0
		TESForm*                             pLastKnownGoodLocation;            // 7AC
		NiTPrimitiveArray<TESRegion*>*       pBorderRegions;                    // 7B0
		BGSMusicType*                        pLastKnownMusicType;               // 7B4
		GamePlayFormulas_DifficultyLevel     eDifficultyLevel;                  // 7B8
		GamePlayFormulas_HardcoreSetting     eHardcoreSetting;                  // 7BC
		KILL_CAM_TYPE                        eKillCameraSetting;                // 7C0
		bool                                 bBeingChased;                      // 7C4
		bool                                 bIsYoung;                          // 7C5
		bool                                 bIsToddler;                        // 7C6
		bool                                 bCanUsePowerArmor;                 // 7C7
		BSSimpleList<MAP_MARKER_STRUCT*>     MapMarkerList;                     // 7C8
		TESWorldSpace*                       pMapWorld;                         // 7D0
		BSSimpleList<AudioMarkerInfo*>       AudioMarkerList;                   // 7D4
		AudioMarkerInfo*                     pClosestAudioMarkerInfo;           // 7DC
		float                                fUFOCameraHeading;                 // 7E0
		float                                fUFOCameraPitch;                   // 7E4
		NiPoint3                             UFOCameraPos;                      // 7E8
		std::uint32_t                        iSelectedSpellCastSoundID;         // 7F4
		BSSoundHandle                        SelectedSpellCastSound;            // 7F8
		BSSoundHandle                        MagicFailureSounds[6];             // 804
		BSSimpleList<TESObjectREFR*>         DroppedRefList;                    // 84C
		NiTMap<std::uint32_t, std::uint8_t>  RandomDoorSpaceMap;                // 854
		NiPointer<NiLight>                   sp1stPersonLight;                  // 864
		NiPointer<NiLight>                   sp3rdPersonLight;                  // 868
		bool                                 bInsufficientChargeMessageShown;   // 86C
		std::uint8_t                         pad86D[0x3];                       // 86D
		float                                fDropAngleMod;                     // 870
		float                                fLastDropAngleMod;                 // 874
		CharacterProgression                 CharacterProgressionInfo;          // 878
		BSSimpleList<PerkRankData*>          Perks;                             // 87C
		BSSimpleList<BGSPerkEntry*>          PerkEntryLists[74];                // 884
		BSSimpleList<PerkRankData*>          CompanionPerks;                    // AD4
		BSSimpleList<BGSPerkEntry*>          CompanionPerkEntryLists[74];       // ADC
		Actor*                               pAutoAimActor;                     // D2C
		NiPoint3                             BulletAutoAim;                     // D30
		NiPointer<NiAVObject>                spTargeted3D;                      // D3C
		bool                                 bTarget3DDistant;                  // D40
		std::uint8_t                         padD41[0x3];                       // D41
		Actor*                               pPlayersTargetActor;               // D44
		BSSimpleList<ActorsNearPlayerData*>* pListofPercievedActors;            // D48
		float                                fMenuModeButtonTimer;              // D4C
		float                                fAmmoSwapButtonTimer;              // D50
		bool                                 bMenuModeButtonClicked;            // D54
		std::uint8_t                         padD55[0x3];                       // D55
		NiPoint3                             kCamera3rdPersonShoulderOffset;    // D58
		CombatGroup*                         pCombatGroup;                      // D64
		std::uint32_t                        iTeammateCount;                    // D68
		float                                fCombatTimer;                      // D6C
		float                                fYieldTimer;                       // D70
		NiAVObject*                          pWobbleNodes[2][12];               // D74
		NiPoint3                             Cached1stPersonCameraPos;          // DD4
		NiPoint3                             CachedWorldCameraPos;              // DE0
		NiPointer<bhkRigidBody>              spCameraRigidBody;                 // DEC
		bool                                 bPlayerInCombat;                   // DF0
		bool                                 bAllCombatTargetsSearching;        // DF1
		bool                                 bMegatonDestroyed;                 // DF2
		std::uint8_t                         padDF3;                            // DF3
		BSSimpleArray<ItemChange*, 1024>     RockItLauncherAmmoList;            // DF4
		float                                fRockItLauncherAmmoWeight;         // E04
		bool                                 bNightVisionOn;                    // E08
		std::uint8_t                         padE09[0x3];                       // E09
		TESReputation*                       pReputationUpdate;                 // E0C
		std::uint8_t                         cSloMoCameraHits;                  // E10
		std::uint8_t                         padE11[0x3];                       // E11
		float                                fTimeSinceLastAttack;              // E14
		float                                fTimeInSlowMoCam;                  // E18
		float                                fKillCamCooldown;                  // E1C
		bool                                 bIgnoresGTM;                       // E20
		bool                                 bTurboISM;                         // E21
		std::uint16_t                        padE22;                            // E22
		float                                fLastHelloTime;                    // E24
		float                                fCounterAttackTimer;               // E28
		bool                                 bCounterAttackCamera;              // E2C
		bool                                 bHasCateyeActive;                  // E2D
		bool                                 bHasSpotterActive;                 // E2E
		std::uint8_t                         padE2F;                            // E2F
		float                                fCheckForItems;                    // E30
		NiAVObject*                          m_pWeaponSightingNode;             // E34
		bool                                 bAlwaysHardcore;                   // E38
		bool                                 bResetHardcoreTimers;              // E39
		std::uint16_t                        padE3A;                            // E3A
		BSSimpleArray<TESAmmo*, 1024>        HotKeyLastAmmo;                    // E3C
		std::uint32_t                        uiUnkE4C;                          // E4C
	};
	static_assert(sizeof(PlayerCharacter) == 0xE50);
}
