#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTOR_AGGRESSION.h"
#include "RE/A/ACTOR_SOUND_HANDLE.h"
#include "RE/A/ANIMATION_ACTION.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/A/AnimIdle_PLAY_TYPE_ENUM.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BaseProcess_FADE_STATE.h"
#include "RE/B/BaseProcess_HEAD_TRACK_TYPE.h"
#include "RE/B/BaseProcess_POSTANIM_ACTION.h"
#include "RE/D/DETECTION_LEVEL.h"
#include "RE/D/DIALOGUE_EMOTION.h"
#include "RE/M/MiddleHighProcess.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"

namespace RE
{
	class Actor;
	class ActorPackageData;
	class ActorPathingMessageQueue;
	class ActorValueCache;
	class AnimIdle;
	class Animation;
	class AvoidAreaStruct;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BSAnimGroupSequence;
	class CombatGroup;
	class Crime;
	class DetectionEvent;
	class DetectionState;
	class DialogueItem;
	class DispositionParamData;
	class GuardActorPackageData;
	class HitData;
	class ItemChange;
	class KFModel;
	class LipSynchAnim;
	class MagicItem;
	class MobileObject;
	class MoveToFadeStruct;
	class MuzzleFlash;
	class NiAVObject;
	class NiBSBoneLODController;
	class NiBillboardNode;
	class NiNode;
	class PathingAvoidNodeArray;
	class PathingLocation;
	class PathingRequest;
	class SpellItem;
	class StartCombatStates;
	class TESActorBase;
	class TESBoundObject;
	class TESIdleForm;
	class TESObjectREFR;
	class TESObjectSTAT;
	class TESObjectWEAP;
	class TESPackage;
	class TESTopic;
	class WadingWaterData;
	class bhkSimpleShapePhantom;

