#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTION_FLAGS.h"
#include "RE/A/ACTOR_AGGRESSION.h"
#include "RE/A/ACTOR_CRITICAL_STAGE.h"
#include "RE/A/ACTOR_LIFE_STATE.h"
#include "RE/A/ACTOR_SEGMENT_INVIEW.h"
#include "RE/A/ACTOR_TYPE.h"
#include "RE/A/ANIMATION_ACTION.h"
#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/A/ActionPoints_Action.h"
#include "RE/A/ActorValueOwner.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/C/CAUSE_OF_DEATH.h"
#include "RE/C/COMBAT_WEAPON_TYPE.h"
#include "RE/C/CachedValuesOwner.h"
#include "RE/D/DIALOGUE_EMOTION.h"
#include "RE/F/FALLOUT_BEHAVIORS.h"
#include "RE/F/FIGHT_REACTION.h"
#include "RE/G/GUN_SKILL_ENUM.h"
#include "RE/M/MATERIAL_TYPE.h"
#include "RE/M/MagicCaster.h"
#include "RE/M/MagicTarget.h"
#include "RE/M/MobileObject.h"
#include "RE/M/ModifierList.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"
#include "RE/P/POWER_ATTACK_TYPE.h"
#include "RE/P/PROCESS_TYPE.h"
#include "RE/S/SEX.h"
#include "RE/S/SIT_SLEEP_STATE.h"
#include "RE/S/SKILL_ACTION.h"

namespace RE
{
	class ActiveEffect;
	class ActorMover;
	class AlchemyItem;
	class Animation;
	class BGSLoadFormBuffer;
	class BGSPerk;
	class BGSPerkEntry;
	class BGSSaveFormBuffer;
	class BSAnimGroupSequence;
	class BSFaceGenAnimationData;
	class CastPowerItem;
	class CombatController;
	class CombatGroup;
	class ContinuousBeamProjectile;
	class Crime;
	class DialogueResponse;
	class DispositionModifier;
	class DispositionParamData;
	class ExtraDataList;
	class FACTION_RANK;
	class FurnitureMark;
	class HitData;
	class ItemChange;
	class MagicItem;
	class NiAVObject;
	class NiNode;
	class NiTransform;
	class PackageLocation;
	class PathingAvoidNodeArray;
	class PathingLocation;
	class PathingRequest;
	class PathingRequestFlee;
	class Projectile;
	class QueuedFile;
	class SpellItem;
	class TESActorBase;
	class TESBoundObject;
	class TESClass;
	class TESCombatStyle;
	class TESFaction;
	class TESForm;
	class TESIdleForm;
	class TESObject;
	class TESObjectBOOK;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESObjectWEAP;
	class TESPackage;
	class TESRace;
	class TESSkill;
	class TESTopic;
	class TESWorldSpace;
	class TargetEntry;
	class TrapEntry;
	class TrespassPackage;
	class WeaponObject;
	class bhkCharacterController;
	class bhkRagdollController;
	class bhkRagdollPenetrationUtil;
	class bhkRigidBody;

