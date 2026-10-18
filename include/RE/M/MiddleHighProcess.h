#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AIM_ENUM.h"
#include "RE/A/ANIMATION_ACTION.h"
#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/A/ActorPackage.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/F/FurnitureMark.h"
#include "RE/K/KNOCK_STATE_ENUM.h"
#include "RE/M/MagicSystem_FlareType.h"
#include "RE/M/MiddleLowProcess.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"
#include "RE/R/RESET_3D_FLAGS.h"
#include "RE/S/SIT_SLEEP_STATE.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class ActorPackageData;
	class Animation;
	class ArrowProjectile;
	class BGSBodyPartData;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BSAnimGroupSequence;
	class BSBound;
	class BSCloneReserver;
	class BSFaceGenAnimationData;
	class BSFaceGenNiNode;
	class BSShaderPPLightingProperty;
	class BipedAnim;
	class CombatGroup;
	class DialogueItem;
	class ExtraDataList;
	class HitData;
	class ItemChange;
	class LipSynchAnim;
	class MagicCaster;
	class MagicItem;
	class MagicTarget;
	class MobileObject;
	class NiAVObject;
	class NiControllerManager;
	class NiNode;
	class ObjectstoAcquire;
	class PackageTarget;
	class PatrolActorPackageData;
	class QueuedFile;
	class QueuedItem;
	class SpellItem;
	class TESBoundObject;
	class TESEffectShader;
	class TESIdleForm;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESObjectWEAP;
	class TESPackage;
	class TESWorldSpace;
	class bhkCharacterController;

	class MiddleHighProcess :
		public MiddleLowProcess  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MiddleHighProcess };
		static constexpr auto VTABLE{ VTABLE::MiddleHighProcess };

		class DeferredHideLimb;

		class DeferredHideLimb
		{
		public:
			// members
			float                 fDismemberTimer;        // 00?
			BGSBodyPart_LIMB_ENUM eLimbIndex;             // 04?
			NiPointer<NiNode>     spDismemberedLimbRoot;  // 08?
			NiPointer<NiAVObject> spReplacementLimb;      // 0C?
			bool                  bExplosion;             // 10?
			std::uint8_t          pad11[0x3];             // 11
		};

		// override (MiddleLowProcess)
		virtual ~MiddleHighProcess() = default;                                                                                                                                                                                                                                                        // 00
		virtual void HandleDeletedReference(TESObjectREFR* apRef) override;                                                                                                                                                                                                                            // 02
		virtual void Update(MobileObject* apRef, float fTimeDelta) override;                                                                                                                                                                                                                           // 03
		virtual void Update(MobileObject* apRef) override;                                                                                                                                                                                                                                             // 04
		virtual bool CheckforNewPackage(Actor* apActor, bool abFlag) override;                                                                                                                                                                                                                         // 09
		virtual void SetCurrentPackageSpell(MagicItem* apSpell) override;                                                                                                                                                                                                                              // 14
		virtual void UpdateHealthBar(Actor* apActor) override;                                                                                                                                                                                                                                         // 16
		virtual void SetIdleDoneOnce(bool abflag) override;                                                                                                                                                                                                                                            // 19
		virtual void ClearFurniture(Actor* apActor) override;                                                                                                                                                                                                                                          // 21
		virtual bool SetTargetForPackage(Actor* apActor) override;                                                                                                                                                                                                                                     // 23
		virtual TESObjectREFR* SetLocationForPackage(Actor* apActor, bool bSecondLoc) override;                                                                                                                                                                                                        // 24
		virtual bool GetPickpocketed() override;                                                                                                                                                                                                                                                       // 44
		virtual void SetPickpocketed(bool abflag) override;                                                                                                                                                                                                                                            // 45
		virtual void SetTarget(TESObjectREFR* __formal) override;                                                                                                                                                                                                                                      // 4B
		virtual void SetAcquireObject(ObjectstoAcquire* apacquire) override;                                                                                                                                                                                                                           // 4E
		virtual ObjectstoAcquire* GetSavedAcquireObject() override;                                                                                                                                                                                                                                    // 4F
		virtual void SetSavedAcquireObject(ObjectstoAcquire* apobject) override;                                                                                                                                                                                                                       // 50
		virtual BSFaceGenAnimationData* GetFaceAnimationData(Actor* apActor) override;                                                                                                                                                                                                                 // 51
		virtual ItemChange* GetCurrentWeapon() override;                                                                                                                                                                                                                                               // 52
		virtual ItemChange* GetCurrentAmmo() override;                                                                                                                                                                                                                                                 // 53
		virtual bool SetCurrentWeapon(ItemChange* __formal, NiNode* ap3D, bool bForce) override;                                                                                                                                                                                                       // 58
		virtual bool SetCurrentAmmo(ItemChange* __formal) override;                                                                                                                                                                                                                                    // 5A
		virtual void ResolveEquipmentQueue(Actor* apActor) override;                                                                                                                                                                                                                                   // 5C
		virtual bool IsItemQueued(TESBoundObject* apObject, ExtraDataList* apExtra, bool abEquiped) override;                                                                                                                                                                                          // 5D
		virtual void AddQueuedItem(Actor* apActor, bool abEquip, TESBoundObject* apObject, std::int32_t aiNumber, ExtraDataList* apExtra, bool abNow, bool abForceEquip, bool abFromMenus, bool abForceUnequip, bool abEquipCalling, bool abPlayPickUpSounds) override;                                // 5E
		virtual void RemoveQueuedItem(TESBoundObject* apObject, ExtraDataList* apExtra) override;                                                                                                                                                                                                      // 5F
		virtual void RemoveAllQueuedItems() override;                                                                                                                                                                                                                                                  // 61
		virtual NiAVObject* GetFireNode() override;                                                                                                                                                                                                                                                    // 62
		virtual void SetFireNode(NiAVObject* apFireNode) override;                                                                                                                                                                                                                                     // 63
		virtual NiNode* GetWeaponBone(BipedAnim* apBiped) override;                                                                                                                                                                                                                                    // 64
		virtual void StoreBonePointers(NiControllerManager* apManager, NiNode* ap3D) override;                                                                                                                                                                                                         // 65
		virtual NiNode* GetTorchBone(BipedAnim* apBiped) override;                                                                                                                                                                                                                                     // 67
		virtual NiNode* GetShieldBone(BipedAnim* apBiped) override;                                                                                                                                                                                                                                    // 68
		virtual NiNode* GetQuiverBone(BipedAnim* apBiped) override;                                                                                                                                                                                                                                    // 69
		virtual NiNode* GetRightWeaponBone(BipedAnim* apBiped) override;                                                                                                                                                                                                                               // 6A
		virtual NiNode* GetLeftWeaponBone(BipedAnim* apBiped) override;                                                                                                                                                                                                                                // 6B
		virtual bool IsCurrentWeaponGrenade() override;                                                                                                                                                                                                                                                // 6C
		virtual bool IsCurrentWeaponMine() override;                                                                                                                                                                                                                                                   // 6D
		virtual bool IsCurrentWeaponGrenadeOrMine() override;                                                                                                                                                                                                                                          // 6E
		virtual bool GetIsAggressor() override;                                                                                                                                                                                                                                                        // 73
		virtual void UpdateReparentWeapon(Actor* apActor) override;                                                                                                                                                                                                                                    // 76
		virtual TESPackage* GetRunOncePackage() override;                                                                                                                                                                                                                                              // 83
		virtual void SetRunOncePackage(TESPackage* apPack, MobileObject* apActor) override;                                                                                                                                                                                                            // 85
		virtual void SetRunOnceProcedureIndex(std::int32_t aiNewIndex) override;                                                                                                                                                                                                                       // 86
		virtual std::int32_t GetRunOnceProcedureIndex() override;                                                                                                                                                                                                                                      // 87
		virtual bool IsPackageDone(Actor* apActor) override;                                                                                                                                                                                                                                           // 8A
		virtual DialogueItem* GetSubtitleItem() override;                                                                                                                                                                                                                                              // 91
		virtual ActorPackageData* GetInstanceDataThatIsRunning() override;                                                                                                                                                                                                                             // 9D
		virtual ActorPackage* GetActorPackageThatIsRunning() override;                                                                                                                                                                                                                                 // 9E
		virtual TESPackage* GetPackageThatIsRunning() override;                                                                                                                                                                                                                                        // 9F
		virtual std::int32_t GetProcedureIndexRunning() override;                                                                                                                                                                                                                                      // A0
		virtual void SetProcedureIndexRunning(std::int32_t aiNewIndex) override;                                                                                                                                                                                                                       // A1
		virtual void AddToProcedureIndexRunning(MobileObject* apActor, std::int32_t ainumb) override;                                                                                                                                                                                                  // A2
		virtual bhkCharacterController* GetCharController() override;                                                                                                                                                                                                                                  // A3
		virtual void SetCharController(NiPointer<bhkCharacterController> apCon) override;                                                                                                                                                                                                              // A4
		virtual void EndMoveMessage(Actor* apActor) override;                                                                                                                                                                                                                                          // A5
		virtual void ProcessFollow(Actor* apActor, bool abflag, std::int32_t emovemode, bool abpursuit) override;                                                                                                                                                                                      // A6
		virtual void ProcessPursue(Actor* apActor, bool abNewpackage, bool abInterateIndex, std::int32_t emovemode) override;                                                                                                                                                                          // A7
		virtual void ProcessFlee(Actor* apActor) override;                                                                                                                                                                                                                                             // A8
		virtual void ProcessGetUpOneHour(Actor* apActor) override;                                                                                                                                                                                                                                     // AB
		virtual bool SitOrSleep(Actor* apActor) override;                                                                                                                                                                                                                                              // AC
		virtual bool ShouldDisableCharController(TESObjectREFR* apFurnitureRef, std::uint32_t aiFurnitureNum) override;                                                                                                                                                                                // AE
		virtual bool ProcessGetUp(Actor* apActor) override;                                                                                                                                                                                                                                            // AF
		virtual bool EnterCombat(Actor* apActor, Actor* apTarget, bool abCheckForAmbush, bool absendalarm, CombatGroup* apGroup, bool abfleeing, bool abForceFlee, bool abAggressor, char acTeam, bool bforcecombat, bool bIgnoreDefensivePackage, bool abCastSpell, TESPackage* apPackage) override;  // CF
		virtual void SetActorsAnimation(Actor* apActor, std::int32_t emovemode, bool abCheckAlwaysRun) override;                                                                                                                                                                                       // D4
		virtual bool IsRunningRunOnce() override;                                                                                                                                                                                                                                                      // D7
		virtual std::int32_t GetWeaponCondition(Actor* apActor) override;                                                                                                                                                                                                                              // DA
		virtual TESIdleForm* GetLastIdlePlayed() override;                                                                                                                                                                                                                                             // E3
		virtual void SetLastIdlePlayed(TESIdleForm* apIdle) override;                                                                                                                                                                                                                                  // E4
		virtual void CastAbility(MagicCaster* apCaster, SpellItem* apSpell, bool abLoadCast) override;                                                                                                                                                                                                 // EE
		virtual MagicItem* GetCurrentSpell() override;                                                                                                                                                                                                                                                 // F0
		virtual void SetCurrentSpell(MagicItem* apCurrentSpell) override;                                                                                                                                                                                                                              // F1
		virtual MagicTarget* GetDesiredTarget() override;                                                                                                                                                                                                                                              // F2
		virtual void SetDesiredTarget(MagicTarget* apDesiredTarget) override;                                                                                                                                                                                                                          // F3
		virtual bool GetShouldCheckMagicNode() override;                                                                                                                                                                                                                                               // F4
		virtual void SetShouldCheckMagicNode(bool abCheck) override;                                                                                                                                                                                                                                   // F5
		virtual void Move(MobileObject* apRef, NiPoint3 apSideVec) override;                                                                                                                                                                                                                           // F6
		virtual ANIMATION_ACTION GetAnimAction() override;                                                                                                                                                                                                                                             // F7
		virtual void SetIronSights(bool abIronSights) override;                                                                                                                                                                                                                                        // 100
		virtual bool GetIronSights() override;                                                                                                                                                                                                                                                         // 101
		virtual bool HasMovementAnim(ANIM_GROUP_ENUM aeMovementAnim) override;                                                                                                                                                                                                                         // 102
		virtual KNOCK_STATE_ENUM GetKnockState() override;                                                                                                                                                                                                                                             // 103
		virtual void SetKnockState(KNOCK_STATE_ENUM aeKnockState) override;                                                                                                                                                                                                                            // 104
		virtual void KnockExplosion(Actor* apActor, NiPoint3 aDirection, float afMagnitude) override;                                                                                                                                                                                                  // 106
		virtual void UpdateKnockState(Actor* apActor) override;                                                                                                                                                                                                                                        // 107
		virtual void ClearKnockState(Actor* apActor) override;                                                                                                                                                                                                                                         // 108
		virtual void SetAimSequence(AIM_ENUM aeDirection, BSAnimGroupSequence* apSeq) override;                                                                                                                                                                                                        // 109
		virtual void UpdateAimSequences(Actor* apActor) override;                                                                                                                                                                                                                                      // 10A
		virtual float GetAimLooking() override;                                                                                                                                                                                                                                                        // 10B
		virtual void AddGunDrift(float afDegrees) override;                                                                                                                                                                                                                                            // 10C
		virtual void ClearAutomaticShotsToFire(bool abStartShooting) override;                                                                                                                                                                                                                         // 10D
		virtual std::uint8_t GetAutomaticShotsToFire(Actor* apActor) override;                                                                                                                                                                                                                         // 10E
		virtual void SetShotsToFire(std::uint8_t acShots) override;                                                                                                                                                                                                                                    // 10F
		virtual std::uint8_t GetShotsToFire() override;                                                                                                                                                                                                                                                // 110
		virtual float GetAutomaticShotDelay() override;                                                                                                                                                                                                                                                // 111
		virtual bool GetWantWeaponDrawn() override;                                                                                                                                                                                                                                                    // 113
		virtual void SetWantWeaponDrawn(bool abWantDrawn) override;                                                                                                                                                                                                                                    // 114
		virtual bool GetWeaponDrawn() override;                                                                                                                                                                                                                                                        // 115
		virtual void SetWeaponDrawn(Actor* apActor, bool abDrawn) override;                                                                                                                                                                                                                            // 116
		virtual void Set3DUpdateFlag(RESET_3D_FLAGS aeFlag) override;                                                                                                                                                                                                                                  // 11A
		virtual void Clear3DUpdateFlag(RESET_3D_FLAGS aeFlag) override;                                                                                                                                                                                                                                // 11B
		virtual void ClearAll3DUpdateFlags() override;                                                                                                                                                                                                                                                 // 11C
		virtual bool Get3DUpdateFlag(RESET_3D_FLAGS aeFlag) override;                                                                                                                                                                                                                                  // 11D
		virtual std::uint8_t GetAll3DUpdateFlags() override;                                                                                                                                                                                                                                           // 11E
		virtual void SetSitSleepState(Actor* apActor, SIT_SLEEP_STATE aeState, TESObjectREFR* apFurnitureRef, std::uint8_t acFurnitureIndex) override;                                                                                                                                                 // 12F
		virtual std::uint32_t GetFurnitureMarkerID() override;                                                                                                                                                                                                                                         // 130
		virtual TESObjectREFR* GetCurrentFurniture() override;                                                                                                                                                                                                                                         // 132
		virtual std::uint32_t GetCurrentFurnitureIndex() override;                                                                                                                                                                                                                                     // 133
		virtual FurnitureMark* GetFurnitureMarker() override;                                                                                                                                                                                                                                          // 134
		virtual void LoadSitSleepIdle(Actor* apActor, Animation* apAnimation) override;                                                                                                                                                                                                                // 136
		virtual bool ContinuingPackageforPC() override;                                                                                                                                                                                                                                                // 137
		virtual bool HasBeenAttacked() override;                                                                                                                                                                                                                                                       // 13C
		virtual void SetBeenAttacked(bool abFlag) override;                                                                                                                                                                                                                                            // 13D
		virtual BSShaderPPLightingProperty* GetLightingShaderProperty() override;                                                                                                                                                                                                                      // 13E
		virtual void CalculateLightValue(Actor* apActor, bool abIgnoreTorch) override;                                                                                                                                                                                                                 // 140
		virtual void ClearCurrentDataforProcess(Actor* apActor) override;                                                                                                                                                                                                                              // 149
		virtual void SetCommandingActor(Actor* apActor) override;                                                                                                                                                                                                                                      // 14A
		virtual Actor* GetCommandingActor() override;                                                                                                                                                                                                                                                  // 14B
		virtual void SetLastBoundWeapon(TESObjectWEAP* apBoundWeapon) override;                                                                                                                                                                                                                        // 14C
		virtual void SetFurniture(TESObjectREFR* pref, std::uint8_t aiindex, FurnitureMark* apMarker) override;                                                                                                                                                                                        // 150
		virtual void RemoveAndAttachItems(MobileObject* apMob) override;                                                                                                                                                                                                                               // 151
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                         // 152
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                                                                                           // 153
		virtual void SaveGame(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                                     // 154
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                           // 155
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags, MobileObject* pmob) override;                                                                                                                                                                                       // 156
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                       // 157
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags, MobileObject* pmob) override;                                                                                                                                                                                       // 158
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags, MobileObject* pmob) override;                                                                                                                                                                                 // 159
		virtual void Revert(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                                       // 15A
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                     // 15B
		virtual TESEffectShader* GetWeaponEnchantmentVisuals() override;                                                                                                                                                                                                                               // 15C
		virtual void SetWeaponEnchantmentVisuals(TESEffectShader* apEffect) override;                                                                                                                                                                                                                  // 15D
		virtual bool GetShouldRefreshMagicShadersEffects() override;                                                                                                                                                                                                                                   // 15E
		virtual void SetShouldRefreshMagicShadersEffects(bool abWeapon, bool abBody, bool abLoading) override;                                                                                                                                                                                         // 15F
		virtual void SetBeginIdlesPlayed(bool abFlag) override;                                                                                                                                                                                                                                        // 161
		virtual bool GetBeginIdlesPlayed() override;                                                                                                                                                                                                                                                   // 162
		virtual void SetEndIdlesPlayed(bool abFlag) override;                                                                                                                                                                                                                                          // 163
		virtual bool GetEndIdlesPlayed() override;                                                                                                                                                                                                                                                     // 164
		virtual float GetAlphaMult() override;                                                                                                                                                                                                                                                         // 16B
		virtual void SetAlphaMult(float afAlpha) override;                                                                                                                                                                                                                                             // 16C
		virtual float GetScriptRefractionPower() override;                                                                                                                                                                                                                                             // 16D
		virtual bool ShouldCheckFlare(BSSimpleList<ActiveEffect*>* apList, MagicSystem_FlareType aeFlareType) override;                                                                                                                                                                                // 172
		virtual void SetRefreshFlareFlags() override;                                                                                                                                                                                                                                                  // 173
		virtual float GetDamageModifier(ActorValue_Index aiWhich) override;                                                                                                                                                                                                                            // 17C
		virtual BSBound* GetBSBound() override;                                                                                                                                                                                                                                                        // 17D
		virtual void SetBSBound(BSBound* apBound) override;                                                                                                                                                                                                                                            // 17E
		virtual void SetIsSummonedCreature(bool abValue) override;                                                                                                                                                                                                                                     // 1A4
		virtual bool GetIsSummonedCreature() override;                                                                                                                                                                                                                                                 // 1A5
		virtual void RemoveAttachedArrow(ArrowProjectile* apArrow) override;                                                                                                                                                                                                                           // 1A9
		virtual void MoveAttachedArrowsToParentCell(TESObjectREFR* apAttachedRef) override;                                                                                                                                                                                                            // 1AA
		virtual BSSimpleList<ArrowProjectile*>* GetAttachedArrowList() override;                                                                                                                                                                                                                       // 1AB
		virtual void StoreDamageNodes(NiNode* apNode, BGSBodyPartData* apBodyPartData) override;                                                                                                                                                                                                       // 1AE
		virtual NiAVObject* GetTorsoNode() override;                                                                                                                                                                                                                                                   // 1B2
		virtual bool IsSustainedFire() override;                                                                                                                                                                                                                                                       // 1B3
		virtual void SetSustainedFire(bool abvalue) override;                                                                                                                                                                                                                                          // 1B5
		virtual void UpdateArmorWorn(Actor* apActor) override;                                                                                                                                                                                                                                         // 1B6
		virtual bool IsHeavyBodyArmorWorn() override;                                                                                                                                                                                                                                                  // 1B7
		virtual bool IsPowerArmorHelmetWorn() override;                                                                                                                                                                                                                                                // 1B9
		virtual bool HasBackPackWorn() override;                                                                                                                                                                                                                                                       // 1BA
		virtual void SetCurrentlyReanimating(bool abCurrentlyReanimating) override;                                                                                                                                                                                                                    // 1BB
		virtual bool GetCurrentlyReanimating() override;                                                                                                                                                                                                                                               // 1BC
		virtual void FinishSetupSpecialIdle(Actor* apActor) override;                                                                                                                                                                                                                                  // 1C1
		virtual void SavePackageToExtraData(MobileObject* apMob) override;                                                                                                                                                                                                                             // 1C2
		virtual void SetCreatureLipSynchAnim(LipSynchAnim* apCreatureLipsynchAnim) override;                                                                                                                                                                                                           // 1CF
		virtual LipSynchAnim* GetCreatureLipSynchAnim() override;                                                                                                                                                                                                                                      // 1D0
		virtual void SetCreatureLipSynchStartTime(std::uint32_t aiCreatureLipsynchStartTime) override;                                                                                                                                                                                                 // 1D1
		virtual std::uint32_t GetCreatureLipSynchStartTime() override;                                                                                                                                                                                                                                 // 1D3
		virtual void AddRadiationMagicDelta(float afValue) override;                                                                                                                                                                                                                                   // 1D4
		virtual void RemoveRadiationMagicDelta(float afValue) override;                                                                                                                                                                                                                                // 1D6
		virtual float GetRadiationMagicDelta() override;                                                                                                                                                                                                                                               // 1D7
		virtual void SetRadiationWaterDelta(float afValue) override;                                                                                                                                                                                                                                   // 1D8
		virtual float GetRadiationWaterDelta() override;                                                                                                                                                                                                                                               // 1D9
		virtual void SetRadiationDelta(float afValue) override;                                                                                                                                                                                                                                        // 1DA
		virtual HitData* GetLastHitData() override;                                                                                                                                                                                                                                                    // 1DB
		virtual float GetRadiationDelta() override;                                                                                                                                                                                                                                                    // 1DC
		virtual void SetLastHitData(HitData* apData) override;                                                                                                                                                                                                                                         // 1DE
		virtual HitData* GetLastAttackHitData() override;                                                                                                                                                                                                                                              // 1E0
		virtual void SetLastAttackHitData(HitData* apData) override;                                                                                                                                                                                                                                   // 1E1
		virtual std::int32_t GetWeaponConditionStage() override;                                                                                                                                                                                                                                       // 1E2
		virtual void SetWeaponConditionStage(std::int32_t aiStage) override;                                                                                                                                                                                                                           // 1E3
		virtual BSFaceGenNiNode* GetFaceNode() override;                                                                                                                                                                                                                                               // 1E4
		virtual void SetFaceNode(BSFaceGenNiNode* apNode) override;                                                                                                                                                                                                                                    // 1E5
		virtual BSFaceGenNiNode* GetFaceSkinnedNode() override;                                                                                                                                                                                                                                        // 1E6
		virtual void SetFaceSkinnedNode(BSFaceGenNiNode* apNode) override;                                                                                                                                                                                                                             // 1E7
		virtual NiAVObject* GetHeadAnims() override;                                                                                                                                                                                                                                                   // 1E8
		virtual void CheckCachedValueFlags(Actor* apActor) override;                                                                                                                                                                                                                                   // 1EA
		virtual void ProcessEscort(Actor* apActor) override;                                                                                                                                                                                                                                           // 1ED
		virtual void ProcessSleep(Actor* apActor) override;                                                                                                                                                                                                                                            // 1EE
		virtual void ProcessEat(Actor* apActor, TESObjectREFR* apLocRef) override;                                                                                                                                                                                                                     // 1EF
		virtual void ProcessCombat(Actor* apActor) override;                                                                                                                                                                                                                                           // 1F0
		virtual void ProcessAlarm(Actor* apActor) override;                                                                                                                                                                                                                                            // 1F1
		virtual bool ProcessActivate(Actor* apActor, bool abInterateindex) override;                                                                                                                                                                                                                   // 1F2
		virtual void ProcessAccompany(Actor* apActor) override;                                                                                                                                                                                                                                        // 1F3
		virtual void ProcessAcquire(Actor* apActor) override;                                                                                                                                                                                                                                          // 1F4
		virtual void ProcessChooseSpell(Actor* apActor) override;                                                                                                                                                                                                                                      // 1F8
		virtual void ProcessFleeNonCombat(Actor* apActor) override;                                                                                                                                                                                                                                    // 1F9
		virtual void ProcessSandBox(Actor* apActor) override;                                                                                                                                                                                                                                          // 1FB
		virtual void ProcessMovementBlocked(Actor* apActor) override;                                                                                                                                                                                                                                  // 1FC
		virtual void ProcessPatrol(Actor* apActor) override;                                                                                                                                                                                                                                           // 1FF
		virtual void ProcessNotify(Actor* apActor) override;                                                                                                                                                                                                                                           // 202
		virtual bool CheckIfHasObject(Actor* apActor, std::int32_t ainumb) override;                                                                                                                                                                                                                   // 203
		virtual TESObjectREFR* GetTargetForPackage(Actor* apActor, TESPackage* apPackage) override;                                                                                                                                                                                                    // 204
		virtual TESObjectREFR* GetLocationForPackage(Actor* apActor, TESPackage* apPackage, bool abSecondLoc) override;                                                                                                                                                                                // 205
		virtual void EvaluateOrderAcquireList(Actor* apActor) override;                                                                                                                                                                                                                                // 206
		virtual bool ProcessCombatOneHour(Actor* apActor, float afTimeDelta) override;                                                                                                                                                                                                                 // 207

		// add
		virtual void SetAnimation(Animation* apAnim);                                                                                  // 208
		virtual bool SetupPathFinding(Actor* apActor, NiPoint3 aDestPoint, TESObjectCELL* apDestIntCell, TESWorldSpace* apDestWorld);  // 209
		virtual void SetAnimationActiveFlag(bool abflag);                                                                              // 20A
		virtual void ResetTarget();                                                                                                    // 20B
		virtual void ProcessBuyObject(Actor* apActor);                                                                                 // 20C
		virtual void ProcessSteal(Actor* apActor);                                                                                     // 20D
		virtual void ProcessPickPocket(Actor* apActor);                                                                                // 20E
		virtual void ProcessDialogue(MobileObject* apActor);                                                                           // 20F
		virtual bool ProcessDialogueActivate(Actor* apActor);                                                                          // 210
		virtual bool ProcessUseFurniture(Actor* apActor, TESObjectREFR* apFurniture);                                                  // 211
		virtual void ProcessRemoveWorn(Actor* apActor, bool bInterateindex, bool bOnlyifClothes);                                      // 212
		virtual void ProcessWander(Actor* apActor, NiPoint3 const* apCenter, float afRadius);                                          // 213
		virtual bool ProcessSandBoxDialogue(Actor* apActor, TESObjectREFR* aptalkTarget);                                              // 214
		virtual bool ProcessPatrolInit(Actor* apActor, PatrolActorPackageData* apData);                                                // 215
		virtual void ProcessPatrolStartTravelToNextRef(Actor* apActor, PatrolActorPackageData* apData);                                // 216
		virtual void ProcessPatrolTravelingToNextRef(Actor* apActor, PatrolActorPackageData* apData);                                  // 217
		virtual void ProcessPatrolStartAtRefBehavior(Actor* apActor, PatrolActorPackageData* apData);                                  // 218
		virtual void ProcessPatrolAtRef(Actor* apActor, PatrolActorPackageData* apData);                                               // 219
		virtual void ProcessUseIdleMarker(Actor* apActor, TESObjectREFR* apRef);                                                       // 21A
		virtual void ProcessAccompanyOneHour(Actor* apActor);                                                                          // 21B

		MiddleHighProcess* ctor()
		{
			using func_t = MiddleHighProcess*(__thiscall*)(MiddleHighProcess*);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ctor };
			return func(this);
		}

		void ClearReservation()
		{
			using func_t = decltype(&MiddleHighProcess::ClearReservation);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ClearReservation };
			func(this);
		}

		void SetWeaponFlags()
		{
			using func_t = decltype(&MiddleHighProcess::SetWeaponFlags);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::SetWeaponFlags };
			func(this);
		}

		bool ReloadDynamicIdleOn1stPerson(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::ReloadDynamicIdleOn1stPerson);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ReloadDynamicIdleOn1stPerson };
			return func(this, apActor);
		}

		void ReparentWeapon(bool abDrawn, BipedAnim* apBiped, Animation* apAnim, Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::ReparentWeapon);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ReparentWeapon };
			func(this, abDrawn, apBiped, apAnim, apActor);
		}

		void SaveCharController(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&MiddleHighProcess::SaveCharController);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::SaveCharController };
			func(this, apSaveGameBuffer);
		}

		void LoadCharController(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&MiddleHighProcess::LoadCharController);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::LoadCharController };
			func(this, apLoadGameBuffer);
		}

		bool ShouldPickPackIdle(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::ShouldPickPackIdle);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ShouldPickPackIdle };
			return func(this, apActor);
		}

		void PickPackageIdles(Actor* apActor, bool abForceIdle)
		{
			using func_t = decltype(&MiddleHighProcess::PickPackageIdles);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::PickPackageIdles };
			func(this, apActor, abForceIdle);
		}

		void ClearShootingAction(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::ClearShootingAction);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ClearShootingAction };
			func(this, apActor);
		}

	protected:
		bool DidPathingFail(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::DidPathingFail);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::DidPathingFail };
			return func(this, apActor);
		}

		TESObjectREFR* SetTargetData(Actor* apActor, TESPackage* apPackage, PackageTarget* ptarg)
		{
			using func_t = decltype(&MiddleHighProcess::SetTargetData);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::SetTargetData };
			return func(this, apActor, apPackage, ptarg);
		}

		bool ProcessEscortOneHour(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::ProcessEscortOneHour);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ProcessEscortOneHour };
			return func(this, apActor);
		}

		bool ProcessFollowOneHour(Actor* apActor, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&MiddleHighProcess::ProcessFollowOneHour);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ProcessFollowOneHour };
			return func(this, apActor, a_arg2, a_arg3);
		}

		bool ProcessEatOneHour(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::ProcessEatOneHour);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ProcessEatOneHour };
			return func(this, apActor);
		}

		bool ProcessActivateOneHour(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::ProcessActivateOneHour);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ProcessActivateOneHour };
			return func(this, apActor);
		}

		void AlignToFurnitureAndAddPostAnimSitSleep(Actor* apActor)
		{
			using func_t = decltype(&MiddleHighProcess::AlignToFurnitureAndAddPostAnimSitSleep);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::AlignToFurnitureAndAddPostAnimSitSleep };
			func(this, apActor);
		}

		void FindBedChairs(Actor* apActor, bool abSit, TESObjectREFR* apRefLoc)
		{
			using func_t = decltype(&MiddleHighProcess::FindBedChairs);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::FindBedChairs };
			func(this, apActor, abSit, apRefLoc);
		}

		static bool EvaluateReferenceforSitSleep(TESObjectREFR* apRef, std::int32_t aiFilterData)
		{
			using func_t = decltype(&MiddleHighProcess::EvaluateReferenceforSitSleep);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::EvaluateReferenceforSitSleep };
			return func(apRef, aiFilterData);
		}

		void ClearFurnitureMarker()
		{
			using func_t = decltype(&MiddleHighProcess::ClearFurnitureMarker);
			static REL::Relocation<func_t> func{ Offsets::MiddleHighProcess::ClearFurnitureMarker };
			func(this);
		}

	public:
		// members
		BSSimpleList<TESObjectREFR*>                       DeadDetectList;                    // C8
		BSSimpleList<TESObjectREFR*>                       RefListChairBed;                   // D0
		float                                              fPursueTimer;                      // D8
		float                                              fEquippedWeight;                   // DC
		bool                                               bDoneOnce;                         // E0
		bool                                               bAimingTarget;                     // E1
		bool                                               bNeedReparentWeapon;               // E2
		bool                                               bDrawn;                            // E3
		ActorPackage                                       RunOncePackage;                    // E4
		NiPoint3                                           lastSeenPostion;                   // FC
		PACKAGE_OBJECT_TYPE                                eUseItem;                          // 108
		TESIdleForm*                                       pLastIdlePlayed;                   // 10C
		bool                                               bPickPackIdle;                     // 110
		std::uint8_t                                       pad111[0x3];                       // 111
		ItemChange*                                        pWeapon;                           // 114
		ItemChange*                                        pAmmo;                             // 118
		NiPointer<QueuedFile>                              spWeaponPreload;                   // 11C
		NiPointer<BSCloneReserver>                         spReserveProjectileClones;         // 120
		bool                                               bWeaponGrenade;                    // 124
		bool                                               bWeaponMine;                       // 125
		bool                                               bWeaponThrown;                     // 126
		bool                                               bHeavyArmorWorn;                   // 127
		bool                                               bPowerArmorWorn;                   // 128
		bool                                               bPowerArmorHelmet;                 // 129
		bool                                               bHasBackPackWorn;                  // 12A
		std::uint8_t                                       pad12B;                            // 12B
		NiNode*                                            pWeaponBone;                       // 12C
		NiAVObject*                                        pFireNode;                         // 130
		bool                                               bWantWeaponDrawn;                  // 134
		bool                                               bWeaponDrawn;                      // 135
		std::uint16_t                                      pad136;                            // 136
		NiPointer<bhkCharacterController>                  spCharController;                  // 138
		char                                               cKnockState;                       // 13C
		std::uint8_t                                       cSitSleepState;                    // 13D
		std::uint16_t                                      pad13E;                            // 13E
		TESObjectREFR*                                     pCurrentFurniture;                 // 140
		std::uint8_t                                       cCurrentFurnitureIndex;            // 144
		std::uint8_t                                       pad145[0x3];                       // 145
		FurnitureMark                                      FurnitureMarker;                   // 148
		Actor*                                             pCommandingActor;                  // 158
		TESObjectWEAP*                                     pLastBoundWeapon;                  // 15C
		MagicItem*                                         pCurrentSpell;                     // 160
		MagicItem*                                         pCurrentPackageSpell;              // 164
		bool                                               bCheckMagicNode;                   // 168
		std::uint8_t                                       pad169[0x3];                       // 169
		TESEffectShader*                                   pCurrentWeaponEffect;              // 16C
		float                                              fAlphaMult;                        // 170
		float                                              fScriptRefractPower;               // 174
		BSFaceGenAnimationData*                            m_pFaceAnimationData;              // 178
		bool                                               bRefreshMagicShaderEffects;        // 17C
		bool                                               bRefreshMagicShaderEffectBody;     // 17D
		bool                                               bRefreshMagicShaderEffectWeapon;   // 17E
		bool                                               bRefreshMagicShaderEffectLoading;  // 17F
		bool                                               bRefreshFlareFlags;                // 180
		std::uint8_t                                       pad181[0x3];                       // 181
		std::uint32_t                                      uiFlareFlags;                      // 184
		bool                                               bPickPocketed;                     // 188
		bool                                               bDoneClothesChange;                // 189
		bool                                               bDetectLifeDetected;               // 18A
		bool                                               bSummonedCreature;                 // 18B
		std::uint8_t                                       cUpdate3DModel;                    // 18C
		bool                                               bForceNextUpdate;                  // 18D
		std::uint16_t                                      pad18E;                            // 18E
		std::int32_t                                       iPackageIdleNumber;                // 190
		TESIdleForm*                                       pCurrentIdle;                      // 194
		float                                              fPackageIdleTimer;                 // 198
		bool                                               bPlayedBeginIdles;                 // 19C
		bool                                               bPlayedEndIdles;                   // 19D
		std::uint16_t                                      pad19E;                            // 19E
		LipSynchAnim*                                      pCreatureLipsynchAnim;             // 1A0
		std::uint32_t                                      iCreatureLipsynchStartTime;        // 1A4
		std::int32_t                                       iReservationSlot;                  // 1A8
		BSSimpleList<ArrowProjectile*>*                    pAttachedArrowList;                // 1AC
		BSSimpleList<MiddleHighProcess::DeferredHideLimb*> DeferredHideLimbList;              // 1B0
		BSSimpleList<ActiveEffect*>*                       pActiveEffectList;                 // 1B8
		MagicTarget*                                       pDesiredTarget;                    // 1BC
		Animation*                                         pAnimation;                        // 1C0
		BSAnimGroupSequence*                               pAimSequence[3];                   // 1C4
		float                                              fAimLooking;                       // 1D0
		float                                              fAutomaticShotDelay;               // 1D4
		std::uint8_t                                       cShotsToFire;                      // 1D8
		bool                                               bSustainedFire;                    // 1D9
		bool                                               bBeenAttacked;                     // 1DA
		std::uint8_t                                       pad1DB;                            // 1DB
		NiNode*                                            pDamageRootNode[15];               // 1DC
		NiAVObject*                                        pHeadNode;                         // 218
		NiAVObject*                                        pTorsoNode;                        // 21C
		NiPointer<BSShaderPPLightingProperty>              pLightingProperty;                 // 220
		BSBound*                                           pBSBound;                          // 224
		bool                                               bIronSights;                       // 228
		std::uint8_t                                       pad229;                            // 229
		std::int16_t                                       iAnimActionSuccess;                // 22A
		std::uint32_t                                      iMovementAnimations;               // 22C
		BSSimpleList<QueuedItem*>*                         pListItemstoEquipUnequip;          // 230
		float                                              fRadiationDelta;                   // 234
		float                                              fRadiationMagicDelta;              // 238
		float                                              fRadiationWaterDelta;              // 23C
		HitData*                                           pLastHitData;                      // 240
		std::int32_t                                       iWeaponConditionStage;             // 244
		BSFaceGenNiNode*                                   pFaceNode;                         // 248
		BSFaceGenNiNode*                                   pFaceNodeSkinned;                  // 24C
		NiAVObject*                                        pAnimFace;                         // 250
		HitData*                                           pLastAttackHitData;                // 254
		std::uint32_t                                      nFurnitureListTimer;               // 258
	};
	static_assert(sizeof(MiddleHighProcess) == 0x25C);
}