	class HighProcess :
		public MiddleHighProcess  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HighProcess };
		static constexpr auto VTABLE{ VTABLE::HighProcess };

		// override (MiddleHighProcess)
		virtual ~HighProcess() = default;                                                                                                                                                                                                                                                              // 00
		virtual void Update(MobileObject* apRef, float fTimeDelta) override;                                                                                                                                                                                                                           // 03
		virtual void Update(MobileObject* apRef) override;                                                                                                                                                                                                                                             // 04
		virtual NiPoint3 GetLastPositionDetected(Actor* result, std::int32_t apActor) override;                                                                                                                                                                                                        // 07
		virtual float GetLastTimeDetected(Actor* apActor, std::int32_t abWhichList) override;                                                                                                                                                                                                          // 08
		virtual bool CheckforNewPackage(Actor* apActor, bool abFlag) override;                                                                                                                                                                                                                         // 09
		virtual bool SetupSpecialIdle(MobileObject* apMobile, TESIdleForm* apIdle, AnimIdle_PLAY_TYPE_ENUM aeType, bool abForce3d, bool abChooseNewOne, bool abTestConditions) override;                                                                                                               // 11
		virtual MagicItem* GetCurrentPackageSpell() override;                                                                                                                                                                                                                                          // 12
		virtual bool EvaluateDetection(Actor* apActor) override;                                                                                                                                                                                                                                       // 1A
		virtual void EvaluateCombatDetectionLists(Actor* apActor) override;                                                                                                                                                                                                                            // 1B
		virtual bool ShouldRunPlayerDetection(Actor* apActor) override;                                                                                                                                                                                                                                // 1C
		virtual bool ProcessActivateOneHour(Actor* apActor, float fDelta) override;                                                                                                                                                                                                                    // 1D
		virtual bool IsDoingSayTo() override;                                                                                                                                                                                                                                                          // 1E
		virtual void ProcessSandman(Actor* apActor) override;                                                                                                                                                                                                                                          // 1F
		virtual void ProcessCannibal(Actor* apActor) override;                                                                                                                                                                                                                                         // 20
		virtual void SetDoingSayTo(bool abFlag) override;                                                                                                                                                                                                                                              // 22
		virtual float GetCurrentDestinationRadius(Actor* apActor) override;                                                                                                                                                                                                                            // 2A
		virtual MobileObject* GetDialogTarget() override;                                                                                                                                                                                                                                              // 2B
		virtual bool ShouldUpdateCombatControllerOrEndCombat(Actor* apActor, TESPackage*& apRetPackage) override;                                                                                                                                                                                      // 2E
		virtual float GetSocialTalkTimer() override;                                                                                                                                                                                                                                                   // 2F
		virtual void SetSocialTalkTimer(float afTime) override;                                                                                                                                                                                                                                        // 30
		virtual void CreateFollowforEscort(Actor* apActor, TESPackage* apEscort, bool abCheck) override;                                                                                                                                                                                               // 33
		virtual bool GetDetectAlert() override;                                                                                                                                                                                                                                                        // 34
		virtual void SetDetectAlert(bool abflag) override;                                                                                                                                                                                                                                             // 35
		virtual void RandomlyPlaySpecialIdles(Actor* apActor) override;                                                                                                                                                                                                                                // 36
		virtual void PostAnimFreeUpSpecialIdle(Actor* apActor) override;                                                                                                                                                                                                                               // 37
		virtual void ResetSearchChatterTimer() override;                                                                                                                                                                                                                                               // 3B
		virtual DetectionState* InsertIntoDetectionList(Actor* apactor, DETECTION_LEVEL aedetect, bool abLineSight, std::int32_t aiLevel, std::int32_t abWhichList, bool ab360view, bool abcombat) override;                                                                                           // 3C
		virtual BSSimpleList<DetectionState*>* GetWhoDetectsMe(Actor* apActor) override;                                                                                                                                                                                                               // 3D
		virtual DetectionEvent* GetActorsDetectionEvent(Actor* apActor) override;                                                                                                                                                                                                                      // 3E
		virtual void SetActorsDetectionEvent(Actor* apActor, NiPoint3 aLocation, std::int32_t aiSoundLevel, std::int32_t aiDetectionEventType, TESObjectREFR* apRef) override;                                                                                                                         // 3F
		virtual void RemoveDetectionEvent() override;                                                                                                                                                                                                                                                  // 40
		virtual void CheckForExpiredDetectionEvent() override;                                                                                                                                                                                                                                         // 41
		virtual bool GetLipQuequed() override;                                                                                                                                                                                                                                                         // 54
		virtual void SetLipQuequed(bool abFlag) override;                                                                                                                                                                                                                                              // 55
		virtual void CreateFollownoEscort(Actor* apActor, bool abflag) override;                                                                                                                                                                                                                       // 77
		virtual float GetAwarePlayerTimer() override;                                                                                                                                                                                                                                                  // 78
		virtual void ModAwarePlayerTimer(float aftime) override;                                                                                                                                                                                                                                       // 79
		virtual void AddTalkedtoActor(Actor* apActor) override;                                                                                                                                                                                                                                        // 7C
		virtual bool ComputeCanInitiateDialogueWithNPC(Actor* __formal, Actor* __formal) override;                                                                                                                                                                                                     // 7D
		virtual bool ComputeCanRespondToDialogueFromNPC(Actor* __formal, Actor* __formal) override;                                                                                                                                                                                                    // 7E
		virtual bool IsActorInsideAmbushArea(Actor* apActor, Actor* apTarget) override;                                                                                                                                                                                                                // 7F
		virtual bool CheckIfThereSomeoneTalkWith(Actor* apActor) override;                                                                                                                                                                                                                             // 80
		virtual bool ComputeAllowSandboxConversation(Actor* apActor, Actor* apTalkToActor) override;                                                                                                                                                                                                   // 81
		virtual void AddToRunOnceProcedureIndex(std::int32_t aiOffset) override;                                                                                                                                                                                                                       // 89
		virtual DialogueItem* GetSubtitleItem() override;                                                                                                                                                                                                                                              // 91
		virtual void SetSubtitleItem(DialogueItem* apItem) override;                                                                                                                                                                                                                                   // 93
		virtual PathingAvoidNodeArray* CreateAvoidArray(Actor* apActor) override;                                                                                                                                                                                                                      // 95
		virtual bool IsAvoidAreaInAvoidPathingList(TESObjectREFR* apref) override;                                                                                                                                                                                                                     // 96
		virtual void SetAvoidWaitTimer(float aftime) override;                                                                                                                                                                                                                                         // 97
		virtual void RemoveAvoidPathingNode(TESObjectREFR* apRef) override;                                                                                                                                                                                                                            // 98
		virtual float GetHeadTrackChangeTimer() override;                                                                                                                                                                                                                                              // 99
		virtual void SetHeadTrackChangeTimer(float afTimer) override;                                                                                                                                                                                                                                  // 9A
		virtual ActorPackageData* GetRunOncePackageInstanceData() override;                                                                                                                                                                                                                            // 9B
		virtual void EndMoveMessage(Actor* apActor) override;                                                                                                                                                                                                                                          // A5
		virtual void ProcessFollow(Actor* apActor, bool abflag, std::int32_t emovemode, bool abpursuit) override;                                                                                                                                                                                      // A6
		virtual void ProcessFlee(Actor* apActor) override;                                                                                                                                                                                                                                             // A8
		virtual void ProcessGreet(Actor* apActor, TESTopic* aptopic, bool abForceSub, bool abStop, bool abQue, bool abSayCallBack) override;                                                                                                                                                           // A9
		virtual void ProcessObserveCombat(Actor* apActor) override;                                                                                                                                                                                                                                    // AA
		virtual bool ProcessGetUp(Actor* apActor) override;                                                                                                                                                                                                                                            // AF
		virtual WadingWaterData* GetWadingWaterData() override;                                                                                                                                                                                                                                        // B1
		virtual void RemoveDetectionActor(Actor* apActor, std::int32_t aiWhich) override;                                                                                                                                                                                                              // B2
		virtual void SetDetectionTimer(float aftimer) override;                                                                                                                                                                                                                                        // B3
		virtual bool GetLineSightonActor(Actor* apActor, Actor* apTarget, std::int32_t abWhichList, bool ab360) override;                                                                                                                                                                              // B4
		virtual bool Get360LineSightonActor(Actor* apActor, Actor* apTarget, std::int32_t abWhichList) override;                                                                                                                                                                                       // B5
		virtual std::int32_t GetDetectionActor(Actor* apActor, std::int32_t aiWhich) override;                                                                                                                                                                                                         // B6
		virtual bool GetTalkingtoPC() override;                                                                                                                                                                                                                                                        // B7
		virtual void SetTalkingtoPC(bool abflag) override;                                                                                                                                                                                                                                             // B8
		virtual void UpdateFollowers(Actor* apActor, float afDelta) override;                                                                                                                                                                                                                          // B9
		virtual DIALOGUE_EMOTION GetLastSpeakingEmotion() override;                                                                                                                                                                                                                                    // BB
		virtual void SetLastSpeakingEmotion(DIALOGUE_EMOTION aeEmotion) override;                                                                                                                                                                                                                      // BC
		virtual void RunDetection(Actor* apActor, float fnumber) override;                                                                                                                                                                                                                             // BD
		virtual float GetDetectionTimer() override;                                                                                                                                                                                                                                                    // BE
		virtual void SetBreathTimer(float afTimer) override;                                                                                                                                                                                                                                           // BF
		virtual float GetBreathTimer() override;                                                                                                                                                                                                                                                       // C0
		virtual bool GetGreetingFlag() override;                                                                                                                                                                                                                                                       // C3
		virtual void SetGreetingFlag(bool abFlag) override;                                                                                                                                                                                                                                            // C4
		virtual float GetSoundDelay() override;                                                                                                                                                                                                                                                        // C5
		virtual void SetSoundDelay(float afDelay) override;                                                                                                                                                                                                                                            // C6
		virtual bool GetFinishingCombatPackage() override;                                                                                                                                                                                                                                             // C9
		virtual void SetFinishingCombatPackage(bool abFlag) override;                                                                                                                                                                                                                                  // CA
		virtual ItemChange* CreateWeaponAcquireList(Actor* apActor, PACKAGE_OBJECT_TYPE aeType) override;                                                                                                                                                                                              // CB
		virtual void ClearAcquireList() override;                                                                                                                                                                                                                                                      // CC
		virtual float GetIdleTimer() override;                                                                                                                                                                                                                                                         // CD
		virtual void SetIdleTimer(float aftime) override;                                                                                                                                                                                                                                              // CE
		virtual bool EnterCombat(Actor* apActor, Actor* apTarget, bool abCheckForAmbush, bool absendalarm, CombatGroup* apGroup, bool abfleeing, bool abForceFlee, bool abAggressor, char acTeam, bool bforcecombat, bool bIgnoreDefensivePackage, bool abCastSpell, TESPackage* apPackage) override;  // CF
		virtual void GuardCallforHelp(Actor* apActor, Actor* apCriminal) override;                                                                                                                                                                                                                     // D0
		virtual void CallforHelp(Actor* apActor, Actor* pCriminal, Crime* pcrime) override;                                                                                                                                                                                                            // D1
		virtual void SetNumberGuardsArresting(std::int32_t ivalue) override;                                                                                                                                                                                                                           // D2
		virtual std::int32_t CalculateMoveMode(Actor* apActor, float distance, float afshortdist, float aflongdist, bool balarmcombat, bool abpuretravel) override;                                                                                                                                    // D3
		virtual void SetActorsAnimation(Actor* apActor, std::int32_t emovemode, bool abCheckAlwaysRun) override;                                                                                                                                                                                       // D4
		virtual void FinishDying(Actor* apActor) override;                                                                                                                                                                                                                                             // D5
		virtual bool ProcessStandOff(Actor* apActor, float afradius, std::int32_t emovemode) override;                                                                                                                                                                                                 // D6
		virtual bool GetWaitingforLipFile() override;                                                                                                                                                                                                                                                  // DB
		virtual void SetWaitingforLipFile(bool abflag) override;                                                                                                                                                                                                                                       // DC
		virtual void SetLipFileFailed(bool abflag) override;                                                                                                                                                                                                                                           // DD
		virtual bool GetLipFileFailed() override;                                                                                                                                                                                                                                                      // DE
		virtual LipSynchAnim* GetLipAnim() override;                                                                                                                                                                                                                                                   // DF
		virtual void SetLipAnim(LipSynchAnim* apAnim) override;                                                                                                                                                                                                                                        // E0
		virtual void SetPlantedExplosive(bool abFlag) override;                                                                                                                                                                                                                                        // E1
		virtual bool GetPlantedExplosive() override;                                                                                                                                                                                                                                                   // E2
		virtual void FreeUpSpecialIdle(Actor* apActor) override;                                                                                                                                                                                                                                       // E5
		virtual std::int32_t GetActorValue(TESActorBase* apActorBase, ActorValue_Index aiWhich, Actor* apActor) override;                                                                                                                                                                              // E6
		virtual float GetActorFloatValue(TESActorBase* apActorBase, ActorValue_Index aiWhich, Actor* apActor) override;                                                                                                                                                                                // E7
		virtual void TempModActorValue(Actor* apActor, ActorValue_Index aiWhich, float afValue) override;                                                                                                                                                                                              // E8
		virtual void TempModActorValue(Actor* apActor, ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                                                                                                                                       // E9
		virtual void DamageModActorValue(Actor* apActor, ActorValue_Index aiWhich, float afValue) override;                                                                                                                                                                                            // EA
		virtual void DamageModActorValue(Actor* apActor, ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                                                                                                                                     // EB
		virtual void SetCachedActorValueOutOfDate(ActorValue_Index aiWhich) override;                                                                                                                                                                                                                  // EC
		virtual void SetAnimAction(ANIMATION_ACTION aeAction, BSAnimGroupSequence* apAnimSeq) override;                                                                                                                                                                                                // FA
		virtual bool GetAutomaticFireAtLeastOnce() override;                                                                                                                                                                                                                                           // FB
		virtual void SetAutomaticFireAtLeastOnce(bool abVal) override;                                                                                                                                                                                                                                 // FD
		virtual bool CanAttack() override;                                                                                                                                                                                                                                                             // FE
		virtual bool CanForceGreet(Actor* apActor) override;                                                                                                                                                                                                                                           // FF
		virtual void AttackCallback(std::int32_t aiNumAttacks) override;                                                                                                                                                                                                                               // 112
		virtual void SaveWeaponLastPos(NiPoint3 aPos) override;                                                                                                                                                                                                                                        // 117
		virtual NiPoint3 const* GetWeaponLastPos() override;                                                                                                                                                                                                                                           // 118
		virtual void Update3dModel(Actor* apActor) override;                                                                                                                                                                                                                                           // 119
		virtual TESObjectREFR* GetLastGreeted() override;                                                                                                                                                                                                                                              // 121
		virtual void SetLastGreeted(TESObjectREFR* apRef) override;                                                                                                                                                                                                                                    // 122
		virtual BSSoundHandle GetSoundHandle(ACTOR_SOUND_HANDLE result) override;                                                                                                                                                                                                                      // 123
		virtual void SetSoundHandle(ACTOR_SOUND_HANDLE aeType, BSSoundHandle aSound) override;                                                                                                                                                                                                         // 124
		virtual void StopSoundHandle(ACTOR_SOUND_HANDLE aeType) override;                                                                                                                                                                                                                              // 125
		virtual void StartTorchSound(Actor* apActor) override;                                                                                                                                                                                                                                         // 126
		virtual bool GetMovementStoped() override;                                                                                                                                                                                                                                                     // 127
		virtual void SetDetectionModifier(float afvalue) override;                                                                                                                                                                                                                                     // 129
		virtual void SetDetectionModifierTimer() override;                                                                                                                                                                                                                                             // 12A
		virtual float GetDetectionModifier() override;                                                                                                                                                                                                                                                 // 12B
		virtual float GetGreetingTimer() override;                                                                                                                                                                                                                                                     // 12C
		virtual void SetGreetingTimer(float ftimer) override;                                                                                                                                                                                                                                          // 12D
		virtual bool IsTalking(MobileObject* apActor) override;                                                                                                                                                                                                                                        // 12E
		virtual void SetContinuingPackage(bool abflag) override;                                                                                                                                                                                                                                       // 138
		virtual DetectionState* GetDetectionState(Actor* apActor, std::int32_t abWhichList) override;                                                                                                                                                                                                  // 141
		virtual DetectionState* InsertIntoDetectionArray(Actor* apactor, DETECTION_LEVEL aedetect) override;                                                                                                                                                                                           // 142
		virtual float GetLightLevelTimer() override;                                                                                                                                                                                                                                                   // 143
		virtual TESObjectWEAP* GetLastBoundWeapon() override;                                                                                                                                                                                                                                          // 14D
		virtual void SetPackageEndTimerValue(float fTime) override;                                                                                                                                                                                                                                    // 14E
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                         // 152
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                                                                                           // 153
		virtual void SaveGame(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                                     // 154
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                           // 155
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags, MobileObject* pmob) override;                                                                                                                                                                                       // 156
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                       // 157
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags, MobileObject* pmob) override;                                                                                                                                                                                       // 158
		virtual void Revert(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                                       // 15A
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                     // 15B
		virtual void ChangePackage(Actor* apActor, TESPackage* apPack) override;                                                                                                                                                                                                                       // 166
		virtual void PackageDone(Actor* apActor, TESPackage* apPack) override;                                                                                                                                                                                                                         // 167
		virtual bool IsPackageDoneOnce() override;                                                                                                                                                                                                                                                     // 168
		virtual void UpdateWadingWater(Actor* apActor) override;                                                                                                                                                                                                                                       // 16F
		virtual std::int32_t GetNumberGuardsArresting() override;                                                                                                                                                                                                                                      // 170
		virtual BSSimpleList<SpellItem*>* GetLeveledSpells(Actor* apActor, bool abIncludeDiseases) override;                                                                                                                                                                                           // 174
		virtual void SetHasHealingSpells(std::int32_t aiHasHealingSpell) override;                                                                                                                                                                                                                     // 175
		virtual void SetHasHealingPotions(std::int32_t aiHasHealingPotion) override;                                                                                                                                                                                                                   // 176
		virtual std::int32_t GetHasHealingSpells() override;                                                                                                                                                                                                                                           // 177
		virtual void SetNeedTalkPlayer(bool abFlag) override;                                                                                                                                                                                                                                          // 17F
		virtual void SetForceNextUpdate(bool abForce) override;                                                                                                                                                                                                                                        // 180
		virtual BSSimpleList<Actor*>* GetAggroRadiusActorList() override;                                                                                                                                                                                                                              // 181
		virtual bool GetNeedTalkPlayer() override;                                                                                                                                                                                                                                                     // 184
		virtual void NotifyGuardAboutActivation(Actor* apActor, TESObjectREFR* apActionRef, TESObjectREFR* apActivated) override;                                                                                                                                                                      // 186
		virtual BaseProcess_FADE_STATE GetFadeState() override;                                                                                                                                                                                                                                        // 187
		virtual void AddPostAnimationAction(BaseProcess_POSTANIM_ACTION aeAction) override;                                                                                                                                                                                                            // 188
		virtual BaseProcess_POSTANIM_ACTION GetPostAnimationActions() override;                                                                                                                                                                                                                        // 189
		virtual void RemovePostAnimationAction(BaseProcess_POSTANIM_ACTION aeAction) override;                                                                                                                                                                                                         // 18A
		virtual void SetDefaultHeadTrackTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                         // 18B
		virtual void SetActionHeadTrackTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                          // 18C
		virtual void SetScriptHeadTrackTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                          // 18D
		virtual void SetCombatHeadTrackTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                          // 18E
		virtual void SetDialogHeadTrackTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                          // 18F
		virtual void SetUseWeaponHeadTrackTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                       // 190
		virtual void SetHeadTrackTarget(BaseProcess_HEAD_TRACK_TYPE aType, TESObjectREFR* apRef) override;                                                                                                                                                                                             // 191
		virtual void ClearActionHeadTrackTarget(bool abHold) override;                                                                                                                                                                                                                                 // 192
		virtual void ClearScriptHeadTrackTarget(bool abHold) override;                                                                                                                                                                                                                                 // 193
		virtual void ClearDialogHeadTrackTarget(bool abHold) override;                                                                                                                                                                                                                                 // 194
		virtual void ClearUseWeaponHeadTrackTarget(bool abHold) override;                                                                                                                                                                                                                              // 195
		virtual float GetDetectionModifierTimer() override;                                                                                                                                                                                                                                            // 196
		virtual void ClearAllHeadTrackTargets() override;                                                                                                                                                                                                                                              // 197
		virtual void RemoveHeadTrackTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                             // 198
		virtual bool CanSetDefaultHeadTrackTarget() override;                                                                                                                                                                                                                                          // 199
		virtual bool CanSetActionHeadTrackTarget() override;                                                                                                                                                                                                                                           // 19A
		virtual bool CanSetCombatHeadTrackTarget() override;                                                                                                                                                                                                                                           // 19B
		virtual TESObjectREFR* GetCurrentHeadTrackTarget(BaseProcess_HEAD_TRACK_TYPE aType) override;                                                                                                                                                                                                  // 19C
		virtual TESObjectREFR* GetCurrentHeadTrackTarget() override;                                                                                                                                                                                                                                   // 19D
		virtual BaseProcess_HEAD_TRACK_TYPE GetCurrentHeadTrackType() override;                                                                                                                                                                                                                        // 19E
		virtual char const* GetCurrentHeadTrackTypeString() override;                                                                                                                                                                                                                                  // 19F
		virtual void SetForceRotate(bool abForceRotate) override;                                                                                                                                                                                                                                      // 1A0
		virtual bool GetForceRotate() override;                                                                                                                                                                                                                                                        // 1A1
		virtual TESObjectREFR* GetLastHeadTrackTarget() override;                                                                                                                                                                                                                                      // 1A2
		virtual bool GetEnableMuzzleFlash() override;                                                                                                                                                                                                                                                  // 1AD
		virtual NiAVObject* GetHeadNode() override;                                                                                                                                                                                                                                                    // 1B1
		virtual void UpdateRadiation(Actor* apActor, float afDelta) override;                                                                                                                                                                                                                          // 1BD
		virtual void TryReserveProjectileClones(Actor* apActor) override;                                                                                                                                                                                                                              // 1BE
		virtual void SetAnimActionSuccess(std::int32_t aivalue) override;                                                                                                                                                                                                                              // 1C0
		virtual void LoadPackageFromExtraData(MobileObject* apMob) override;                                                                                                                                                                                                                           // 1C3
		virtual void SetCurrentProcessAnimIdleLoaded(AnimIdle* apAnimIdle, KFModel* apAnimIdleKF) override;                                                                                                                                                                                            // 1C6
		virtual KFModel* GetCurrentProcessAnimIdleKF() override;                                                                                                                                                                                                                                       // 1C8
		virtual void ModTrackedDamage(Actor* apAggressor, float afAmount) override;                                                                                                                                                                                                                    // 1C9
		virtual void SetActorLightLevel(float aflight) override;                                                                                                                                                                                                                                       // 1CC
		virtual void DeferHideDismemberedLimb(BGSBodyPart_LIMB_ENUM aeLimbIndex, NiNode* apDismemberedLimbRoot, NiAVObject* apReplacementLimb, bool abExplosion) override;                                                                                                                             // 1CD
		virtual HitData* GetLastHitData() override;                                                                                                                                                                                                                                                    // 1DB
		virtual void SetPathLookAtTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                               // 1EB
		virtual void ClearPathLookTarget(TESObjectREFR* apRef) override;                                                                                                                                                                                                                               // 1EC
		virtual void ProcessEscort(Actor* apActor) override;                                                                                                                                                                                                                                           // 1ED
		virtual void ProcessSleep(Actor* apActor) override;                                                                                                                                                                                                                                            // 1EE
		virtual void ProcessEat(Actor* apActor, TESObjectREFR* apLocRef) override;                                                                                                                                                                                                                     // 1EF
		virtual void ProcessAlarm(Actor* apActor) override;                                                                                                                                                                                                                                            // 1F1
		virtual bool ProcessActivate(Actor* apActor, bool abInterateindex) override;                                                                                                                                                                                                                   // 1F2
		virtual void ProcessAccompany(Actor* apActor) override;                                                                                                                                                                                                                                        // 1F3
		virtual void ProcessAcquire(Actor* apActor) override;                                                                                                                                                                                                                                          // 1F4
		virtual void ProcessAmbushWait(Actor* apActor) override;                                                                                                                                                                                                                                       // 1F5
		virtual bool ProcessUseItemAt(Actor* apActor) override;                                                                                                                                                                                                                                        // 1F6
		virtual bool ProcessUseWeapon(Actor* apActor) override;                                                                                                                                                                                                                                        // 1F7
		virtual void ProcessFleeNonCombat(Actor* apActor) override;                                                                                                                                                                                                                                    // 1F9
		virtual void ProcessAvoidArea(Actor* apActor) override;                                                                                                                                                                                                                                        // 1FA
		virtual void ProcessGuard(Actor* apActor) override;                                                                                                                                                                                                                                            // 1FD
		virtual void ProcessSummonCreatureDefend(Actor* apActor) override;                                                                                                                                                                                                                             // 200
		virtual void ProcessNotify(Actor* apActor) override;                                                                                                                                                                                                                                           // 202
		virtual bool CheckIfHasObject(Actor* apActor, std::int32_t ainumb) override;                                                                                                                                                                                                                   // 203
		virtual void EvaluateOrderAcquireList(Actor* apActor) override;                                                                                                                                                                                                                                // 206
		virtual void SetAnimation(Animation* apAnim) override;                                                                                                                                                                                                                                         // 208
		virtual void SetAnimationActiveFlag(bool abflag) override;                                                                                                                                                                                                                                     // 20A
		virtual void ProcessBuyObject(Actor* apActor) override;                                                                                                                                                                                                                                        // 20C
		virtual void ProcessSteal(Actor* apActor) override;                                                                                                                                                                                                                                            // 20D
		virtual void ProcessPickPocket(Actor* apActor) override;                                                                                                                                                                                                                                       // 20E
		virtual void ProcessDialogue(MobileObject* apActor) override;                                                                                                                                                                                                                                  // 20F
		virtual bool ProcessDialogueActivate(Actor* apActor) override;                                                                                                                                                                                                                                 // 210
		virtual void ProcessWander(Actor* apActor, NiPoint3 const* apCenter, float afRadius) override;                                                                                                                                                                                                 // 213
		virtual bool ProcessSandBoxDialogue(Actor* apActor, TESObjectREFR* aptalkTarget) override;                                                                                                                                                                                                     // 214
		virtual void ProcessUseIdleMarker(Actor* apActor, TESObjectREFR* apRef) override;                                                                                                                                                                                                              // 21A

		// add
		virtual BSSimpleList<Actor*>* GetAvoidActorList();  // 21C

		void SetSkippedLastUpdate(bool abVal)
		{
			using func_t = decltype(&HighProcess::SetSkippedLastUpdate);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::SetSkippedLastUpdate };
			func(this, abVal);
		}

		HighProcess* ctor()
		{
			using func_t = HighProcess*(__thiscall*)(HighProcess*);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ctor };
			return func(this);
		}

		void InitBoneLOD(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::InitBoneLOD);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::InitBoneLOD };
			func(this, apActor);
		}

		static NiPoint3 ComputeRandomPoint(NiPoint3 result, float aStartPoint, float afMaxRadius, bool a_arg4)
		{
			using func_t = decltype(&HighProcess::ComputeRandomPoint);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ComputeRandomPoint };
			return func(result, aStartPoint, afMaxRadius, a_arg4);
		}

		static bool FindDoorsToSendYellAlarm(TESObjectREFR* apRef, std::int32_t aiFilterData)
		{
			using func_t = decltype(&HighProcess::FindDoorsToSendYellAlarm);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FindDoorsToSendYellAlarm };
			return func(apRef, aiFilterData);
		}

		void SetupPhantom(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::SetupPhantom);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::SetupPhantom };
			func(this, apActor);
		}

		void DetectDoorsForPathing(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::DetectDoorsForPathing);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::DetectDoorsForPathing };
			func(this, apActor);
		}

		void ReconcileDetectionData(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ReconcileDetectionData);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ReconcileDetectionData };
			func(this, apActor);
		}

		void FadeIn(Actor* apActor, bool abTeleport)
		{
			using func_t = decltype(&HighProcess::FadeIn);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FadeIn };
			func(this, apActor, abTeleport);
		}

		void FadeOutAndMove(Actor* apActor, TESObjectREFR* apRef, float x, float y, float z)
		{
			using func_t = decltype(&HighProcess::FadeOutAndMove);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FadeOutAndMove };
			func(this, apActor, apRef, x, y, z);
		}

		void FadeAndDelete(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::FadeAndDelete);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FadeAndDelete };
			func(this, apActor);
		}

		void FadeAndDisable(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::FadeAndDisable);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FadeAndDisable };
			func(this, apActor);
		}

		bool FadeUpdate(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::FadeUpdate);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FadeUpdate };
			return func(this, apActor);
		}

		void SkipFadeIn(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::SkipFadeIn);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::SkipFadeIn };
			func(this, apActor);
		}

		bool FindSpecialIdletoPlay(Actor* apActor, TESBoundObject* apObject, TESObjectREFR* apRef)
		{
			using func_t = decltype(&HighProcess::FindSpecialIdletoPlay);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FindSpecialIdletoPlay };
			return func(this, apActor, apObject, apRef);
		}

		bool ReactToCombatSituation(Actor* apActor, Actor* pactor)
		{
			using func_t = decltype(&HighProcess::ReactToCombatSituation);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ReactToCombatSituation };
			return func(this, apActor, pactor);
		}

		void OnNewHeadTrackTarget()
		{
			using func_t = decltype(&HighProcess::OnNewHeadTrackTarget);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::OnNewHeadTrackTarget };
			func(this);
		}

		void UpdateHeadTrackTargets()
		{
			using func_t = decltype(&HighProcess::UpdateHeadTrackTargets);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::UpdateHeadTrackTargets };
			func(this);
		}

		void FireAtObject(Actor* apActor, TESObjectWEAP* apWeapon)
		{
			using func_t = decltype(&HighProcess::FireAtObject);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::FireAtObject };
			func(this, apActor, apWeapon);
		}

		void AddAvoidPathingArea(Actor* apActor, NiPoint3 aPoint, float afRadius, float a_arg4, float a_arg5, TESObjectREFR* afTimeToExpire, TESObjectSTAT* afRadiationLevel)
		{
			using func_t = decltype(&HighProcess::AddAvoidPathingArea);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::AddAvoidPathingArea };
			func(this, apActor, aPoint, afRadius, a_arg4, a_arg5, afTimeToExpire, afRadiationLevel);
		}

	protected:
		void ProcessWarning(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessWarning);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessWarning };
			func(this, apActor);
		}

		void ProcessCreateFollow(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessCreateFollow);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessCreateFollow };
			func(this, apActor);
		}

		void ProcessAlertBehavior(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessAlertBehavior);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessAlertBehavior };
			func(this, apActor);
		}

		void ProcessSearchforTarget(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessSearchforTarget);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessSearchforTarget };
			func(this, apActor);
		}

		void ProcessSurface(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessSurface);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessSurface };
			func(this, apActor);
		}

		void EvaluateBoneLod(MobileObject* apRef)
		{
			using func_t = decltype(&HighProcess::EvaluateBoneLod);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::EvaluateBoneLod };
			func(this, apRef);
		}

		void ProcessBackUp(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessBackUp);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessBackUp };
			func(this, apActor);
		}

		void ProcessSurfaceOneHour(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessSurfaceOneHour);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessSurfaceOneHour };
			func(this, apActor);
		}

		void ProcessTakeBackItem(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::ProcessTakeBackItem);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessTakeBackItem };
			func(this, apActor);
		}

		bool ProcessEscortOneHour(Actor* apActor, float afTimeDelta)
		{
			using func_t = decltype(&HighProcess::ProcessEscortOneHour);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessEscortOneHour };
			return func(this, apActor, afTimeDelta);
		}

		bool ProcessFollowOneHour(Actor* apActor, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&HighProcess::ProcessFollowOneHour);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessFollowOneHour };
			return func(this, apActor, a_arg2, a_arg3);
		}

		bool ProcessWanderOneHour(Actor* apActor, float afTimeDelta)
		{
			using func_t = decltype(&HighProcess::ProcessWanderOneHour);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessWanderOneHour };
			return func(this, apActor, afTimeDelta);
		}

		bool AimAtTarget(Actor* apActor, TESObjectREFR* apTarget, bool abHighArc)
		{
			using func_t = decltype(&HighProcess::AimAtTarget);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::AimAtTarget };
			return func(this, apActor, apTarget, abHighArc);
		}

		void DetectActor(TESObjectREFR* pref, Actor* apActor, bool& bspectatorstart, DispositionParamData* pdispdata, ACTOR_AGGRESSION aeAggressionvalue, float afConfidence, float afCombatStrength)
		{
			using func_t = decltype(&HighProcess::DetectActor);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::DetectActor };
			func(this, pref, apActor, bspectatorstart, pdispdata, aeAggressionvalue, afConfidence, afCombatStrength);
		}

		bool CheckTargetCombatDetectionState(Actor* apActor, Actor* apTarget)
		{
			using func_t = decltype(&HighProcess::CheckTargetCombatDetectionState);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::CheckTargetCombatDetectionState };
			return func(this, apActor, apTarget);
		}

		bool ShouldRunCombatDetection(Actor* apActor, Actor* apTarget)
		{
			using func_t = decltype(&HighProcess::ShouldRunCombatDetection);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ShouldRunCombatDetection };
			return func(this, apActor, apTarget);
		}

		void SayGoodBye(Actor* apActor)
		{
			using func_t = decltype(&HighProcess::SayGoodBye);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::SayGoodBye };
			func(this, apActor);
		}

		void ProcessGuardInit(Actor* apActor, GuardActorPackageData* apData)
		{
			using func_t = decltype(&HighProcess::ProcessGuardInit);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessGuardInit };
			func(this, apActor, apData);
		}

		void ProcessGuardIdle(Actor* apActor, GuardActorPackageData* apData, bool abAtLoc)
		{
			using func_t = decltype(&HighProcess::ProcessGuardIdle);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessGuardIdle };
			func(this, apActor, apData, abAtLoc);
		}

		void ProcessGuardWarn(Actor* apActor, GuardActorPackageData* apData)
		{
			using func_t = decltype(&HighProcess::ProcessGuardWarn);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessGuardWarn };
			func(this, apActor, apData);
		}

		void ProcessGuardWaitToAttack(Actor* apActor, GuardActorPackageData* apData)
		{
			using func_t = decltype(&HighProcess::ProcessGuardWaitToAttack);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ProcessGuardWaitToAttack };
			func(this, apActor, apData);
		}

	private:
		bool ShouldWaitForEscortTarget(Actor* apActor, Actor* apEscortedActor, PathingLocation& goalLoc, bool* abSlowDownOut)
		{
			using func_t = decltype(&HighProcess::ShouldWaitForEscortTarget);
			static REL::Relocation<func_t> func{ Offsets::HighProcess::ShouldWaitForEscortTarget };
			return func(this, apActor, apEscortedActor, goalLoc, abSlowDownOut);
		}

	public:
		// members
		BSSimpleList<DetectionState*>*      pDetectedActorList;              // 25C
		BSSimpleList<DetectionState*>*      pActorsWhoDetectMeList;          // 260
		BSSimpleList<Actor*>*               pLastSpokeToList;                // 264
		BSSimpleList<DetectionState*>*      pThreadDetectList;               // 268
		BSSimpleList<DetectionState*>*      pTempActorsWhoDetectMeList;      // 26C
		bool                                bEvaluateDetection;              // 270
		std::uint8_t                        pad271[0x3];                     // 271
		BSSimpleList<StartCombatStates*>    AggroList;                       // 274
		BSSimpleList<StartCombatStates*>    GroupsToHelpList;                // 27C
		BSSimpleList<StartCombatStates*>    TargetToAddList;                 // 284
		BSSimpleList<StartCombatStates*>    SpectatorList;                   // 28C
		float                               fDetectListTimer;                // 294
		float                               fIdleChatterTimer;               // 298
		bool                                bSayGoodByePlayer;               // 29C
		bool                                bProcessGreetSayTo;              // 29D
		std::uint16_t                       pad29E;                          // 29E
		float                               fClearTalkToListTimer;           // 2A0
		TESObjectREFR*                      plastDetected;                   // 2A4
		float                               fTalkTimer;                      // 2A8
		TESObjectREFR*                      pPathLookAtTarget;               // 2AC
		float                               fMaxAlpha;                       // 2B0
		float                               fPackageEvalTimer;               // 2B4
		float                               fUseItemTimer;                   // 2B8
		float                               fHoldAttackTimer;                // 2BC
		std::int16_t                        sShotsFired;                     // 2C0
		std::int16_t                        sShotsToFire;                    // 2C2
		std::int16_t                        sBurstsFired;                    // 2C4
		bool                                bCheckDeadTalk;                  // 2C6
		bool                                bSkippedUpdate;                  // 2C7
		float                               fCheckToTalkTimer;               // 2C8
		NiNode*                             pNode;                           // 2CC
		float                               fDelayTimer;                     // 2D0
		float                               fDistanceMoved;                  // 2D4
		float                               fTurnTime;                       // 2D8
		char                                cLastTurnDir;                    // 2DC
		std::uint8_t                        pad2DD[0x3];                     // 2DD
		float                               fEvaluateAcquireTimer;           // 2E0
		NiBSBoneLODController*              pBoneLOD;                        // 2E4
		std::int32_t                        iLastBoneLOD;                    // 2E8
		std::int16_t                        sAnimAction;                     // 2EC
		std::uint16_t                       pad2EE;                          // 2EE
		BSAnimGroupSequence*                pAnimSeq;                        // 2F0
		bool                                bAutomaticFireAtLeastOne;        // 2F4
		std::uint8_t                        pad2F5[0x3];                     // 2F5
		float                               fDetectionTimer;                 // 2F8
		std::int16_t                        iLastDetection;                  // 2FC
		std::uint16_t                       pad2FE;                          // 2FE
		NiPoint3                            WeaponLastPos;                   // 300
		TESObjectREFR*                      pGreetActor;                     // 30C
		float                               fSoundDelay;                     // 310
		BSSoundHandle                       SoundHandle[2];                  // 314
		bool                                bGreetingFlag;                   // 32C
		std::uint8_t                        pad32D[0x3];                     // 32D
		float                               fGreetingTimer;                  // 330
		float                               fIdleTimer;                      // 334
		float                               fDetectGreetTimer;               // 338
		float                               fBreathTimer;                    // 33C
		bool                                bHeadTrack;                      // 340
		std::uint8_t                        pad341[0x3];                     // 341
		float                               fVoiceTimer;                     // 344
		bool                                bLipQuequed;                     // 348
		bool                                bWeaponAlertDrawn;               // 349
		std::uint16_t                       pad34A;                          // 34A
		float                               fAwarePlayerTimer;               // 34C
		TESIdleForm*                        pIdleToPlay;                     // 350
		NiPointer<AnimIdle>                 spAnimIdleToPlay[2];             // 354
		NiPointer<KFModel>                  spAnimIdleKF[2];                 // 35C
		bool                                bDialoguewithPlayer;             // 364
		std::uint8_t                        pad365[0x3];                     // 365
		DialogueItem*                       pGreetTopic;                     // 368
		DIALOGUE_EMOTION                    eLastSpeakingEmotion;            // 36C
		MobileObject*                       pDialogTarget;                   // 370
		bool                                bContinuingPackageforPC;         // 374
		bool                                bActivateAnim;                   // 375
		std::uint16_t                       pad376;                          // 376
		float                               fScriptPackageEndTime;           // 378
		float                               fHealthBarAlphaValue;            // 37C
		NiPointer<NiBillboardNode>          spHealthBarNode;                 // 380
		float                               fActorHealthPercentage;          // 384
		float                               fHealthBarEmittanceValue;        // 388
		BSSimpleList<Actor*>                AggroRadiusList;                 // 38C
		BSSimpleList<Actor*>                AvoidActorList;                  // 394
		std::int32_t                        iNumberGuardsPersuing;           // 39C
		bool                                bStop;                           // 3A0
		std::uint8_t                        pad3A1[0x3];                     // 3A1
		float                               fReEquipArmorTimer;              // 3A4
		bool                                bUnequippedArmorToSwim;          // 3A8
		std::uint8_t                        pad3A9[0x3];                     // 3A9
		std::int32_t                        iHasHealingSpell;                // 3AC
		std::int32_t                        iHasHealingPotion;               // 3B0
		BSSimpleList<SpellItem*>*           pLeveledSpellList;               // 3B4
		char                                cLastTurn;                       // 3B8
		bool                                bCurrentlyReanimating;           // 3B9
		std::uint16_t                       pad3BA;                          // 3BA
		float                               fDetectionModifer;               // 3BC
		float                               fDetectionModifierTimer;         // 3C0
		float                               fLightLevel;                     // 3C4
		float                               fLightLevelTimer;                // 3C8
		LipSynchAnim*                       pLipSynicAnim;                   // 3CC
		bool                                bWaitingForLipFile;              // 3D0
		bool                                bLipFileFailed;                  // 3D1
		std::uint16_t                       pad3D2;                          // 3D2
		MuzzleFlash*                        pCurrentMuzzleFlash;             // 3D4
		std::uint32_t                       iDetectionCounter;               // 3D8
		DetectionEvent*                     pActorsGeneratedDetectionEvent;  // 3DC
		bool                                bFinishingCombatPackage;         // 3E0
		std::uint8_t                        pad3E1[0x3];                     // 3E1
		DialogueItem*                       m_pSayToDialogueTopic;           // 3E4
		BaseProcess_FADE_STATE              eFadeState;                      // 3E8
		float                               fFadeAlpha;                      // 3EC
		TESObjectREFR*                      pTeleportFadeRef;                // 3F0
		MoveToFadeStruct*                   pMoveToFadeStruct;               // 3F4
		TESObjectREFR*                      HeadTrackingTargets[6];          // 3F8
		bool                                HeadTrackingTargetFlags[6];      // 410
		std::uint16_t                       pad416;                          // 416
		float                               fHeadTrackTargetTimer;           // 418
		TESObjectREFR*                      pLastTarget;                     // 41C
		bool                                bForceRotate;                    // 420
		std::uint8_t                        pad421[0x3];                     // 421
		BaseProcess_POSTANIM_ACTION         ePostAnimActon;                  // 424
		ActorValueCache*                    pActorValueCache;                // 428
		float                               fCachedActorHeight;              // 42C
		AnimIdle_PLAY_TYPE_ENUM             eSpecialIdleType;                // 430
		NiPointer<bhkSimpleShapePhantom>    spShapePhantom;                  // 434
		float                               fDetectDoorForPathingTimer;      // 438
		float                               fRadiationTimer;                 // 43C
		float                               fHighestRadiation;               // 440
		bool                                bPlantedExplosive;               // 444
		bool                                bNeedTalkPlayer;                 // 445
		std::uint16_t                       pad446;                          // 446
		float                               fTakeBackTimer;                  // 448
		BSSimpleList<AvoidAreaStruct*>*     pListOfAvoidAreas;               // 44C
		float                               fAvoidWaitTimer;                 // 450
		DialogueItem*                       pSubtitleVoice;                  // 454
		bool                                bHiding;                         // 458
		bool                                bIsDoingSayTo;                   // 459
		std::uint16_t                       pad45A;                          // 45A
		NiPointer<PathingRequest>           spMeToGoalRequest;               // 45C
		NiPointer<PathingRequest>           spEscortedToGoalRequest;         // 460
		NiPointer<ActorPathingMessageQueue> spMeToGoalMessageQueue;          // 464
		NiPointer<ActorPathingMessageQueue> spEscortedToGoalMessageQueue;    // 468
	};
	static_assert(sizeof(HighProcess) == 0x46C);
}