	class Actor :
		public MobileObject,  // 00
		public MagicCaster,  // 88
		public MagicTarget,  // 94
		public ActorValueOwner,  // A4
		public CachedValuesOwner  // A8
	{
	public:
		static constexpr auto RTTI{ RTTI::Actor };
		static constexpr auto VTABLE{ VTABLE::Actor };

		// override (MobileObject)
		virtual ~Actor() = default;                                                                                                                                                                                                                                                                                                                                                 // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                                                                                                                                                                                                                                                          // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                                                                                                                                                                        // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                                                                                                                                                                                                                                                      // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                                                                                                        // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                                                                                                                                                                                                                                                        // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                                                                                                    // 19
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                                                                                                                                                                                                                                                                        // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                                                                                                                                                                                                                                                                  // 1B
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                                                                                                          // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                                                                                                                                                                                                                                                                                                        // 1D
		virtual void CheckSaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                                                                                                                                                                   // 20
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                                                                                                  // 21
		virtual bool IsActor() override;                                                                                                                                                                                                                                                                                                                                            // 40
		virtual bool GetEditorLocation(NiPoint3& arOriginalLocation, NiPoint3& arOriginalAngle, TESForm*& arpLocationForm, TESForm* apLocationForm) override;                                                                                                                                                                                                                       // 4E
		virtual BSSoundHandle VoiceSoundFunction(TESTopic* result, Actor* apTopic, bool apTarget, bool abPlayerhead, bool abAlwaysPlay, bool abForceCorrectDuration) override;                                                                                                                                                                                                      // 4F
		virtual NiPoint3 GetStartingAngle() override;                                                                                                                                                                                                                                                                                                                               // 5B
		virtual NiPoint3 GetStartingLocation() override;                                                                                                                                                                                                                                                                                                                            // 5C
		virtual void UpdateRefLight() override;                                                                                                                                                                                                                                                                                                                                     // 5E
		virtual bool AddWornItem(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool abForceEquip) override;                                                                                                                                                                                                                                              // 61
		virtual void DoTrap(TrapEntry* apTrap, TargetEntry* apTarget) override;                                                                                                                                                                                                                                                                                                     // 63
		virtual void AddObjecttoContainer(TESBoundObject* apObj, ExtraDataList* apExtra, std::int32_t aicount) override;                                                                                                                                                                                                                                                            // 64
		virtual NiPoint3 GetLookingAtLocation() override;                                                                                                                                                                                                                                                                                                                           // 65
		virtual MagicCaster* GetMagicCaster() override;                                                                                                                                                                                                                                                                                                                             // 66
		virtual MagicTarget* GetMagicTarget() override;                                                                                                                                                                                                                                                                                                                             // 67
		virtual bool IsChild(bool abIgnoreHeight) override;                                                                                                                                                                                                                                                                                                                         // 68
		virtual TESActorBase* GetTemplateActorBase() override;                                                                                                                                                                                                                                                                                                                      // 69
		virtual void SetTemplateActorBase(TESActorBase* apTemplate) override;                                                                                                                                                                                                                                                                                                       // 6A
		virtual NiAVObject* Load3D(bool abBackgroundLoading) override;                                                                                                                                                                                                                                                                                                              // 72
		virtual Animation* GetAnimation() override;                                                                                                                                                                                                                                                                                                                                 // 79
		virtual NiPoint3 const& GetLocationOnReference() override;                                                                                                                                                                                                                                                                                                                  // 7D
		virtual void SetActionComplete(bool bValue) override;                                                                                                                                                                                                                                                                                                                       // 80
		virtual void SetMovementComplete(bool abValue) override;                                                                                                                                                                                                                                                                                                                    // 81
		virtual void ResetInventory(bool abLeveledOnly) override;                                                                                                                                                                                                                                                                                                                   // 82
		virtual NiAVObject* GetFireNode() override;                                                                                                                                                                                                                                                                                                                                 // 83
		virtual void SetFireNode(NiAVObject* apFireNode) override;                                                                                                                                                                                                                                                                                                                  // 84
		virtual SIT_SLEEP_STATE GetSitSleepState() override;                                                                                                                                                                                                                                                                                                                        // 85
		virtual bool IsCreature() override;                                                                                                                                                                                                                                                                                                                                         // 87
		virtual bool IsDead(bool bNotEssential) override;                                                                                                                                                                                                                                                                                                                           // 8B
		virtual bool IsKnockedOut() override;                                                                                                                                                                                                                                                                                                                                       // 8C
		virtual bool IsParalyzed() override;                                                                                                                                                                                                                                                                                                                                        // 8D
		virtual bool MovetoHigh() override;                                                                                                                                                                                                                                                                                                                                         // 90
		virtual bool MovetoLow() override;                                                                                                                                                                                                                                                                                                                                          // 91
		virtual bool MovetoMiddleLow() override;                                                                                                                                                                                                                                                                                                                                    // 92
		virtual bool MovetoMiddleHigh() override;                                                                                                                                                                                                                                                                                                                                   // 93
		virtual bhkCharacterController* Move(float afDeltaTime, NiPoint3& arDeltaMove, std::uint32_t aiMoveDir) override;                                                                                                                                                                                                                                                           // 94
		virtual bhkCharacterController* Jump() override;                                                                                                                                                                                                                                                                                                                            // 95
		virtual void Process(float afDelta) override;                                                                                                                                                                                                                                                                                                                               // 97
		virtual bool ChangeProcessLevel() override;                                                                                                                                                                                                                                                                                                                                 // 98
		virtual void UpdateInDialogue(float afDelta, DialogueResponse* pResponse, bool abChangeAnimationEndVoice) override;                                                                                                                                                                                                                                                         // 99
		virtual void UpdateAnimation(float afDelta) override;                                                                                                                                                                                                                                                                                                                       // 9A
		virtual bool GetEVPBuffered() override;                                                                                                                                                                                                                                                                                                                                     // 9B
		virtual bool IsInCombat(bool abSearching) override;                                                                                                                                                                                                                                                                                                                         // 9D
		virtual bool InitiateDialogue(TESPackage* pDialoguePackage) override;                                                                                                                                                                                                                                                                                                       // 9F
		virtual bool InitiateDialogue(MobileObject* apTarget, PackageLocation* pPackLoc, PackageLocation* pPackSecondLoc, bool bHeadTrack, bool bMove, bool bflag, TESTopic* pTopic, bool abTargetContinueMoving, bool abTargetMoveTowardStarter) override;                                                                                                                         // A0
		virtual float SpeakSoundFunction(char const* apSoundFile, BSSoundHandle& aSoundHand, DIALOGUE_EMOTION aeEmotiontype, std::uint32_t aiEmotionValue, std::int32_t aiStringLength, TESIdleForm* apResponseSpeakerIdle, TESIdleForm* apResponseListenerIdle, TESObjectREFR* apTarget, bool abSetEmotion, bool ab2D, bool abQueue, bool abLip, bool abUseIdleManager) override;  // A1
		virtual void EndDialogue() override;                                                                                                                                                                                                                                                                                                                                        // A2
		virtual void SetRunOnceExtraPackage(TESPackage* apPack, char acDay) override;                                                                                                                                                                                                                                                                                               // A3
		virtual bool HasEditorLocation() override;                                                                                                                                                                                                                                                                                                                                  // A4
		virtual TESWorldSpace* GetEditorLocationWorld() override;                                                                                                                                                                                                                                                                                                                   // A5
		virtual TESObjectCELL* GetEditorLocationInteriorCell() override;                                                                                                                                                                                                                                                                                                            // A6
		virtual NiPoint3 GetEditorLocationCoord() override;                                                                                                                                                                                                                                                                                                                         // A7
		virtual void EvaluateDetection(float ftime) override;                                                                                                                                                                                                                                                                                                                       // AC
		virtual float GetDetectionTimer() override;                                                                                                                                                                                                                                                                                                                                 // AD
		virtual void ReduceDetectionTimer() override;                                                                                                                                                                                                                                                                                                                               // AE
		virtual float GetHeading(bool abIgnoreImmobile) override;                                                                                                                                                                                                                                                                                                                   // AF
		virtual void SetHeading(TESObjectREFR* apTargetReference) override;                                                                                                                                                                                                                                                                                                         // B0
		virtual void SetHeading(float afAngle) override;                                                                                                                                                                                                                                                                                                                            // B1
		virtual TESObjectREFR* GetCurrentTarget() override;                                                                                                                                                                                                                                                                                                                         // B2
		virtual bool IsAtPoint(NiPoint3 const& aPoint, float a_arg2, bool a_arg3, bool abExpandRadius) override;                                                                                                                                                                                                                                                                    // B3
		virtual std::int32_t GetSpeakingEmotion() override;                                                                                                                                                                                                                                                                                                                         // B4
		virtual void SetSpeakingEmotion(std::int32_t aiEmotion) override;                                                                                                                                                                                                                                                                                                           // B5
		virtual std::int32_t GetSpeakingEmotionValue() override;                                                                                                                                                                                                                                                                                                                    // B6
		virtual void SetSpeakingEmotionValue(std::int32_t aiEmotionValue) override;                                                                                                                                                                                                                                                                                                 // B7
		virtual float GetAcrobatics() override;                                                                                                                                                                                                                                                                                                                                     // B9
		virtual bool IsDying() override;                                                                                                                                                                                                                                                                                                                                            // BA
		virtual void PutCreatedPackage(TESPackage* apPack, bool abTempPack, bool abIsaCreatedPackage) override;                                                                                                                                                                                                                                                                     // BD
		virtual void Update(float afDelta) override;                                                                                                                                                                                                                                                                                                                                // BE
		virtual void CleanUpPointersOnDisable() override;                                                                                                                                                                                                                                                                                                                           // BF
		virtual MobileObject* SetUpTalkingActivatorActor(MobileObject* apTarget, MobileObject*& aptalkingactivator) override;                                                                                                                                                                                                                                                       // C0

		// add
		virtual bool IsActoraGuard();                                                                                                                                                                 // C1
		virtual void SetActorGuard(bool abGuard);                                                                                                                                                     // C2
		virtual void SetEquippedWeight(float afvalue);                                                                                                                                                // C3
		virtual float GetEquippedWeight();                                                                                                                                                            // C4
		virtual std::int32_t GetFame();                                                                                                                                                               // C5
		virtual std::int32_t GetInfamy();                                                                                                                                                             // C6
		virtual void SetIgnoreCrime(bool abFlag);                                                                                                                                                     // C7
		virtual bool GetIgnoreCrime();                                                                                                                                                                // C8
		virtual void Resurrect(bool abResetInventory, bool abAttach3D, bool abGetupResurect);                                                                                                         // C9
		virtual void SetAdvanceNumber(std::int32_t inumber);                                                                                                                                          // CA
		virtual std::int32_t GetAdvanceNumber();                                                                                                                                                      // CB
		virtual void SetSkillAdvanceDelayed(ActorValue_Index aeskill);                                                                                                                                // CC
		virtual ActorValue_Index GetSkillAdvanceDelayed();                                                                                                                                            // CD
		virtual bool DoDamage(float afHealthDamage, float a_arg2, Actor* a_arg3);                                                                                                                     // CE
		virtual void UseActionPoints(ActionPoints_Action aeAction);                                                                                                                                   // D0 (reversed overload group)
		virtual void UseActionPoints(float afAmount);                                                                                                                                                 // CF (reversed overload group)
		virtual std::int32_t GetDisposition(Actor* apTargetActor, DispositionParamData* apData);                                                                                                      // D1
		virtual void UpdateMovement(float afDelta, bool abSleeping);                                                                                                                                  // D2
		virtual void UpdateNonRenderSafeMovement(float afDelta, bool abSleeping);                                                                                                                     // D3
		virtual void UpdateAnimationMovementNoWorldUpdate();                                                                                                                                          // D4
		virtual float GetTurningSpeed();                                                                                                                                                              // D5
		virtual bool IsOverEncumbered();                                                                                                                                                              // D6
		virtual bool IsHumanoidCreature();                                                                                                                                                            // D7
		virtual bool IsPc();                                                                                                                                                                          // D8
		virtual bool GetCannibal();                                                                                                                                                                   // D9
		virtual void SetCannibal(bool ab);                                                                                                                                                            // DA
		virtual bool GetSandman();                                                                                                                                                                    // DB
		virtual void SetSandman(bool ab);                                                                                                                                                             // DC
		virtual void InitiateSandmanPackage(Actor* apTarget, TESObjectREFR* pfurniture, FurnitureMark* aMarker, std::uint8_t auiIndex);                                                               // DD
		virtual void InitiateCannibalPackage(Actor* apTarget);                                                                                                                                        // DE
		virtual TESRace* GetRace();                                                                                                                                                                   // DF
		virtual float GetReach();                                                                                                                                                                     // E0
		virtual void SetRefraction(bool abEnable, float afRefractionPower);                                                                                                                           // E1
		virtual void SetRagDoll(bool abFound);                                                                                                                                                        // E2
		virtual bool HasRagDoll();                                                                                                                                                                    // E3
		virtual ACTOR_TYPE GetActorType();                                                                                                                                                            // E4
		virtual void SetActorValue(ActorValue_Index aiWhich, std::int32_t aiValue);                                                                                                                   // E6 (reversed overload group)
		virtual void SetActorValue(ActorValue_Index aiWhich, float afValue);                                                                                                                          // E5 (reversed overload group)
		virtual void TempModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker);                                                                                            // E7
		virtual void PermanentModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker);                                                                                       // E9 (reversed overload group)
		virtual void PermanentModActorValue(ActorValue_Index aiWhich, float a_arg2, Actor* a_arg3);                                                                                                   // E8 (reversed overload group)
		virtual void DamageModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker);                                                                                          // EB (reversed overload group)
		virtual void DamageModActorValue(ActorValue_Index aiWhich, float a_arg2, Actor* a_arg3);                                                                                                      // EA (reversed overload group)
		virtual void ModActorBaseValue(ActorValue_Index aiWhich, std::int32_t aiValue);                                                                                                               // ED (reversed overload group)
		virtual void ModActorBaseValue(ActorValue_Index aiWhich, float afValue);                                                                                                                      // EC (reversed overload group)
		virtual void Unk_EE();                                                                                                                                                                        // EE
		virtual ItemChange* GetBestWeapon(COMBAT_WEAPON_TYPE aeType);                                                                                                                                 // EF
		virtual ItemChange* GetBestAmmo();                                                                                                                                                            // F0
		virtual void ResetArmorRating();                                                                                                                                                              // F1
		virtual bool DamageEquipment(ItemChange* apEquipment, float afDamage, bool abIgnoreArmorSkill);                                                                                               // F2
		virtual TESObjectREFR* DropObject(TESObject* apobject, ExtraDataList* apExtra, std::int32_t ainumber, NiPoint3 const* apPoint, NiPoint3 const* apRotate);                                     // F3
		virtual void PickUpObject(TESObjectREFR* apobjREFR, std::int32_t aicount, bool abflag);                                                                                                       // F4
		virtual void CastScroll(TESObjectBOOK* apScroll, MagicTarget* apTarget);                                                                                                                      // F5
		virtual bool CheckCastWhenStrikesEnchantment(ItemChange* apWeapon, Actor* apTarget, Projectile* apProjectile, bool& abInsufficientCharge);                                                    // F6
		virtual void UpdateWornEnchantments(float afElapsedTime);                                                                                                                                     // F7
		virtual bool AddSpell(SpellItem* apSpellIn);                                                                                                                                                  // F8
		virtual bool RemoveSpell(SpellItem* apSpellIn);                                                                                                                                               // F9
		virtual bool ReloadWeapon(TESObjectWEAP* apWeapon, std::int32_t aiReloadAnim, bool bUseModValue);                                                                                             // FA
		virtual bool ReloadWeaponNV(TESObjectWEAP* apWeapon, std::int32_t aiReloadAnim, bool bUseModValue, bool bFromInventory);                                                                      // FB
		virtual std::uint32_t UseAmmo(std::int32_t aiShotCount);                                                                                                                                      // FC
		virtual void CheckTempModifiers();                                                                                                                                                            // FD
		virtual CombatGroup* GetCombatGroup();                                                                                                                                                        // FE
		virtual void SetCombatGroup(CombatGroup* apGroup);                                                                                                                                            // FF
		virtual bool InitiateTresPassPackage(TrespassPackage* apPack);                                                                                                                                // 100
		virtual void UpdateNonRenderSafeDialogueUpdate(float afDelta);                                                                                                                                // 101
		virtual void Unk_102();                                                                                                                                                                       // 102
		virtual void InitiateSpectator();                                                                                                                                                             // 103
		virtual void InitiateFlee(TESObjectREFR* apFleeRef, bool abrunonce, bool abknows, bool abCombatMode, TESObjectCELL* apcell, TESObjectREFR* apRef, float affleeFromDist, float affleeToDist);  // 104
		virtual void InitiateSearchForAttacker(TESObjectREFR* apAttacker, NiPoint3 abAttacked, bool a_arg3);                                                                                          // 105
		virtual void InitiateGetUpPackage();                                                                                                                                                          // 106
		virtual void SetAlpha(float afNewAlpha);                                                                                                                                                      // 107
		virtual float GetAlpha();                                                                                                                                                                     // 108
		virtual void StartCombat(Actor* apTarget, CombatGroup* apGroup, bool abForceCombat, bool abIsAggressor, bool abfleeing, std::int32_t iPriority, bool bCastSpell, TESPackage* apPackage);      // 109
		virtual CombatController* GetCombatController();                                                                                                                                              // 10A
		virtual Actor* GetCombatTarget();                                                                                                                                                             // 10B
		virtual void UpdateCombat();                                                                                                                                                                  // 10C
		virtual void StopCombat(Actor* apAttacker);                                                                                                                                                   // 10D
		virtual void PerformOneRoundofCombat();                                                                                                                                                       // 10E
		virtual float GetArmorRating();                                                                                                                                                               // 10F
		virtual void Unk_110();                                                                                                                                                                       // 110
		virtual float GetArmorThreshold();                                                                                                                                                            // 111
		virtual std::int32_t GetAttackDamage();                                                                                                                                                       // 112
		virtual bool IsTresPassing();                                                                                                                                                                 // 113
		virtual bool GetUsesAttackPercents();                                                                                                                                                         // 114
		virtual std::uint8_t GetPowerAttackPercent(POWER_ATTACK_TYPE aeType);                                                                                                                         // 115
		virtual float CalculateWalkSpeed();                                                                                                                                                           // 116
		virtual float CalculateRunSpeed();                                                                                                                                                            // 117
		virtual void ModifyDispositionTowardActor(Actor* apActor, float afamount);                                                                                                                    // 118
		virtual float GetDispositionModifierTowardActor(Actor* apActor);                                                                                                                              // 119
		virtual void RemoveActorInDispositionModifier(Actor* apActor);                                                                                                                                // 11A
		virtual void SetStartingPosition();                                                                                                                                                           // 11B
		virtual bool HasBeenAttacked();                                                                                                                                                               // 11C
		virtual void SetBeenAttacked(bool abFlag);                                                                                                                                                    // 11D
		virtual void HitMe(Actor* apAttacker, float afDamage, float afBlocked, NiPoint3 const& arStartPos, NiPoint3 const& arStopPos);                                                                // 11E
		virtual void UseSkill(ActorValue_Index aiWhichSkill, float afUsage, TESSkill* apSkill);                                                                                                       // 121 (reversed overload group)
		virtual void UseSkill(ActorValue_Index aiWhichSkill, SKILL_ACTION aeSkillAction, float afModifier);                                                                                           // 120 (reversed overload group)
		virtual void UseSkill(ActorValue_Index aiSkill, std::uint32_t aiAction);                                                                                                                      // 11F (reversed overload group)
		virtual void RewardExperience(std::int32_t aiAmount);                                                                                                                                         // 122
		virtual float GetBaseValueOverride(ActorValue_Index aiWhich, bool& abExists);                                                                                                                 // 123
		virtual void SetBaseValueOverride(ActorValue_Index aiWhich, float afValue);                                                                                                                   // 124
		virtual void AddGunWobble();                                                                                                                                                                  // 125
		virtual void AddPerk(BGSPerk* apPerk, std::uint8_t acRank, bool bAlt);                                                                                                                        // 126
		virtual void RemovePerk(BGSPerk* apPerk, bool bAlt);                                                                                                                                          // 127
		virtual std::uint8_t GetPerkRank(BGSPerk* apPerk, bool bAlt);                                                                                                                                 // 128
		virtual void AddPerkEntry(BGSPerkEntry* apPerkEntry, bool bAlt);                                                                                                                              // 129
		virtual void RemovePerkEntry(BGSPerkEntry* apPerkEntry, bool bAlt);                                                                                                                           // 12A
		virtual BSSimpleList<BGSPerkEntry*>* GetPerkEntryList(std::uint8_t acEntryPoint, bool bAlt);                                                                                                  // 12B
		virtual void StartAnimOn1stPerson(std::uint16_t asAnimGroup, ACTION_FLAGS aeFlags);                                                                                                           // 12C
		virtual bool IsImmobile();                                                                                                                                                                    // 12D
		virtual void HandleHealthDamage(Actor* apAttacker, float afDamage);                                                                                                                           // 12E
		virtual void AttackedBy(Actor* apAttacker, ActiveEffect* apHostileEffect);                                                                                                                    // 12F
		virtual void HandleBlockedAttack(float afFullDamage, float afPercentageBlocked, Actor* apBlockingActor, Projectile* apProjectile);                                                            // 130
		virtual void PrecacheData();                                                                                                                                                                  // 131
		virtual void ProcessTracking(float afDelta);                                                                                                                                                  // 132
		virtual void ProcessEmotions(float afDelta);                                                                                                                                                  // 133
		virtual void CreateActorMover();                                                                                                                                                              // 134
		virtual void DestroyActorMover();                                                                                                                                                             // 135
		virtual NiPoint3 CalculateAnticipatedLocation(float result);                                                                                                                                  // 136

		TESActorBase* GetActorBase()
		{
			using func_t = decltype(&Actor::GetActorBase);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetActorBase };
			return func(this);
		}

		bool IsUnConscious()
		{
			using func_t = decltype(&Actor::IsUnConscious);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsUnConscious };
			return func(this);
		}

		bool IsRestrained()
		{
			using func_t = decltype(&Actor::IsRestrained);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsRestrained };
			return func(this);
		}

		bool IsMoving()
		{
			using func_t = decltype(&Actor::IsMoving);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsMoving };
			return func(this);
		}

		bool IsInCombat()
		{
			using func_t = bool (Actor::*)();
			static REL::Relocation<func_t> func{ Offsets::Actor::IsInCombat };
			return func(this);
		}

		void SetUpdateLighting(bool abUpdate)
		{
			using func_t = decltype(&Actor::SetUpdateLighting);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetUpdateLighting };
			func(this, abUpdate);
		}

		bool IsSneaking()
		{
			using func_t = decltype(&Actor::IsSneaking);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsSneaking };
			return func(this);
		}

		ACTOR_LIFE_STATE GetLifeState()
		{
			using func_t = decltype(&Actor::GetLifeState);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetLifeState };
			return func(this);
		}

		bool IsPlayerTeammate()
		{
			using func_t = decltype(&Actor::IsPlayerTeammate);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPlayerTeammate };
			return func(this);
		}

		bool IsSleeping()
		{
			using func_t = decltype(&Actor::IsSleeping);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsSleeping };
			return func(this);
		}

		bool IsSwimming()
		{
			using func_t = decltype(&Actor::IsSwimming);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsSwimming };
			return func(this);
		}

		bool IsReanimated()
		{
			using func_t = decltype(&Actor::IsReanimated);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsReanimated };
			return func(this);
		}

		bool CanCastWornEnchantment(TESBoundObject* apObject, ExtraDataList* apExtra)
		{
			using func_t = decltype(&Actor::CanCastWornEnchantment);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanCastWornEnchantment };
			return func(this, apObject, apExtra);
		}

		Actor* ctor(bool abAddToProcessList)
		{
			using func_t = Actor*(__thiscall*)(Actor*, bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::ctor };
			return func(this, abAddToProcessList);
		}

		void ConstructorInitialize(bool abAddToProcessList)
		{
			using func_t = decltype(&Actor::ConstructorInitialize);
			static REL::Relocation<func_t> func{ Offsets::Actor::ConstructorInitialize };
			func(this, abAddToProcessList);
		}

		void CreateRagdollInstance(NiAVObject* apObject, bool abDeleteCurrInst, bool abSystemInspect, bool abForceUniqueSkeleton)
		{
			using func_t = decltype(&Actor::CreateRagdollInstance);
			static REL::Relocation<func_t> func{ Offsets::Actor::CreateRagdollInstance };
			func(this, apObject, abDeleteCurrInst, abSystemInspect, abForceUniqueSkeleton);
		}

		bool GetTurretBehavior()
		{
			using func_t = decltype(&Actor::GetTurretBehavior);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetTurretBehavior };
			return func(this);
		}

		void AddDeathItems()
		{
			using func_t = decltype(&Actor::AddDeathItems);
			static REL::Relocation<func_t> func{ Offsets::Actor::AddDeathItems };
			func(this);
		}

		bool HasShadow()
		{
			using func_t = decltype(&Actor::HasShadow);
			static REL::Relocation<func_t> func{ Offsets::Actor::HasShadow };
			return func(this);
		}

		bool HasBlood()
		{
			using func_t = decltype(&Actor::HasBlood);
			static REL::Relocation<func_t> func{ Offsets::Actor::HasBlood };
			return func(this);
		}

		bool DoesSwim()
		{
			using func_t = decltype(&Actor::DoesSwim);
			static REL::Relocation<func_t> func{ Offsets::Actor::DoesSwim };
			return func(this);
		}

		bool DoesWalk()
		{
			using func_t = decltype(&Actor::DoesWalk);
			static REL::Relocation<func_t> func{ Offsets::Actor::DoesWalk };
			return func(this);
		}

		bool DoesFly()
		{
			using func_t = decltype(&Actor::DoesFly);
			static REL::Relocation<func_t> func{ Offsets::Actor::DoesFly };
			return func(this);
		}

		bool FightsInWater()
		{
			using func_t = decltype(&Actor::FightsInWater);
			static REL::Relocation<func_t> func{ Offsets::Actor::FightsInWater };
			return func(this);
		}

		bool GetEssential()
		{
			using func_t = decltype(&Actor::GetEssential);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetEssential };
			return func(this);
		}

		bool GetRespawn()
		{
			using func_t = decltype(&Actor::GetRespawn);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetRespawn };
			return func(this);
		}

		SEX GetSex()
		{
			using func_t = decltype(&Actor::GetSex);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetSex };
			return func(this);
		}

		bool IsAutoCalc()
		{
			using func_t = decltype(&Actor::IsAutoCalc);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsAutoCalc };
			return func(this);
		}

		bool HasNoRumors()
		{
			using func_t = decltype(&Actor::HasNoRumors);
			static REL::Relocation<func_t> func{ Offsets::Actor::HasNoRumors };
			return func(this);
		}

		bool SwimsOnly()
		{
			using func_t = decltype(&Actor::SwimsOnly);
			static REL::Relocation<func_t> func{ Offsets::Actor::SwimsOnly };
			return func(this);
		}

		std::uint16_t GetLevel()
		{
			using func_t = decltype(&Actor::GetLevel);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetLevel };
			return func(this);
		}

		void EndMovement()
		{
			using func_t = decltype(&Actor::EndMovement);
			static REL::Relocation<func_t> func{ Offsets::Actor::EndMovement };
			func(this);
		}

		std::int32_t DifficultyLevelCheckModHealth(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker)
		{
			using func_t = decltype(&Actor::DifficultyLevelCheckModHealth);
			static REL::Relocation<func_t> func{ Offsets::Actor::DifficultyLevelCheckModHealth };
			return func(this, aiWhich, aiValue, apAttacker);
		}

		float DifficultyLevelAdjustHealthModifier(float a_arg1, Actor* a_arg2)
		{
			using func_t = decltype(&Actor::DifficultyLevelAdjustHealthModifier);
			static REL::Relocation<func_t> func{ Offsets::Actor::DifficultyLevelAdjustHealthModifier };
			return func(this, a_arg1, a_arg2);
		}

		void CheckSkillLevelChange(ActorValue_Index aiWhich, bool abBaseValueModified)
		{
			using func_t = decltype(&Actor::CheckSkillLevelChange);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckSkillLevelChange };
			func(this, aiWhich, abBaseValueModified);
		}

		TESPackage* GetPackage()
		{
			using func_t = decltype(&Actor::GetPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetPackage };
			return func(this);
		}

		void GetMissedPacks(BSSimpleList<TESPackage*>* apPacks, float afStartdate)
		{
			using func_t = decltype(&Actor::GetMissedPacks);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetMissedPacks };
			func(this, apPacks, afStartdate);
		}

		TESPackage* GetCurrentEditorPackage()
		{
			using func_t = decltype(&Actor::GetCurrentEditorPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCurrentEditorPackage };
			return func(this);
		}

		TESPackage* GetPackageSetAsPcurrent()
		{
			using func_t = decltype(&Actor::GetPackageSetAsPcurrent);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetPackageSetAsPcurrent };
			return func(this);
		}

		bool IsRunningRunOnce()
		{
			using func_t = decltype(&Actor::IsRunningRunOnce);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsRunningRunOnce };
			return func(this);
		}

		void SetCurrentTarget(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Actor::SetCurrentTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetCurrentTarget };
			func(this, apRef);
		}

		TESObjectREFR* GetCurrentPackageTarget()
		{
			using func_t = decltype(&Actor::GetCurrentPackageTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCurrentPackageTarget };
			return func(this);
		}

		void EndInterruptPackage(bool bNotRunOnceDialogue)
		{
			using func_t = decltype(&Actor::EndInterruptPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::EndInterruptPackage };
			func(this, bNotRunOnceDialogue);
		}

		bool MoveToSafePoint(bool abForceMove)
		{
			using func_t = decltype(&Actor::MoveToSafePoint);
			static REL::Relocation<func_t> func{ Offsets::Actor::MoveToSafePoint };
			return func(this, abForceMove);
		}

		bool ShouldReset(std::uint32_t aiCurrentTime)
		{
			using func_t = decltype(&Actor::ShouldReset);
			static REL::Relocation<func_t> func{ Offsets::Actor::ShouldReset };
			return func(this, aiCurrentTime);
		}

		void SetLastSeenTime()
		{
			using func_t = decltype(&Actor::SetLastSeenTime);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetLastSeenTime };
			func(this);
		}

		bool IsEscorterBehind()
		{
			using func_t = decltype(&Actor::IsEscorterBehind);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsEscorterBehind };
			return func(this);
		}

		bool IsFollowing()
		{
			using func_t = bool (Actor::*)();
			static REL::Relocation<func_t> func{ Offsets::Actor::IsFollowing };
			return func(this);
		}

		std::uint32_t GetBarterGoldBase()
		{
			using func_t = decltype(&Actor::GetBarterGoldBase);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetBarterGoldBase };
			return func(this);
		}

		TESClass* GetClass()
		{
			using func_t = decltype(&Actor::GetClass);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetClass };
			return func(this);
		}

		bool CanMove()
		{
			using func_t = decltype(&Actor::CanMove);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanMove };
			return func(this);
		}

		bool CanSpeak()
		{
			using func_t = decltype(&Actor::CanSpeak);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanSpeak };
			return func(this);
		}

		bool CanKnockDown()
		{
			using func_t = decltype(&Actor::CanKnockDown);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanKnockDown };
			return func(this);
		}

		std::uint32_t GetMoveMode()
		{
			using func_t = decltype(&Actor::GetMoveMode);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetMoveMode };
			return func(this);
		}

		bool IsRunning()
		{
			using func_t = decltype(&Actor::IsRunning);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsRunning };
			return func(this);
		}

		void ResetConditionPreventsRun()
		{
			using func_t = decltype(&Actor::ResetConditionPreventsRun);
			static REL::Relocation<func_t> func{ Offsets::Actor::ResetConditionPreventsRun };
			func(this);
		}

		bool IsJumping()
		{
			using func_t = decltype(&Actor::IsJumping);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsJumping };
			return func(this);
		}

		bool IsFightingOrAlarmed()
		{
			using func_t = decltype(&Actor::IsFightingOrAlarmed);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsFightingOrAlarmed };
			return func(this);
		}

		bool IsAllowedToSwim()
		{
			using func_t = decltype(&Actor::IsAllowedToSwim);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsAllowedToSwim };
			return func(this);
		}

		float GetWalkSpeed()
		{
			using func_t = decltype(&Actor::GetWalkSpeed);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetWalkSpeed };
			return func(this);
		}

		float GetRunSpeed()
		{
			using func_t = decltype(&Actor::GetRunSpeed);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetRunSpeed };
			return func(this);
		}

		void SetWalkRunFlagDirty()
		{
			using func_t = decltype(&Actor::SetWalkRunFlagDirty);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetWalkRunFlagDirty };
			func(this);
		}

		float GetHeight()
		{
			using func_t = decltype(&Actor::GetHeight);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetHeight };
			return func(this);
		}

		float GetSneakHeight(bool abEyeLevel)
		{
			using func_t = decltype(&Actor::GetSneakHeight);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetSneakHeight };
			return func(this, abEyeLevel);
		}

		bool IsPointDeepUnderWater(NiPoint3 const& aPoint, TESObjectCELL* apCell, float a_arg3)
		{
			using func_t = bool (Actor::*)(NiPoint3 const&, TESObjectCELL*, float);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPointDeepUnderWater };
			return func(this, aPoint, apCell, a_arg3);
		}

		float IsPointDeepUnderWater(float a_arg1, TESObjectCELL* a_arg2)
		{
			using func_t = float (Actor::*)(float, TESObjectCELL*);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPointDeepUnderWater_1 };
			return func(this, a_arg1, a_arg2);
		}

		void AdjustSpeedForFollowing(float& fspeed, float afBaseRadius, float afDistToTarget)
		{
			using func_t = decltype(&Actor::AdjustSpeedForFollowing);
			static REL::Relocation<func_t> func{ Offsets::Actor::AdjustSpeedForFollowing };
			func(this, fspeed, afBaseRadius, afDistToTarget);
		}

		std::int32_t ModifyMoveModeForFollow(std::int32_t emovemode, float afbaseRadius, float afDistToTarget)
		{
			using func_t = decltype(&Actor::ModifyMoveModeForFollow);
			static REL::Relocation<func_t> func{ Offsets::Actor::ModifyMoveModeForFollow };
			return func(this, emovemode, afbaseRadius, afDistToTarget);
		}

		bool CanChildUseObject(TESObjectREFR* apObjectRef)
		{
			using func_t = decltype(&Actor::CanChildUseObject);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanChildUseObject };
			return func(this, apObjectRef);
		}

		float GetSwimWalkSpeed()
		{
			using func_t = decltype(&Actor::GetSwimWalkSpeed);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetSwimWalkSpeed };
			return func(this);
		}

		float GetSwimRunSpeed()
		{
			using func_t = decltype(&Actor::GetSwimRunSpeed);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetSwimRunSpeed };
			return func(this);
		}

		bool GetKnockedDownMovementDelta(NiPoint3& aMovementDelta)
		{
			using func_t = decltype(&Actor::GetKnockedDownMovementDelta);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetKnockedDownMovementDelta };
			return func(this, aMovementDelta);
		}

		void ResetLoadedAnimations()
		{
			using func_t = decltype(&Actor::ResetLoadedAnimations);
			static REL::Relocation<func_t> func{ Offsets::Actor::ResetLoadedAnimations };
			func(this);
		}

		void UpdateAnimationMovement(Animation* apAnim, float afDelta)
		{
			using func_t = decltype(&Actor::UpdateAnimationMovement);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateAnimationMovement };
			func(this, apAnim, afDelta);
		}

		void UpdateRagdollAnimation(bool abDriveRagdoll)
		{
			using func_t = decltype(&Actor::UpdateRagdollAnimation);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateRagdollAnimation };
			func(this, abDriveRagdoll);
		}

		void UpdateActor3DPosition()
		{
			using func_t = decltype(&Actor::UpdateActor3DPosition);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateActor3DPosition };
			func(this);
		}

		void RestoreHealth(float afSecondsElapsed)
		{
			using func_t = decltype(&Actor::RestoreHealth);
			static REL::Relocation<func_t> func{ Offsets::Actor::RestoreHealth };
			func(this, afSecondsElapsed);
		}

		void RestoreFatigue(float afSecondsElapsed)
		{
			using func_t = decltype(&Actor::RestoreFatigue);
			static REL::Relocation<func_t> func{ Offsets::Actor::RestoreFatigue };
			func(this, afSecondsElapsed);
		}

		void RestoreActionPoints(float afSecondsElapsed)
		{
			using func_t = decltype(&Actor::RestoreActionPoints);
			static REL::Relocation<func_t> func{ Offsets::Actor::RestoreActionPoints };
			func(this, afSecondsElapsed);
		}

		void RestoreActorValue(ActorValue_Index aiWhich, float afAmount)
		{
			using func_t = decltype(&Actor::RestoreActorValue);
			static REL::Relocation<func_t> func{ Offsets::Actor::RestoreActorValue };
			func(this, aiWhich, afAmount);
		}

		char const* GetCurrentPackageType()
		{
			using func_t = decltype(&Actor::GetCurrentPackageType);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCurrentPackageType };
			return func(this);
		}

		bool LineOfSight(bool abRunFormula, TESObjectREFR* pTarget, bool abUseEyeLevel, ACTOR_SEGMENT_INVIEW* aeInView, bool abfull360)
		{
			using func_t = bool (Actor::*)(bool, TESObjectREFR*, bool, ACTOR_SEGMENT_INVIEW*, bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::LineOfSight };
			return func(this, abRunFormula, pTarget, abUseEyeLevel, aeInView, abfull360);
		}

		bool LineOfSight(NiPoint3& arLocation, bool abUseEyeLevel, bool abfull360)
		{
			using func_t = bool (Actor::*)(NiPoint3&, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::LineOfSight_1 };
			return func(this, arLocation, abUseEyeLevel, abfull360);
		}

		bool IsPointInViewCone(NiPoint3 const& arPoint, float afConeFOV)
		{
			using func_t = decltype(&Actor::IsPointInViewCone);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPointInViewCone };
			return func(this, arPoint, afConeFOV);
		}

		void QueueEquipObject(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool abNow, bool abForceEquip, bool abPlayPickUpSounds)
		{
			using func_t = decltype(&Actor::QueueEquipObject);
			static REL::Relocation<func_t> func{ Offsets::Actor::QueueEquipObject };
			func(this, apObject, aiNumber, apExtra, abNow, abForceEquip, abPlayPickUpSounds);
		}

		void QueueUnEquipObject(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool abForceUnequip, bool abEquipCalling, bool abPlayPickUpSounds)
		{
			using func_t = decltype(&Actor::QueueUnEquipObject);
			static REL::Relocation<func_t> func{ Offsets::Actor::QueueUnEquipObject };
			func(this, apObject, aiNumber, apExtra, abForceUnequip, abEquipCalling, abPlayPickUpSounds);
		}

		void EquipObject(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool abNow, bool abForceEquip, bool abPlayPickUpSounds)
		{
			using func_t = decltype(&Actor::EquipObject);
			static REL::Relocation<func_t> func{ Offsets::Actor::EquipObject };
			func(this, apObject, aiNumber, apExtra, abNow, abForceEquip, abPlayPickUpSounds);
		}

		bool PutActorInChairBedQuick(TESObjectREFR* apFurniture, FurnitureMark* apmarker, std::int32_t aiIndex, bool abSleeping)
		{
			using func_t = decltype(&Actor::PutActorInChairBedQuick);
			static REL::Relocation<func_t> func{ Offsets::Actor::PutActorInChairBedQuick };
			return func(this, apFurniture, apmarker, aiIndex, abSleeping);
		}

		void GetOutofFurnitureQuick()
		{
			using func_t = decltype(&Actor::GetOutofFurnitureQuick);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetOutofFurnitureQuick };
			func(this);
		}

		bool UnEquipObject(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool abForceUnequip, bool abEquipCalling, bool abPlayPickUpSounds)
		{
			using func_t = decltype(&Actor::UnEquipObject);
			static REL::Relocation<func_t> func{ Offsets::Actor::UnEquipObject };
			return func(this, apObject, aiNumber, apExtra, abForceUnequip, abEquipCalling, abPlayPickUpSounds);
		}

		void PlayHitSound(HitData* apHitData)
		{
			using func_t = decltype(&Actor::PlayHitSound);
			static REL::Relocation<func_t> func{ Offsets::Actor::PlayHitSound };
			func(this, apHitData);
		}

		void CreateBlood(float a_arg1, HitData* a_arg2)
		{
			using func_t = decltype(&Actor::CreateBlood);
			static REL::Relocation<func_t> func{ Offsets::Actor::CreateBlood };
			func(this, a_arg1, a_arg2);
		}

		void CreateBloodOnWeapon(float afDamage, HitData* apHitData, Actor* apTarget)
		{
			using func_t = decltype(&Actor::CreateBloodOnWeapon);
			static REL::Relocation<func_t> func{ Offsets::Actor::CreateBloodOnWeapon };
			func(this, afDamage, apHitData, apTarget);
		}

		void UpdateWeaponConditionEffects(bool abForce)
		{
			using func_t = decltype(&Actor::UpdateWeaponConditionEffects);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateWeaponConditionEffects };
			func(this, abForce);
		}

		ItemChange* GetArmorBeingWorn(BIPED_OBJECT aePart)
		{
			using func_t = decltype(&Actor::GetArmorBeingWorn);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetArmorBeingWorn };
			return func(this, aePart);
		}

		std::int32_t GetBootWeight(ItemChange* pItem)
		{
			using func_t = decltype(&Actor::GetBootWeight);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetBootWeight };
			return func(this, pItem);
		}

		ItemChange* GetBestFoodItem()
		{
			using func_t = decltype(&Actor::GetBestFoodItem);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetBestFoodItem };
			return func(this);
		}

		std::int32_t GetGoldAmount()
		{
			using func_t = decltype(&Actor::GetGoldAmount);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetGoldAmount };
			return func(this);
		}

		bool HasObjects(TESBoundObject* apObj, PACKAGE_OBJECT_TYPE aeFormID, std::int32_t ainumber, std::uint32_t aId, PACKAGE_OBJECT_TYPE& aeMatchId)
		{
			using func_t = decltype(&Actor::HasObjects);
			static REL::Relocation<func_t> func{ Offsets::Actor::HasObjects };
			return func(this, apObj, aeFormID, ainumber, aId, aeMatchId);
		}

		bool PutItemInReference(TESBoundObject* apObject, ExtraDataList* apExtra, TESObjectREFR* apRef, std::int32_t aiNumber, std::uint32_t aId)
		{
			using func_t = decltype(&Actor::PutItemInReference);
			static REL::Relocation<func_t> func{ Offsets::Actor::PutItemInReference };
			return func(this, apObject, apExtra, apRef, aiNumber, aId);
		}

		bool ShouldTalkTo(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Actor::ShouldTalkTo);
			static REL::Relocation<func_t> func{ Offsets::Actor::ShouldTalkTo };
			return func(this, apRef);
		}

		void InitPackageLocations(bool abUseInitialPackage)
		{
			using func_t = decltype(&Actor::InitPackageLocations);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitPackageLocations };
			func(this, abUseInitialPackage);
		}

		float GetFatigue()
		{
			using func_t = decltype(&Actor::GetFatigue);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetFatigue };
			return func(this);
		}

		float GetFatiguePercentage()
		{
			using func_t = decltype(&Actor::GetFatiguePercentage);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetFatiguePercentage };
			return func(this);
		}

		float GetHealthPercentage()
		{
			using func_t = decltype(&Actor::GetHealthPercentage);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetHealthPercentage };
			return func(this);
		}

		bool QueueAttack(ANIM_GROUP_ENUM aeAttack)
		{
			using func_t = decltype(&Actor::QueueAttack);
			static REL::Relocation<func_t> func{ Offsets::Actor::QueueAttack };
			return func(this, aeAttack);
		}

		bool StartAttack(ANIM_GROUP_ENUM aeAttack)
		{
			using func_t = decltype(&Actor::StartAttack);
			static REL::Relocation<func_t> func{ Offsets::Actor::StartAttack };
			return func(this, aeAttack);
		}

		bool IsAttacking()
		{
			using func_t = decltype(&Actor::IsAttacking);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsAttacking };
			return func(this);
		}

		void PostAnimBlock()
		{
			using func_t = decltype(&Actor::PostAnimBlock);
			static REL::Relocation<func_t> func{ Offsets::Actor::PostAnimBlock };
			func(this);
		}

		bool SetBlock(bool abBlock)
		{
			using func_t = decltype(&Actor::SetBlock);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetBlock };
			return func(this, abBlock);
		}

		bool GetBlocked()
		{
			using func_t = decltype(&Actor::GetBlocked);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetBlocked };
			return func(this);
		}

		void BlockHit(bool abBlockAttack)
		{
			using func_t = decltype(&Actor::BlockHit);
			static REL::Relocation<func_t> func{ Offsets::Actor::BlockHit };
			func(this, abBlockAttack);
		}

		void Recoil()
		{
			using func_t = decltype(&Actor::Recoil);
			static REL::Relocation<func_t> func{ Offsets::Actor::Recoil };
			func(this);
		}

		ANIM_GROUP_ENUM Dodge(std::uint8_t acMoveDir)
		{
			using func_t = decltype(&Actor::Dodge);
			static REL::Relocation<func_t> func{ Offsets::Actor::Dodge };
			return func(this, acMoveDir);
		}

		void PickAnimations(float afMoveScale, float afTurnScale)
		{
			using func_t = decltype(&Actor::PickAnimations);
			static REL::Relocation<func_t> func{ Offsets::Actor::PickAnimations };
			func(this, afMoveScale, afTurnScale);
		}

		std::uint16_t GetAnimGroup(ANIM_GROUP_ENUM aeGroup, ItemChange* apWeaponItem, bool abCheckHandToHand, Animation* apAnim)
		{
			using func_t = decltype(&Actor::GetAnimGroup);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetAnimGroup };
			return func(this, aeGroup, apWeaponItem, abCheckHandToHand, apAnim);
		}

		float GetAnimGroupDuration(ANIM_GROUP_ENUM aeGroup)
		{
			using func_t = decltype(&Actor::GetAnimGroupDuration);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetAnimGroupDuration };
			return func(this, aeGroup);
		}

		void InitiateAggroRadiusGuardPackage(Actor* apActor)
		{
			using func_t = decltype(&Actor::InitiateAggroRadiusGuardPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateAggroRadiusGuardPackage };
			func(this, apActor);
		}

		void InitiateAvoidPackage(TESObjectREFR* apRadiation, float afTimer)
		{
			using func_t = decltype(&Actor::InitiateAvoidPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateAvoidPackage };
			func(this, apRadiation, afTimer);
		}

		void InitiateSurfacePackage()
		{
			using func_t = decltype(&Actor::InitiateSurfacePackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateSurfacePackage };
			func(this);
		}

		void InitiateMovementBlockedPackage()
		{
			using func_t = decltype(&Actor::InitiateMovementBlockedPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateMovementBlockedPackage };
			func(this);
		}

		void MeleeAttack(bool abPowerAttack, bool abInCombatAttack)
		{
			using func_t = decltype(&Actor::MeleeAttack);
			static REL::Relocation<func_t> func{ Offsets::Actor::MeleeAttack };
			func(this, abPowerAttack, abInCombatAttack);
		}

		void HitMe(HitData* apData, char cMeleeEffect)
		{
			using func_t = void (Actor::*)(HitData*, char);
			static REL::Relocation<func_t> func{ Offsets::Actor::HitMe };
			func(this, apData, cMeleeEffect);
		}

		ItemChange* GetRandomWornArmor(bool abHelmet)
		{
			using func_t = decltype(&Actor::GetRandomWornArmor);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetRandomWornArmor };
			return func(this, abHelmet);
		}

		void Kill(Actor* apAttacker, float afDamage)
		{
			using func_t = decltype(&Actor::Kill);
			static REL::Relocation<func_t> func{ Offsets::Actor::Kill };
			func(this, apAttacker, afDamage);
		}

		void DropAddOnObjects()
		{
			using func_t = decltype(&Actor::DropAddOnObjects);
			static REL::Relocation<func_t> func{ Offsets::Actor::DropAddOnObjects };
			func(this);
		}

		CombatController* QCombatController()
		{
			using func_t = decltype(&Actor::QCombatController);
			static REL::Relocation<func_t> func{ Offsets::Actor::QCombatController };
			return func(this);
		}

		void HandleCombatProcessLevelChange(PROCESS_TYPE aeOldLevel, PROCESS_TYPE aeNewLevel)
		{
			using func_t = decltype(&Actor::HandleCombatProcessLevelChange);
			static REL::Relocation<func_t> func{ Offsets::Actor::HandleCombatProcessLevelChange };
			func(this, aeOldLevel, aeNewLevel);
		}

		void ClearInCombat(bool abRestoreHealth)
		{
			using func_t = decltype(&Actor::ClearInCombat);
			static REL::Relocation<func_t> func{ Offsets::Actor::ClearInCombat };
			func(this, abRestoreHealth);
		}

		void RestoreFullHealthAndConditions()
		{
			using func_t = decltype(&Actor::RestoreFullHealthAndConditions);
			static REL::Relocation<func_t> func{ Offsets::Actor::RestoreFullHealthAndConditions };
			func(this);
		}

		float GetCurrentSpeed()
		{
			using func_t = decltype(&Actor::GetCurrentSpeed);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCurrentSpeed };
			return func(this);
		}

		float GetMaxCarryWeight()
		{
			using func_t = decltype(&Actor::GetMaxCarryWeight);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetMaxCarryWeight };
			return func(this);
		}

		float GetEquippedEncumbrance()
		{
			using func_t = decltype(&Actor::GetEquippedEncumbrance);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetEquippedEncumbrance };
			return func(this);
		}

		static float GetInventoryWeight(ActorValueOwner* apActor, ActorValue_Index aiWhich)
		{
			using func_t = decltype(&Actor::GetInventoryWeight);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetInventoryWeight };
			return func(apActor, aiWhich);
		}

		bool IsWeaponDrawn()
		{
			using func_t = decltype(&Actor::IsWeaponDrawn);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsWeaponDrawn };
			return func(this);
		}

		TESObjectWEAP* GetCurrentWeapon()
		{
			using func_t = decltype(&Actor::GetCurrentWeapon);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCurrentWeapon };
			return func(this);
		}

		void SetLifeState(ACTOR_LIFE_STATE aeLifeState)
		{
			using func_t = decltype(&Actor::SetLifeState);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetLifeState };
			func(this, aeLifeState);
		}

		void ApplyCriticalStage()
		{
			using func_t = decltype(&Actor::ApplyCriticalStage);
			static REL::Relocation<func_t> func{ Offsets::Actor::ApplyCriticalStage };
			func(this);
		}

		ItemChange* GetItemBeingEscorted()
		{
			using func_t = decltype(&Actor::GetItemBeingEscorted);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetItemBeingEscorted };
			return func(this);
		}

		TESObjectREFR* GetHeadingTarget()
		{
			using func_t = decltype(&Actor::GetHeadingTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetHeadingTarget };
			return func(this);
		}

		bool IsTurning()
		{
			using func_t = decltype(&Actor::IsTurning);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsTurning };
			return func(this);
		}

		void ClearLastHitData()
		{
			using func_t = decltype(&Actor::ClearLastHitData);
			static REL::Relocation<func_t> func{ Offsets::Actor::ClearLastHitData };
			func(this);
		}

		NiPoint3 GetWeaponPosition(bool result)
		{
			using func_t = decltype(&Actor::GetWeaponPosition);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetWeaponPosition };
			return func(this, result);
		}

		void ResetFaceData()
		{
			using func_t = decltype(&Actor::ResetFaceData);
			static REL::Relocation<func_t> func{ Offsets::Actor::ResetFaceData };
			func(this);
		}

		void SetAlert(bool abflag)
		{
			using func_t = decltype(&Actor::SetAlert);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetAlert };
			func(this, abflag);
		}

		WeaponObject* SetHavokWeapon()
		{
			using func_t = WeaponObject* (Actor::*)();
			static REL::Relocation<func_t> func{ Offsets::Actor::SetHavokWeapon };
			return func(this);
		}

		WeaponObject* SetHavokWeapon(bool abConstraintActive)
		{
			using func_t = WeaponObject* (Actor::*)(bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetHavokWeapon_1 };
			return func(this, abConstraintActive);
		}

		bool IsinSpectator()
		{
			using func_t = decltype(&Actor::IsinSpectator);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsinSpectator };
			return func(this);
		}

		bool IsAlarmed()
		{
			using func_t = decltype(&Actor::IsAlarmed);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsAlarmed };
			return func(this);
		}

		bool IsWaiting()
		{
			using func_t = decltype(&Actor::IsWaiting);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsWaiting };
			return func(this);
		}

		bool IsFleeing(bool abFleePack)
		{
			using func_t = decltype(&Actor::IsFleeing);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsFleeing };
			return func(this, abFleePack);
		}

		void RemoveFleeTarget(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Actor::RemoveFleeTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::RemoveFleeTarget };
			func(this, apRef);
		}

		bool IsTalking()
		{
			using func_t = decltype(&Actor::IsTalking);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsTalking };
			return func(this);
		}

		void SetWantWeaponDrawn(bool abTF)
		{
			using func_t = decltype(&Actor::SetWantWeaponDrawn);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetWantWeaponDrawn };
			func(this, abTF);
		}

		bool GetWantWeaponDrawn()
		{
			using func_t = decltype(&Actor::GetWantWeaponDrawn);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetWantWeaponDrawn };
			return func(this);
		}

		bool IsContinuingPackageforPC()
		{
			using func_t = decltype(&Actor::IsContinuingPackageforPC);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsContinuingPackageforPC };
			return func(this);
		}

		void UnlockLockDoorsProcedure()
		{
			using func_t = decltype(&Actor::UnlockLockDoorsProcedure);
			static REL::Relocation<func_t> func{ Offsets::Actor::UnlockLockDoorsProcedure };
			func(this);
		}

		void EvaluatePackage(bool abImmediate, bool abResetAI)
		{
			using func_t = decltype(&Actor::EvaluatePackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::EvaluatePackage };
			func(this, abImmediate, abResetAI);
		}

		void SetAnimAction(ANIMATION_ACTION aeAction, BSAnimGroupSequence* apAnimSeq)
		{
			using func_t = decltype(&Actor::SetAnimAction);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetAnimAction };
			func(this, aeAction, apAnimSeq);
		}

		ANIMATION_ACTION GetAnimAction()
		{
			using func_t = decltype(&Actor::GetAnimAction);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetAnimAction };
			return func(this);
		}

		void InitiateBackUpPackage()
		{
			using func_t = decltype(&Actor::InitiateBackUpPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateBackUpPackage };
			func(this);
		}

		bool IsEating()
		{
			using func_t = decltype(&Actor::IsEating);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsEating };
			return func(this);
		}

		bool ShouldSkipFallOutBehavior(FALLOUT_BEHAVIORS aeFalloutType)
		{
			using func_t = decltype(&Actor::ShouldSkipFallOutBehavior);
			static REL::Relocation<func_t> func{ Offsets::Actor::ShouldSkipFallOutBehavior };
			return func(this, aeFalloutType);
		}

		bool IsSurfacing()
		{
			using func_t = decltype(&Actor::IsSurfacing);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsSurfacing };
			return func(this);
		}

		void ForceIdleAnimation()
		{
			using func_t = decltype(&Actor::ForceIdleAnimation);
			static REL::Relocation<func_t> func{ Offsets::Actor::ForceIdleAnimation };
			func(this);
		}

		void TriggerPain(bool abVoice, bool abBlur)
		{
			using func_t = decltype(&Actor::TriggerPain);
			static REL::Relocation<func_t> func{ Offsets::Actor::TriggerPain };
			func(this, abVoice, abBlur);
		}

		TESCombatStyle* GetCombatStyle()
		{
			using func_t = decltype(&Actor::GetCombatStyle);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCombatStyle };
			return func(this);
		}

		bool IsCloseToGround(float afHeight)
		{
			using func_t = decltype(&Actor::IsCloseToGround);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsCloseToGround };
			return func(this, afHeight);
		}

		bool IsReloading()
		{
			using func_t = decltype(&Actor::IsReloading);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsReloading };
			return func(this);
		}

		float GetCurrentAmmoClipPercent()
		{
			using func_t = decltype(&Actor::GetCurrentAmmoClipPercent);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCurrentAmmoClipPercent };
			return func(this);
		}

		bool ShouldUseAmmo(TESObjectWEAP* apWeapon)
		{
			using func_t = decltype(&Actor::ShouldUseAmmo);
			static REL::Relocation<func_t> func{ Offsets::Actor::ShouldUseAmmo };
			return func(this, apWeapon);
		}

		void StopAttack()
		{
			using func_t = decltype(&Actor::StopAttack);
			static REL::Relocation<func_t> func{ Offsets::Actor::StopAttack };
			func(this);
		}

		void AlertAccompanyToPackageChange()
		{
			using func_t = decltype(&Actor::AlertAccompanyToPackageChange);
			static REL::Relocation<func_t> func{ Offsets::Actor::AlertAccompanyToPackageChange };
			func(this);
		}

		bool OffersServicesPackage()
		{
			using func_t = decltype(&Actor::OffersServicesPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::OffersServicesPackage };
			return func(this);
		}

		bool IsInCombatantFaction()
		{
			using func_t = decltype(&Actor::IsInCombatantFaction);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsInCombatantFaction };
			return func(this);
		}

		void ResetDamagePerSecond()
		{
			using func_t = decltype(&Actor::ResetDamagePerSecond);
			static REL::Relocation<func_t> func{ Offsets::Actor::ResetDamagePerSecond };
			func(this);
		}

		float CalculateCombatStrength(float afDamagePerSecond)
		{
			using func_t = decltype(&Actor::CalculateCombatStrength);
			static REL::Relocation<func_t> func{ Offsets::Actor::CalculateCombatStrength };
			return func(this, afDamagePerSecond);
		}

		void ClearDeathState()
		{
			using func_t = decltype(&Actor::ClearDeathState);
			static REL::Relocation<func_t> func{ Offsets::Actor::ClearDeathState };
			func(this);
		}

		void SetUnConscious(bool abFlag)
		{
			using func_t = decltype(&Actor::SetUnConscious);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetUnConscious };
			func(this, abFlag);
		}

		void SetRestrained(bool abFlag)
		{
			using func_t = decltype(&Actor::SetRestrained);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetRestrained };
			func(this, abFlag);
		}

		bool GetGhost()
		{
			using func_t = decltype(&Actor::GetGhost);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetGhost };
			return func(this);
		}

		void SetGhost(bool abflag)
		{
			using func_t = decltype(&Actor::SetGhost);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetGhost };
			func(this, abflag);
		}

		void MoveActorAndFollowers(NiPoint3 const& aLocation, float a_arg2, TESObjectCELL* a_arg3, TESWorldSpace* apCell, bool apWorldspace, bool abUseFollowerSpacing)
		{
			using func_t = void (Actor::*)(NiPoint3 const&, float, TESObjectCELL*, TESWorldSpace*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::MoveActorAndFollowers };
			func(this, aLocation, a_arg2, a_arg3, apCell, apWorldspace, abUseFollowerSpacing);
		}

		void MoveActorAndFollowers(TESObjectREFR* apMarker, bool abUseFollowerSpacing, bool abMoveFollowersEvenIfVisible)
		{
			using func_t = void (Actor::*)(TESObjectREFR*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::MoveActorAndFollowers_1 };
			func(this, apMarker, abUseFollowerSpacing, abMoveFollowersEvenIfVisible);
		}

		BSFaceGenAnimationData* GetFaceAnimationData()
		{
			using func_t = decltype(&Actor::GetFaceAnimationData);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetFaceAnimationData };
			return func(this);
		}

		char const* GetPickUpSoundName(TESBoundObject* apobjREFR, bool abPickUp, bool abUse)
		{
			using func_t = decltype(&Actor::GetPickUpSoundName);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetPickUpSoundName };
			return func(this, apobjREFR, abPickUp, abUse);
		}

		void PlayPickUpSound(TESBoundObject* apobjREFR, bool abPickUp, bool abUse)
		{
			using func_t = decltype(&Actor::PlayPickUpSound);
			static REL::Relocation<func_t> func{ Offsets::Actor::PlayPickUpSound };
			func(this, apobjREFR, abPickUp, abUse);
		}

		void GetEyeVector(NiPoint3& aOrigin, NiPoint3& aDirection, bool abIncludeCameraOffset)
		{
			using func_t = decltype(&Actor::GetEyeVector);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetEyeVector };
			func(this, aOrigin, aDirection, abIncludeCameraOffset);
		}

		void CheckInCombat()
		{
			using func_t = decltype(&Actor::CheckInCombat);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckInCombat };
			func(this);
		}

		bool IsVisible(std::int32_t aiVisMask)
		{
			using func_t = decltype(&Actor::IsVisible);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsVisible };
			return func(this, aiVisMask);
		}

		void DoDeathStuff()
		{
			using func_t = decltype(&Actor::DoDeathStuff);
			static REL::Relocation<func_t> func{ Offsets::Actor::DoDeathStuff };
			func(this);
		}

		bool CanAttackActor(Actor* apActor)
		{
			using func_t = decltype(&Actor::CanAttackActor);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanAttackActor };
			return func(this, apActor);
		}

		bool GetShouldAttackActor(Actor* apActor, bool bAttacked, FIGHT_REACTION& aeReaction, bool abIgnoreCombat)
		{
			using func_t = decltype(&Actor::GetShouldAttackActor);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetShouldAttackActor };
			return func(this, apActor, bAttacked, aeReaction, abIgnoreCombat);
		}

		bool GetShouldHelp(Actor* apActor)
		{
			using func_t = decltype(&Actor::GetShouldHelp);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetShouldHelp };
			return func(this, apActor);
		}

		void ReloadTargets(bool abReload)
		{
			using func_t = decltype(&Actor::ReloadTargets);
			static REL::Relocation<func_t> func{ Offsets::Actor::ReloadTargets };
			func(this, abReload);
		}

		void InitLightingPropertyPtr(NiAVObject* apObject)
		{
			using func_t = decltype(&Actor::InitLightingPropertyPtr);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitLightingPropertyPtr };
			func(this, apObject);
		}

		float GetGunSkill(GUN_SKILL_ENUM aeType)
		{
			using func_t = decltype(&Actor::GetGunSkill);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetGunSkill };
			return func(this, aeType);
		}

		bool CanUseIdle(TESIdleForm* apIdle)
		{
			using func_t = decltype(&Actor::CanUseIdle);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanUseIdle };
			return func(this, apIdle);
		}

		void StartWeaponGroup(ANIM_GROUP_ENUM aeBaseAnimGroup, Animation* apAnim)
		{
			using func_t = decltype(&Actor::StartWeaponGroup);
			static REL::Relocation<func_t> func{ Offsets::Actor::StartWeaponGroup };
			func(this, aeBaseAnimGroup, apAnim);
		}

		ANIM_GROUP_ENUM GetIronSightsAttack(Animation* apAnim, ANIM_GROUP_ENUM aeAttack, TESObjectWEAP* apWeapon)
		{
			using func_t = decltype(&Actor::GetIronSightsAttack);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetIronSightsAttack };
			return func(this, apAnim, aeAttack, apWeapon);
		}

		bool SetPathfindingGoal(NiPoint3 const& aGoalLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace, float a_arg4, PathingAvoidNodeArray* a_arg5)
		{
			using func_t = decltype(&Actor::SetPathfindingGoal);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetPathfindingGoal };
			return func(this, aGoalLocation, apCell, apWorldSpace, a_arg4, a_arg5);
		}

		bool GetCurrentPathfindingGoal(PathingLocation* apRetLocation)
		{
			using func_t = decltype(&Actor::GetCurrentPathfindingGoal);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCurrentPathfindingGoal };
			return func(this, apRetLocation);
		}

		void BuildRequest(PathingRequest* apRequest, NiPoint3 const& aGoalLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace, float afTargetRadius, PathingAvoidNodeArray* apAvoidNodes)
		{
			using func_t = decltype(&Actor::BuildRequest);
			static REL::Relocation<func_t> func{ Offsets::Actor::BuildRequest };
			func(this, apRequest, aGoalLocation, apCell, apWorldSpace, afTargetRadius, apAvoidNodes);
		}

		bool IsPathValid() const
		{
			using func_t = decltype(&Actor::IsPathValid);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPathValid };
			return func(this);
		}

		void SetMoveMode(std::uint32_t auiMoveMode)
		{
			using func_t = decltype(&Actor::SetMoveMode);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetMoveMode };
			func(this, auiMoveMode);
		}

		void ForceMoveMode(std::uint32_t auiMoveMode)
		{
			using func_t = decltype(&Actor::ForceMoveMode);
			static REL::Relocation<func_t> func{ Offsets::Actor::ForceMoveMode };
			func(this, auiMoveMode);
		}

		void ClearMoveMode(std::uint32_t auiMoveMode)
		{
			using func_t = decltype(&Actor::ClearMoveMode);
			static REL::Relocation<func_t> func{ Offsets::Actor::ClearMoveMode };
			func(this, auiMoveMode);
		}

		void StopMoving()
		{
			using func_t = decltype(&Actor::StopMoving);
			static REL::Relocation<func_t> func{ Offsets::Actor::StopMoving };
			func(this);
		}

		void ForceStopMoving()
		{
			using func_t = decltype(&Actor::ForceStopMoving);
			static REL::Relocation<func_t> func{ Offsets::Actor::ForceStopMoving };
			func(this);
		}

		bool DidPathingFail() const
		{
			using func_t = decltype(&Actor::DidPathingFail);
			static REL::Relocation<func_t> func{ Offsets::Actor::DidPathingFail };
			return func(this);
		}

		bool IsPathingComplete() const
		{
			using func_t = decltype(&Actor::IsPathingComplete);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPathingComplete };
			return func(this);
		}

		bool IsPathing() const
		{
			using func_t = decltype(&Actor::IsPathing);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPathing };
			return func(this);
		}

		bool IsWaitingOnPath() const
		{
			using func_t = decltype(&Actor::IsWaitingOnPath);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsWaitingOnPath };
			return func(this);
		}

		bool IsRotating() const
		{
			using func_t = decltype(&Actor::IsRotating);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsRotating };
			return func(this);
		}

		void SetLookAtTarget(NiPoint3 aPoint)
		{
			using func_t = decltype(&Actor::SetLookAtTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetLookAtTarget };
			func(this, aPoint);
		}

		void ClearLookAtTarget()
		{
			using func_t = decltype(&Actor::ClearLookAtTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::ClearLookAtTarget };
			func(this);
		}

		NiPoint3 const& GetCachedMoveDelta() const
		{
			using func_t = decltype(&Actor::GetCachedMoveDelta);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetCachedMoveDelta };
			return func(this);
		}

		NiNode* GetClosestBone(NiPoint3 aImpactLocation, NiPoint3 a_arg2)
		{
			using func_t = decltype(&Actor::GetClosestBone);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetClosestBone };
			return func(this, aImpactLocation, a_arg2);
		}

		BGSBodyPart_LIMB_ENUM GetDamageLocation(NiNode* apNode)
		{
			using func_t = decltype(&Actor::GetDamageLocation);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetDamageLocation };
			return func(this, apNode);
		}

		NiAVObject* ExplodeLimb(BGSBodyPart_LIMB_ENUM aeLimbIndex, NiAVObject* apOldLimb, NiTransform const& aTrans, bool abSpawnEffects)
		{
			using func_t = decltype(&Actor::ExplodeLimb);
			static REL::Relocation<func_t> func{ Offsets::Actor::ExplodeLimb };
			return func(this, aeLimbIndex, apOldLimb, aTrans, abSpawnEffects);
		}

		void DismemberLimbs(HitData* apData, TESForm* apDeathObject, CAUSE_OF_DEATH aeCause)
		{
			using func_t = decltype(&Actor::DismemberLimbs);
			static REL::Relocation<func_t> func{ Offsets::Actor::DismemberLimbs };
			func(this, apData, apDeathObject, aeCause);
		}

		void Dismember(HitData* apData, ActorValue_Index aeDismemberLocation, BGSBodyPart_LIMB_ENUM aeLimb, TESForm* apDeathObject, CAUSE_OF_DEATH aeDeath, std::int32_t aiDismemberBonus, std::int32_t aiExplodeBonus, bool abTorsoExplodes)
		{
			using func_t = decltype(&Actor::Dismember);
			static REL::Relocation<func_t> func{ Offsets::Actor::Dismember };
			func(this, apData, aeDismemberLocation, aeLimb, apDeathObject, aeDeath, aiDismemberBonus, aiExplodeBonus, abTorsoExplodes);
		}

		void ScriptDismember(CAUSE_OF_DEATH aeCause, BGSBodyPart_LIMB_ENUM aeLimb, Actor* apKiller)
		{
			using func_t = decltype(&Actor::ScriptDismember);
			static REL::Relocation<func_t> func{ Offsets::Actor::ScriptDismember };
			func(this, aeCause, aeLimb, apKiller);
		}

		void DismemberLimb(ActorValue_Index aeDismemberLocation, BGSBodyPart_LIMB_ENUM aeLimb, bool abExplode, bool abBodyBloodSpray, bool abSpawnEffects, bool abExplodeImmediate)
		{
			using func_t = decltype(&Actor::DismemberLimb);
			static REL::Relocation<func_t> func{ Offsets::Actor::DismemberLimb };
			func(this, aeDismemberLocation, aeLimb, abExplode, abBodyBloodSpray, abSpawnEffects, abExplodeImmediate);
		}

		void HideDismemberedLimb(BGSBodyPart_LIMB_ENUM aeLimbIndex, NiNode* apDismemberedLimbRoot, NiAVObject* apReplacementLimb, bool abExplosion)
		{
			using func_t = decltype(&Actor::HideDismemberedLimb);
			static REL::Relocation<func_t> func{ Offsets::Actor::HideDismemberedLimb };
			func(this, aeLimbIndex, apDismemberedLimbRoot, apReplacementLimb, abExplosion);
		}

		void UnhideDismemberedLimb(BGSBodyPart_LIMB_ENUM aeLimbIndex, NiNode* apDismemberedLimbRoot)
		{
			using func_t = decltype(&Actor::UnhideDismemberedLimb);
			static REL::Relocation<func_t> func{ Offsets::Actor::UnhideDismemberedLimb };
			func(this, aeLimbIndex, apDismemberedLimbRoot);
		}

		void UpdateDismemberedLimbVel()
		{
			using func_t = decltype(&Actor::UpdateDismemberedLimbVel);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateDismemberedLimbVel };
			func(this);
		}

		void ClearDismemberedLimbs()
		{
			using func_t = decltype(&Actor::ClearDismemberedLimbs);
			static REL::Relocation<func_t> func{ Offsets::Actor::ClearDismemberedLimbs };
			func(this);
		}

		void CreateDismemberedLimbs()
		{
			using func_t = decltype(&Actor::CreateDismemberedLimbs);
			static REL::Relocation<func_t> func{ Offsets::Actor::CreateDismemberedLimbs };
			func(this);
		}

		bool RemoveDismemberedLimb(BGSBodyPart_LIMB_ENUM aeLimb)
		{
			using func_t = decltype(&Actor::RemoveDismemberedLimb);
			static REL::Relocation<func_t> func{ Offsets::Actor::RemoveDismemberedLimb };
			return func(this, aeLimb);
		}

		bool IsSkinnedToLimb(NiAVObject* apSkin, NiNode* apLimb)
		{
			using func_t = decltype(&Actor::IsSkinnedToLimb);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsSkinnedToLimb };
			return func(this, apSkin, apLimb);
		}

		void FillBoneArray(NiNode* apLimb, bool abRecursing)
		{
			using func_t = decltype(&Actor::FillBoneArray);
			static REL::Relocation<func_t> func{ Offsets::Actor::FillBoneArray };
			func(this, apLimb, abRecursing);
		}

		bool GetAnimationMoveDelta(NiPoint3& aMoveDelta)
		{
			using func_t = decltype(&Actor::GetAnimationMoveDelta);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetAnimationMoveDelta };
			return func(this, aMoveDelta);
		}

		void QueueReplacementLocomotion(bool abHurt, QueuedFile* apParent)
		{
			using func_t = void (Actor::*)(bool, QueuedFile*);
			static REL::Relocation<func_t> func{ Offsets::Actor::QueueReplacementLocomotion };
			func(this, abHurt, apParent);
		}

		void QueueReplacementLocomotion(bool abHurt, Animation* apAnim, char const* apSearchPath, QueuedFile* apParent)
		{
			using func_t = void (Actor::*)(bool, Animation*, char const*, QueuedFile*);
			static REL::Relocation<func_t> func{ Offsets::Actor::QueueReplacementLocomotion_1 };
			func(this, abHurt, apAnim, apSearchPath, apParent);
		}

		void QueueReplacementLocomotions(bool abForceReplaceAnimation)
		{
			using func_t = decltype(&Actor::QueueReplacementLocomotions);
			static REL::Relocation<func_t> func{ Offsets::Actor::QueueReplacementLocomotions };
			func(this, abForceReplaceAnimation);
		}

		bool IsCrippled()
		{
			using func_t = decltype(&Actor::IsCrippled);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsCrippled };
			return func(this);
		}

		void AddFactionMinorCrime(std::int32_t aiNum, bool bModRep)
		{
			using func_t = decltype(&Actor::AddFactionMinorCrime);
			static REL::Relocation<func_t> func{ Offsets::Actor::AddFactionMinorCrime };
			func(this, aiNum, bModRep);
		}

		void AddFactionMajorCrime(std::int32_t aiNum, bool bModRep)
		{
			using func_t = decltype(&Actor::AddFactionMajorCrime);
			static REL::Relocation<func_t> func{ Offsets::Actor::AddFactionMajorCrime };
			func(this, aiNum, bModRep);
		}

		std::int32_t GetFactionMinorCrime()
		{
			using func_t = decltype(&Actor::GetFactionMinorCrime);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetFactionMinorCrime };
			return func(this);
		}

		std::int32_t GetFactionReaction(Actor* apActor, std::int32_t& airank, TESFaction*& apthisfaction, TESFaction*& aptargfaction)
		{
			using func_t = decltype(&Actor::GetFactionReaction);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetFactionReaction };
			return func(this, apActor, airank, apthisfaction, aptargfaction);
		}

		std::int32_t GetFactionRank(TESFaction* apFaction, bool abPC)
		{
			using func_t = decltype(&Actor::GetFactionRank);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetFactionRank };
			return func(this, apFaction, abPC);
		}

		bool SetFactionsThatCareAboutCrime(Actor* apActor, Crime* apCrime)
		{
			using func_t = decltype(&Actor::SetFactionsThatCareAboutCrime);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetFactionsThatCareAboutCrime };
			return func(this, apActor, apCrime);
		}

		bool HasFactionThatCaresAboutCrime()
		{
			using func_t = decltype(&Actor::HasFactionThatCaresAboutCrime);
			static REL::Relocation<func_t> func{ Offsets::Actor::HasFactionThatCaresAboutCrime };
			return func(this);
		}

		void SetFactionRank(TESFaction* apFaction, char acRank)
		{
			using func_t = decltype(&Actor::SetFactionRank);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetFactionRank };
			func(this, apFaction, acRank);
		}

		void ModFactionRank(TESFaction* apFaction, char acModify, bool abPC)
		{
			using func_t = decltype(&Actor::ModFactionRank);
			static REL::Relocation<func_t> func{ Offsets::Actor::ModFactionRank };
			func(this, apFaction, acModify, abPC);
		}

		FIGHT_REACTION GetFactionFightReaction(Actor* apActor, bool& abFromCrime)
		{
			using func_t = decltype(&Actor::GetFactionFightReaction);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetFactionFightReaction };
			return func(this, apActor, abFromCrime);
		}

		std::uint32_t IntegrateFactionLists(TESFaction** apFactionArray, std::uint32_t aiArraySize, BSSimpleList<FACTION_RANK*>* apList1, BSSimpleList<FACTION_RANK*>* apList2)
		{
			using func_t = decltype(&Actor::IntegrateFactionLists);
			static REL::Relocation<func_t> func{ Offsets::Actor::IntegrateFactionLists };
			return func(this, apFactionArray, aiArraySize, apList1, apList2);
		}

		void AddFaction(TESFaction* apFaction, std::int32_t aiRank)
		{
			using func_t = decltype(&Actor::AddFaction);
			static REL::Relocation<func_t> func{ Offsets::Actor::AddFaction };
			func(this, apFaction, aiRank);
		}

		bool IsInFaction(TESFaction* apFaction)
		{
			using func_t = decltype(&Actor::IsInFaction);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsInFaction };
			return func(this, apFaction);
		}

		void ProcessDamageImpacts()
		{
			using func_t = decltype(&Actor::ProcessDamageImpacts);
			static REL::Relocation<func_t> func{ Offsets::Actor::ProcessDamageImpacts };
			func(this);
		}

		static void ConditionModifiedCallback(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float a_arg4, ActorValueOwner* a_arg5)
		{
			using func_t = decltype(&Actor::ConditionModifiedCallback);
			static REL::Relocation<func_t> func{ Offsets::Actor::ConditionModifiedCallback };
			func(apActor, aiWhich, afOriginalValue, a_arg4, a_arg5);
		}

		static void MobilityConditionModifiedCallback(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float a_arg4, ActorValueOwner* a_arg5)
		{
			using func_t = decltype(&Actor::MobilityConditionModifiedCallback);
			static REL::Relocation<func_t> func{ Offsets::Actor::MobilityConditionModifiedCallback };
			func(apActor, aiWhich, afOriginalValue, a_arg4, a_arg5);
		}

		static void HealthFatigueModifiedCallback(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&Actor::HealthFatigueModifiedCallback);
			static REL::Relocation<func_t> func{ Offsets::Actor::HealthFatigueModifiedCallback };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

		static void EnduranceModifiedCallback(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&Actor::EnduranceModifiedCallback);
			static REL::Relocation<func_t> func{ Offsets::Actor::EnduranceModifiedCallback };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

		static void QueueReplacementLocomotion(Actor* apActor, float afPreviousBodyPartCondition, float afNewBodyPartCondition, float afOtherBodyPartCondition)
		{
			using func_t = void(__cdecl*)(Actor*, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::Actor::QueueReplacementLocomotion_2 };
			func(apActor, afPreviousBodyPartCondition, afNewBodyPartCondition, afOtherBodyPartCondition);
		}

		static void InventoryWeightModifiedCallback(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&Actor::InventoryWeightModifiedCallback);
			static REL::Relocation<func_t> func{ Offsets::Actor::InventoryWeightModifiedCallback };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

		bool HasBackPackWorn()
		{
			using func_t = decltype(&Actor::HasBackPackWorn);
			static REL::Relocation<func_t> func{ Offsets::Actor::HasBackPackWorn };
			return func(this);
		}

		bool IsPowerBodyArmorWorn()
		{
			using func_t = decltype(&Actor::IsPowerBodyArmorWorn);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsPowerBodyArmorWorn };
			return func(this);
		}

		void HandlePostAnimationActions()
		{
			using func_t = decltype(&Actor::HandlePostAnimationActions);
			static REL::Relocation<func_t> func{ Offsets::Actor::HandlePostAnimationActions };
			func(this);
		}

		bool RequestRotate(NiPoint3 aTargetPoint, bool bForceTurn)
		{
			using func_t = bool (Actor::*)(NiPoint3, bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::RequestRotate };
			return func(this, aTargetPoint, bForceTurn);
		}

		bool RequestRotate(float afTargetAngle, bool bForceTurn)
		{
			using func_t = bool (Actor::*)(float, bool);
			static REL::Relocation<func_t> func{ Offsets::Actor::RequestRotate_1 };
			return func(this, afTargetAngle, bForceTurn);
		}

		bool SetPathfindingFlee(PathingRequestFlee const* apRequest)
		{
			using func_t = decltype(&Actor::SetPathfindingFlee);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetPathfindingFlee };
			return func(this, apRequest);
		}

		void SetIronSights(bool abIronSights, bool abPostAnim, bool abCheckAnimBlendOut)
		{
			using func_t = decltype(&Actor::SetIronSights);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetIronSights };
			func(this, abIronSights, abPostAnim, abCheckAnimBlendOut);
		}

		bool GetIronSights()
		{
			using func_t = decltype(&Actor::GetIronSights);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetIronSights };
			return func(this);
		}

		bool ApplyConstrTemplate(NiNode* apNodeRDT)
		{
			using func_t = decltype(&Actor::ApplyConstrTemplate);
			static REL::Relocation<func_t> func{ Offsets::Actor::ApplyConstrTemplate };
			return func(this, apNodeRDT);
		}

		void InitiateUseWeaponPackage(TESBoundObject* apWeap, TESObjectREFR* apLocRef, TESObjectREFR* apTargRef, std::int32_t aiAttackTimes, TESObjectREFR* apTargetLocRef, bool abCrouch, bool abHoldFire, bool abAlwaysHit, bool abDoNoDamage)
		{
			using func_t = decltype(&Actor::InitiateUseWeaponPackage);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateUseWeaponPackage };
			func(this, apWeap, apLocRef, apTargRef, aiAttackTimes, apTargetLocRef, abCrouch, abHoldFire, abAlwaysHit, abDoNoDamage);
		}

		void SetActionSoundValue(std::int32_t aiValue)
		{
			using func_t = decltype(&Actor::SetActionSoundValue);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetActionSoundValue };
			func(this, aiValue);
		}

		void RegisterGrabIKNote()
		{
			using func_t = decltype(&Actor::RegisterGrabIKNote);
			static REL::Relocation<func_t> func{ Offsets::Actor::RegisterGrabIKNote };
			func(this);
		}

		bool IsInCombatWithActor(Actor* apActor)
		{
			using func_t = decltype(&Actor::IsInCombatWithActor);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsInCombatWithActor };
			return func(this, apActor);
		}

		void AddFollower(Actor* apFollower)
		{
			using func_t = decltype(&Actor::AddFollower);
			static REL::Relocation<func_t> func{ Offsets::Actor::AddFollower };
			func(this, apFollower);
		}

		bool IsFollowing(Actor* apLeader)
		{
			using func_t = bool (Actor::*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsFollowing_1 };
			return func(this, apLeader);
		}

		bool CouldBeFollowing(Actor* apLeader)
		{
			using func_t = decltype(&Actor::CouldBeFollowing);
			static REL::Relocation<func_t> func{ Offsets::Actor::CouldBeFollowing };
			return func(this, apLeader);
		}

		bool CanUseWeapon(TESObjectWEAP* apWeapon, bool abInInventory)
		{
			using func_t = decltype(&Actor::CanUseWeapon);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanUseWeapon };
			return func(this, apWeapon, abInInventory);
		}

		void SetPlayerTeammate(bool abValue)
		{
			using func_t = decltype(&Actor::SetPlayerTeammate);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetPlayerTeammate };
			func(this, abValue);
		}

		void AddBackCrime(Crime* apCrime)
		{
			using func_t = decltype(&Actor::AddBackCrime);
			static REL::Relocation<func_t> func{ Offsets::Actor::AddBackCrime };
			func(this, apCrime);
		}

		bool ShouldActorAvoidRadiation()
		{
			using func_t = decltype(&Actor::ShouldActorAvoidRadiation);
			static REL::Relocation<func_t> func{ Offsets::Actor::ShouldActorAvoidRadiation };
			return func(this);
		}

		void FadeIn()
		{
			using func_t = decltype(&Actor::FadeIn);
			static REL::Relocation<func_t> func{ Offsets::Actor::FadeIn };
			func(this);
		}

		bool UpdateRagdollAnimState(bool abConsciousState, float afDelta)
		{
			using func_t = decltype(&Actor::UpdateRagdollAnimState);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateRagdollAnimState };
			return func(this, abConsciousState, afDelta);
		}

		void FadeSkins(NiAVObject* apObj, float afAlpha)
		{
			using func_t = decltype(&Actor::FadeSkins);
			static REL::Relocation<func_t> func{ Offsets::Actor::FadeSkins };
			func(this, apObj, afAlpha);
		}

		float GetVATSAreaFree(TESObjectREFR* apTarget, float afAngle)
		{
			using func_t = decltype(&Actor::GetVATSAreaFree);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetVATSAreaFree };
			return func(this, apTarget, afAngle);
		}

		float GetVATSTargetVisible(TESObjectREFR* apTarget, float afAngle)
		{
			using func_t = decltype(&Actor::GetVATSTargetVisible);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetVATSTargetVisible };
			return func(this, apTarget, afAngle);
		}

		float GetRadius()
		{
			using func_t = decltype(&Actor::GetRadius);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetRadius };
			return func(this);
		}

		float GetWidth()
		{
			using func_t = decltype(&Actor::GetWidth);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetWidth };
			return func(this);
		}

		float GetLength()
		{
			using func_t = decltype(&Actor::GetLength);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetLength };
			return func(this);
		}

		float GetForwardLength()
		{
			using func_t = decltype(&Actor::GetForwardLength);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetForwardLength };
			return func(this);
		}

		float GetWeaponDamagePerSecond()
		{
			using func_t = decltype(&Actor::GetWeaponDamagePerSecond);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetWeaponDamagePerSecond };
			return func(this);
		}

		float GetEndurance()
		{
			using func_t = decltype(&Actor::GetEndurance);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetEndurance };
			return func(this);
		}

		float GetEyeLevel()
		{
			using func_t = decltype(&Actor::GetEyeLevel);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetEyeLevel };
			return func(this);
		}

		ACTOR_AGGRESSION GetActorAggression()
		{
			using func_t = decltype(&Actor::GetActorAggression);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetActorAggression };
			return func(this);
		}

		float GetMedicineEffectivenessMultiplier()
		{
			using func_t = decltype(&Actor::GetMedicineEffectivenessMultiplier);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetMedicineEffectivenessMultiplier };
			return func(this);
		}

		float GetSurvivalEffectivenessMultiplier()
		{
			using func_t = decltype(&Actor::GetSurvivalEffectivenessMultiplier);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetSurvivalEffectivenessMultiplier };
			return func(this);
		}

		void InitiateAlarm(Crime* apCrime, std::int32_t aiProcedureIndex, bool abSendAlarm, Actor* apActor)
		{
			using func_t = decltype(&Actor::InitiateAlarm);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateAlarm };
			func(this, apCrime, aiProcedureIndex, abSendAlarm, apActor);
		}

		void InitiatePickPocketWarning(Actor* apActor)
		{
			using func_t = decltype(&Actor::InitiatePickPocketWarning);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiatePickPocketWarning };
			func(this, apActor);
		}

		void InitiateStealWarning(Actor* apActor, TESForm* apOwner)
		{
			using func_t = decltype(&Actor::InitiateStealWarning);
			static REL::Relocation<func_t> func{ Offsets::Actor::InitiateStealWarning };
			func(this, apActor, apOwner);
		}

		void StealAlarm(TESObjectREFR* apRef, TESBoundObject* apObj, std::int32_t ainumb, std::int32_t aiTotal, TESForm* apowner)
		{
			using func_t = decltype(&Actor::StealAlarm);
			static REL::Relocation<func_t> func{ Offsets::Actor::StealAlarm };
			func(this, apRef, apObj, ainumb, aiTotal, apowner);
		}

		void IncrementMinorCrimes()
		{
			using func_t = decltype(&Actor::IncrementMinorCrimes);
			static REL::Relocation<func_t> func{ Offsets::Actor::IncrementMinorCrimes };
			func(this);
		}

		bool IsAngryWithPlayer()
		{
			using func_t = decltype(&Actor::IsAngryWithPlayer);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsAngryWithPlayer };
			return func(this);
		}

		bool IsProcessingTresPassAlarm()
		{
			using func_t = decltype(&Actor::IsProcessingTresPassAlarm);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsProcessingTresPassAlarm };
			return func(this);
		}

		void PickpocketAlarm(TESObjectREFR* apRef, TESBoundObject* apObj, std::int32_t ainumb)
		{
			using func_t = decltype(&Actor::PickpocketAlarm);
			static REL::Relocation<func_t> func{ Offsets::Actor::PickpocketAlarm };
			func(this, apRef, apObj, ainumb);
		}

		void AttackAlarm(TESObjectREFR* apRef, bool abMinor, bool bModdispthis)
		{
			using func_t = decltype(&Actor::AttackAlarm);
			static REL::Relocation<func_t> func{ Offsets::Actor::AttackAlarm };
			func(this, apRef, abMinor, bModdispthis);
		}

		void MurderAlarm(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Actor::MurderAlarm);
			static REL::Relocation<func_t> func{ Offsets::Actor::MurderAlarm };
			func(this, apRef);
		}

		std::int32_t TrespassAlarm(TESObjectREFR* apRef, TESForm* apOwnership, std::int32_t aiCrime)
		{
			using func_t = decltype(&Actor::TrespassAlarm);
			static REL::Relocation<func_t> func{ Offsets::Actor::TrespassAlarm };
			return func(this, apRef, apOwnership, aiCrime);
		}

		void UpdateCombatData()
		{
			using func_t = decltype(&Actor::UpdateCombatData);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateCombatData };
			func(this);
		}

		bool SetLocalVariableOnActor(char* asVariableName, double afNewValue)
		{
			using func_t = decltype(&Actor::SetLocalVariableOnActor);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetLocalVariableOnActor };
			return func(this, asVariableName, afNewValue);
		}

		double GetLocalVariableOnActor(char* asVariableName)
		{
			using func_t = decltype(&Actor::GetLocalVariableOnActor);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetLocalVariableOnActor };
			return func(this, asVariableName);
		}

		void SetReloadSpeed()
		{
			using func_t = decltype(&Actor::SetReloadSpeed);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetReloadSpeed };
			func(this);
		}

		void SetEquipSpeed()
		{
			using func_t = decltype(&Actor::SetEquipSpeed);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetEquipSpeed };
			func(this);
		}

		bool IsActorRefEssential()
		{
			using func_t = decltype(&Actor::IsActorRefEssential);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsActorRefEssential };
			return func(this);
		}

		void Eat(TESBoundObject* apfood, ExtraDataList* pextra, bool abNow)
		{
			using func_t = decltype(&Actor::Eat);
			static REL::Relocation<func_t> func{ Offsets::Actor::Eat };
			func(this, apfood, pextra, abNow);
		}

		bool DrinkPotion(AlchemyItem* apPotion, ExtraDataList* pextra, bool abNow)
		{
			using func_t = decltype(&Actor::DrinkPotion);
			static REL::Relocation<func_t> func{ Offsets::Actor::DrinkPotion };
			return func(this, apPotion, pextra, abNow);
		}

		void CastAlchemy(MagicItem* apPotionIngredient, bool abLast)
		{
			using func_t = decltype(&Actor::CastAlchemy);
			static REL::Relocation<func_t> func{ Offsets::Actor::CastAlchemy };
			func(this, apPotionIngredient, abLast);
		}

		void CheckEquipWornEnchantment(TESBoundObject* apObject, ExtraDataList* apExtra)
		{
			using func_t = decltype(&Actor::CheckEquipWornEnchantment);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckEquipWornEnchantment };
			func(this, apObject, apExtra);
		}

		void CastPermanentMagic(bool abWornEnchantmentsOnly)
		{
			using func_t = decltype(&Actor::CastPermanentMagic);
			static REL::Relocation<func_t> func{ Offsets::Actor::CastPermanentMagic };
			func(this, abWornEnchantmentsOnly);
		}

		void DispelPermanentMagic()
		{
			using func_t = decltype(&Actor::DispelPermanentMagic);
			static REL::Relocation<func_t> func{ Offsets::Actor::DispelPermanentMagic };
			func(this);
		}

		void PreloadPermanentMagic()
		{
			using func_t = decltype(&Actor::PreloadPermanentMagic);
			static REL::Relocation<func_t> func{ Offsets::Actor::PreloadPermanentMagic };
			func(this);
		}

		void UnloadPermanentMagic()
		{
			using func_t = decltype(&Actor::UnloadPermanentMagic);
			static REL::Relocation<func_t> func{ Offsets::Actor::UnloadPermanentMagic };
			func(this);
		}

		void CheckMagicNode()
		{
			using func_t = decltype(&Actor::CheckMagicNode);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckMagicNode };
			func(this);
		}

		void AttachCastingArt(MagicItem* apSpell)
		{
			using func_t = decltype(&Actor::AttachCastingArt);
			static REL::Relocation<func_t> func{ Offsets::Actor::AttachCastingArt };
			func(this, apSpell);
		}

		void UpdateMagic(bool abSleeping)
		{
			using func_t = decltype(&Actor::UpdateMagic);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateMagic };
			func(this, abSleeping);
		}

		float GetRadiationResistanceMult()
		{
			using func_t = decltype(&Actor::GetRadiationResistanceMult);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetRadiationResistanceMult };
			return func(this);
		}

		void UpdateAlpha()
		{
			using func_t = decltype(&Actor::UpdateAlpha);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateAlpha };
			func(this);
		}

		float GetAlphaMult()
		{
			using func_t = decltype(&Actor::GetAlphaMult);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetAlphaMult };
			return func(this);
		}

		void SetAlphaMult(float afAlpha)
		{
			using func_t = decltype(&Actor::SetAlphaMult);
			static REL::Relocation<func_t> func{ Offsets::Actor::SetAlphaMult };
			func(this, afAlpha);
		}

		bool IsRefractive()
		{
			using func_t = decltype(&Actor::IsRefractive);
			static REL::Relocation<func_t> func{ Offsets::Actor::IsRefractive };
			return func(this);
		}

		static void CheckRadiationLevelChange(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&Actor::CheckRadiationLevelChange);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckRadiationLevelChange };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

		static void CheckDehydrationLevelChange(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&Actor::CheckDehydrationLevelChange);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckDehydrationLevelChange };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

		static void CheckHungerLevelChange(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&Actor::CheckHungerLevelChange);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckHungerLevelChange };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

		static void CheckSleepDeprevationLevelChange(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&Actor::CheckSleepDeprevationLevelChange);
			static REL::Relocation<func_t> func{ Offsets::Actor::CheckSleepDeprevationLevelChange };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

	protected:
		bool RemoveWornItem(TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool ableft, bool abforce)
		{
			using func_t = decltype(&Actor::RemoveWornItem);
			static REL::Relocation<func_t> func{ Offsets::Actor::RemoveWornItem };
			return func(this, apObject, aiNumber, apExtra, ableft, abforce);
		}

		Actor* FindMeleeTarget()
		{
			using func_t = decltype(&Actor::FindMeleeTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::FindMeleeTarget };
			return func(this);
		}

		void CombatHit(Actor* apTarget, bool abPowerAttack, Projectile* apProjectile, char cMeleeEffect)
		{
			using func_t = decltype(&Actor::CombatHit);
			static REL::Relocation<func_t> func{ Offsets::Actor::CombatHit };
			func(this, apTarget, abPowerAttack, apProjectile, cMeleeEffect);
		}

		TESObjectREFR* GetBestDefaultHeadTrackTarget()
		{
			using func_t = decltype(&Actor::GetBestDefaultHeadTrackTarget);
			static REL::Relocation<func_t> func{ Offsets::Actor::GetBestDefaultHeadTrackTarget };
			return func(this);
		}

		bool ShouldRotateToTrack(TESObjectREFR* pRef)
		{
			using func_t = decltype(&Actor::ShouldRotateToTrack);
			static REL::Relocation<func_t> func{ Offsets::Actor::ShouldRotateToTrack };
			return func(this, pRef);
		}

		bool CanHeadTrack(TESObjectREFR* pRef, bool abCheckLineOfSight)
		{
			using func_t = decltype(&Actor::CanHeadTrack);
			static REL::Relocation<func_t> func{ Offsets::Actor::CanHeadTrack };
			return func(this, pRef, abCheckLineOfSight);
		}

		void FakeWeaponHitSound(NiPoint3 aLocation, TESObjectREFR* apTarget, bhkRigidBody* apBody, MATERIAL_TYPE eTargetMat)
		{
			using func_t = decltype(&Actor::FakeWeaponHitSound);
			static REL::Relocation<func_t> func{ Offsets::Actor::FakeWeaponHitSound };
			func(this, aLocation, apTarget, apBody, eTargetMat);
		}

		void DoWeaponKillForce(HitData* apData)
		{
			using func_t = decltype(&Actor::DoWeaponKillForce);
			static REL::Relocation<func_t> func{ Offsets::Actor::DoWeaponKillForce };
			func(this, apData);
		}

		bool ObjectHit(bool abPowerAttack)
		{
			using func_t = decltype(&Actor::ObjectHit);
			static REL::Relocation<func_t> func{ Offsets::Actor::ObjectHit };
			return func(this, abPowerAttack);
		}

		void UpdateActorMover(float a_arg1)
		{
			using func_t = decltype(&Actor::UpdateActorMover);
			static REL::Relocation<func_t> func{ Offsets::Actor::UpdateActorMover };
			func(this, a_arg1);
		}

		void ResetCachedGunSkill()
		{
			using func_t = decltype(&Actor::ResetCachedGunSkill);
			static REL::Relocation<func_t> func{ Offsets::Actor::ResetCachedGunSkill };
			func(this);
		}

		void ResetCachedWeaponCondition()
		{
			using func_t = decltype(&Actor::ResetCachedWeaponCondition);
			static REL::Relocation<func_t> func{ Offsets::Actor::ResetCachedWeaponCondition };
			func(this);
		}

	public:
		// members
		bhkRagdollController*              pRagdollController;         // AC
		bhkRagdollPenetrationUtil*         pPenetrationDetection;      // B0
		DIALOGUE_EMOTION                   ePersuasionEmotion;         // B4
		float                              fEmotionValue;              // B8
		bool                               bProcessMe;                 // BC
		std::uint8_t                       padBD[0x3];                 // BD
		Actor*                             pMyKiller;                  // C0
		bool                               bMurderAlarm;               // C4
		std::uint8_t                       padC5[0x3];                 // C5
		float                              fCheckMyDeadBodyTimer;      // C8
		float                              fDeadBodyAlarm;             // CC
		ModifierList                       pPermanentModifiers;        // D0
		ModifierList                       pBaseValueOverrides;        // E0
		bool                               bBlockPostAnim;             // F0
		bool                               bReloadTargetQueued;        // F1
		bool                               bRunsInLow;                 // F2
		std::uint8_t                       padF3;                      // F3
		BSSimpleList<CastPowerItem*>       CastPowers;                 // F4
		BSSimpleList<DispositionModifier*> DispModifierList;           // FC
		bool                               bInCombat;                  // 104
		std::uint8_t                       pad105[0x3];                // 105
		ACTOR_LIFE_STATE                   eLifeState;                 // 108
		ACTOR_CRITICAL_STAGE               eCriticalStage;             // 10C
		ANIM_GROUP_ENUM                    eQueuedattack;              // 110
		float                              fLastUpdate;                // 114
		bool                               bDeadFlag;                  // 118
		std::uint8_t                       pad119[0x3];                // 119
		std::int32_t                       iVisFlags;                  // 11C
		std::uint32_t                      iLastSeenTime;              // 120
		bool                               bForceRun;                  // 124
		bool                               bForceSneak;                // 125
		bool                               bForceUpdateQuestTarget;    // 126
		bool                               bSearchingInCombat;         // 127
		Actor*                             pCurrentCombatTarget;       // 128
		BSSimpleArray<Actor*, 1024>*       pCurrentCombatTargetArray;  // 12C
		BSSimpleArray<Actor*, 1024>*       pCurrentCombatMemberArray;  // 130
		bool                               bAttackOnNextTheft;         // 134
		std::uint8_t                       pad135[0x3];                // 135
		std::int32_t                       iThiefCrimeStamp;           // 138
		std::uint32_t                      iMinorCrimes;               // 13C
		std::uint32_t                      iMajorCrimes;               // 140
		bool                               bIgnoreCrime;               // 144
		bool                               bEVPBuffered;               // 145
		bool                               bResetAI;                   // 146
		std::uint8_t                       pad147;                     // 147
		TESActorBase*                      pTemplateActorBase;         // 148
		bool                               bInWater;                   // 14C
		bool                               bSwimming;                  // 14D
		bool                               bUpdateLighting;            // 14E
		std::uint8_t                       pad14F;                     // 14F
		std::int32_t                       iActionValue;               // 150
		float                              fTimeronAction;             // 154
		float                              fHeadTrackTimer;            // 158
		bool                               bWasInFrustum;              // 15C
		bool                               bShouldRotateToTrack;       // 15D
		std::uint16_t                      pad15E;                     // 15E
		NiPoint3                           EditorLocCoord;             // 160
		float                              fEditorLocZRot;             // 16C
		TESForm*                           pEditorLocForm;             // 170
		bool                               bSetOnDeath;                // 174
		bool                               bContainerReset;            // 175
		std::uint16_t                      pad176;                     // 176
		float                              fGunSkillGun;               // 178
		float                              fGunSkillHUD;               // 17C
		float                              fGunSkillActor;             // 180
		float                              fGunSkillVATS;              // 184
		float                              fCurrentWeaponCondition;    // 188
		bool                               bFootIKInRange;             // 18C
		bool                               bPlayerTeammate;            // 18D
		bool                               bLightingUpdatedNonMoving;  // 18E
		std::uint8_t                       pad18F;                     // 18F
		ActorMover*                        pActorMover;                // 190
		void*                              pLastHitData;               // 194
		TESPackage*                        pInitialPackage;            // 198
		float                              fRadiationResistanceMult;   // 19C
		ContinuousBeamProjectile*          pContinuousBeamPersistant;  // 1A0
		std::int32_t                       iEmotion;                   // 1A4
		std::int32_t                       iEmotionValue;              // 1A8
		SIT_SLEEP_STATE                    cCurrentSitSleepState;      // 1AC
		bool                               bTurretBehavior;            // 1B0
		bool                               bForceHitReaction;          // 1B1
		std::uint16_t                      pad1B2;                     // 1B2
	};
	static_assert(sizeof(Actor) == 0x1B4);
}
