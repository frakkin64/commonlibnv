#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AITaskManager.h"
#include "RE/B/BSSemaphore.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSpinLock.h"
#include "RE/L/LipSyncBackgroundManager.h"
#include "RE/M/MagicSystem_FlareType.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PLAYER_ACTION.h"
#include "RE/P/PROCESS_TYPE.h"
#include "RE/P/PTYPE.h"
#include "RE/P/PackageNS_CRIME_TYPE.h"
#include "RE/P/ProcessArray.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class BSTempEffect;
	class Crime;
	class DialoguePackage;
	class MobIterOperator;
	class MobileObject;
	class MuzzleFlash;
	class NiAVObject;
	class TESEffectShader;
	class TESFaction;
	class TESNPC;
	class TESObjectCELL;
	class TESObjectREFR;

	class ProcessLists
	{
	public:
		[[nodiscard]] static ProcessLists* GetSingleton() noexcept
		{
			static REL::Relocation<ProcessLists*> singleton{ Offsets::ProcessLists::Singleton };
			return singleton.get();
		}

		BSSimpleList<MobileObject*>* GetProjectilePostProcessList()
		{
			using func_t = decltype(&ProcessLists::GetProjectilePostProcessList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetProjectilePostProcessList };
			return func(this);
		}

		bool IsPlayerInRadiationArea()
		{
			using func_t = decltype(&ProcessLists::IsPlayerInRadiationArea);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::IsPlayerInRadiationArea };
			return func(this);
		}

		void UpdateLowList(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&ProcessLists::UpdateLowList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateLowList };
			func(this, a_arg1, a_arg2);
		}

		void UpdateMiddleLowList(float afDelta, bool abSleeping)
		{
			using func_t = decltype(&ProcessLists::UpdateMiddleLowList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateMiddleLowList };
			func(this, afDelta, abSleeping);
		}

		void UpdateMiddleHighList(float afDelta, bool abSleeping)
		{
			using func_t = decltype(&ProcessLists::UpdateMiddleHighList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateMiddleHighList };
			func(this, afDelta, abSleeping);
		}

		void IterateMobs(MobIterOperator& arIterOp)
		{
			using func_t = decltype(&ProcessLists::IterateMobs);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::IterateMobs };
			func(this, arIterOp);
		}

		std::uint32_t CountHighActors()
		{
			using func_t = decltype(&ProcessLists::CountHighActors);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::CountHighActors };
			return func(this);
		}

		void UpdateHighListPackages(float afDelta, bool abSleeping)
		{
			using func_t = decltype(&ProcessLists::UpdateHighListPackages);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateHighListPackages };
			func(this, afDelta, abSleeping);
		}

		void UpdateHighListImpacts(float afDelta)
		{
			using func_t = decltype(&ProcessLists::UpdateHighListImpacts);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateHighListImpacts };
			func(this, afDelta);
		}

		void RunDetectionForAllActors()
		{
			using func_t = decltype(&ProcessLists::RunDetectionForAllActors);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RunDetectionForAllActors };
			func(this);
		}

		void ReconcileDetectionDataForActor()
		{
			using func_t = decltype(&ProcessLists::ReconcileDetectionDataForActor);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ReconcileDetectionDataForActor };
			func(this);
		}

		void RunActorUpdates()
		{
			using func_t = decltype(&ProcessLists::RunActorUpdates);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RunActorUpdates };
			func(this);
		}

		void UpdateAnimationScenegraph()
		{
			using func_t = decltype(&ProcessLists::UpdateAnimationScenegraph);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateAnimationScenegraph };
			func(this);
		}

		void ParallelUpdateAnimationScenegraph()
		{
			using func_t = decltype(&ProcessLists::ParallelUpdateAnimationScenegraph);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ParallelUpdateAnimationScenegraph };
			func(this);
		}

		void RunActorRagdollAnimationUpdates()
		{
			using func_t = decltype(&ProcessLists::RunActorRagdollAnimationUpdates);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RunActorRagdollAnimationUpdates };
			func(this);
		}

		void RunActorAnimationUpdates()
		{
			using func_t = decltype(&ProcessLists::RunActorAnimationUpdates);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RunActorAnimationUpdates };
			func(this);
		}

		void ParallelActorAnimationMovementUpdates()
		{
			using func_t = decltype(&ProcessLists::ParallelActorAnimationMovementUpdates);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ParallelActorAnimationMovementUpdates };
			func(this);
		}

		void SkipHighListFadeIn()
		{
			using func_t = decltype(&ProcessLists::SkipHighListFadeIn);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::SkipHighListFadeIn };
			func(this);
		}

		ProcessLists* ctor()
		{
			using func_t = ProcessLists*(__thiscall*)(ProcessLists*);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(ProcessLists*);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::dtor };
			func(this);
		}

		void AddReference(MobileObject* apActor, PROCESS_TYPE aWhichList, bool aiWhere, bool abinsert, MobileObject* apInsertActor)
		{
			using func_t = decltype(&ProcessLists::AddReference);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::AddReference };
			func(this, apActor, aWhichList, aiWhere, abinsert, apInsertActor);
		}

		void RemoveReference(MobileObject* apActor, PROCESS_TYPE aWhichList)
		{
			using func_t = decltype(&ProcessLists::RemoveReference);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RemoveReference };
			func(this, apActor, aWhichList);
		}

		float GetSystemTimeClock()
		{
			using func_t = decltype(&ProcessLists::GetSystemTimeClock);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetSystemTimeClock };
			return func(this);
		}

		void SetSystemTimeClock(float afvalue)
		{
			using func_t = decltype(&ProcessLists::SetSystemTimeClock);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::SetSystemTimeClock };
			func(this, afvalue);
		}

		void UpdateProcessLists()
		{
			using func_t = decltype(&ProcessLists::UpdateProcessLists);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateProcessLists };
			func(this);
		}

		void UpdateActorsMovement(float afDelta, bool abSleeping, PROCESS_TYPE apLevel)
		{
			using func_t = decltype(&ProcessLists::UpdateActorsMovement);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateActorsMovement };
			func(this, afDelta, abSleeping, apLevel);
		}

		void ProcessHighActorsForFastTravel()
		{
			using func_t = decltype(&ProcessLists::ProcessHighActorsForFastTravel);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ProcessHighActorsForFastTravel };
			func(this);
		}

		void ChangeProcessLevel(BSSimpleList<TESObjectREFR*>* apList, bool abChangeLevel)
		{
			using func_t = decltype(&ProcessLists::ChangeProcessLevel);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ChangeProcessLevel };
			func(this, apList, abChangeLevel);
		}

		void CalculateAliveActorList()
		{
			using func_t = decltype(&ProcessLists::CalculateAliveActorList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::CalculateAliveActorList };
			func(this);
		}

		void InsertActorCloseToPlayer(Actor* apActor)
		{
			using func_t = decltype(&ProcessLists::InsertActorCloseToPlayer);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::InsertActorCloseToPlayer };
			func(this, apActor);
		}

		void SortActorsCloseToPlayer()
		{
			using func_t = decltype(&ProcessLists::SortActorsCloseToPlayer);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::SortActorsCloseToPlayer };
			func(this);
		}

		void RemoveActorCloseToPlayer(Actor* pactor)
		{
			using func_t = decltype(&ProcessLists::RemoveActorCloseToPlayer);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RemoveActorCloseToPlayer };
			func(this, pactor);
		}

		bool IsActorNCloseToPlayer(Actor* apActor, std::int32_t aiNumber)
		{
			using func_t = decltype(&ProcessLists::IsActorNCloseToPlayer);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::IsActorNCloseToPlayer };
			return func(this, apActor, aiNumber);
		}

		void AddActorToTempChangeList(MobileObject* apActor)
		{
			using func_t = decltype(&ProcessLists::AddActorToTempChangeList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::AddActorToTempChangeList };
			func(this, apActor);
		}

		void ChangeProcessLevelTempList()
		{
			using func_t = decltype(&ProcessLists::ChangeProcessLevelTempList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ChangeProcessLevelTempList };
			func(this);
		}

		void RemoveActorFromTempChangeList(MobileObject* apActor)
		{
			using func_t = decltype(&ProcessLists::RemoveActorFromTempChangeList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RemoveActorFromTempChangeList };
			func(this, apActor);
		}

		void NullOutTargetRef(TESObjectREFR* apRef, bool abDeleted)
		{
			using func_t = decltype(&ProcessLists::NullOutTargetRef);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::NullOutTargetRef };
			func(this, apRef, abDeleted);
		}

		Actor* GetActorRefInHigh(TESNPC* apNpc, bool abDetection)
		{
			using func_t = Actor* (ProcessLists::*)(TESNPC*, bool);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetActorRefInHigh };
			return func(this, apNpc, abDetection);
		}

		Actor* GetActorRefInHigh(TESFaction* apFaction, bool abDetection, bool abClosetoPlayer)
		{
			using func_t = Actor* (ProcessLists::*)(TESFaction*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetActorRefInHigh_1 };
			return func(this, apFaction, abDetection, abClosetoPlayer);
		}

		void InitPackageLocations()
		{
			using func_t = decltype(&ProcessLists::InitPackageLocations);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::InitPackageLocations };
			func(this);
		}

		static std::int32_t DistanceListCompareFn(TESObjectREFR* apCompare1, TESObjectREFR* apCompare2)
		{
			using func_t = decltype(&ProcessLists::DistanceListCompareFn);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::DistanceListCompareFn };
			return func(apCompare1, apCompare2);
		}

		BSSimpleList<TESObjectREFR*>* SendCrimetoHighList(Crime* apCrime)
		{
			using func_t = decltype(&ProcessLists::SendCrimetoHighList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::SendCrimetoHighList };
			return func(this, apCrime);
		}

		BSSimpleList<TESObjectREFR*>* SendActorsYellAlarm(Crime* apCrime, BSSimpleList<TESObjectREFR*>* apDoorList)
		{
			using func_t = decltype(&ProcessLists::SendActorsYellAlarm);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::SendActorsYellAlarm };
			return func(this, apCrime, apDoorList);
		}

		BSSimpleList<TESObjectREFR*>* SendResistArresttoGuards(Actor* apActor, BSSimpleList<TESObjectREFR*>* apDoorList)
		{
			using func_t = decltype(&ProcessLists::SendResistArresttoGuards);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::SendResistArresttoGuards };
			return func(this, apActor, apDoorList);
		}

		BSSimpleList<TESObjectREFR*>* GetActorsProcessCrimeAlarm(Crime* apCrime, bool bdelete)
		{
			using func_t = decltype(&ProcessLists::GetActorsProcessCrimeAlarm);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetActorsProcessCrimeAlarm };
			return func(this, apCrime, bdelete);
		}

		void TurnOffMovementinHigh()
		{
			using func_t = decltype(&ProcessLists::TurnOffMovementinHigh);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::TurnOffMovementinHigh };
			func(this);
		}

		BSSimpleList<TESObjectREFR*>* IsActorTargetingREFinPackage(TESObjectREFR* apActor, PTYPE apType, bool bOnlyHigh)
		{
			using func_t = decltype(&ProcessLists::IsActorTargetingREFinPackage);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::IsActorTargetingREFinPackage };
			return func(this, apActor, apType, bOnlyHigh);
		}

		std::uint16_t GetCrimeIndex(PackageNS_CRIME_TYPE aeType, Crime* apCrime)
		{
			using func_t = decltype(&ProcessLists::GetCrimeIndex);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetCrimeIndex };
			return func(this, aeType, apCrime);
		}

		Crime* GetCrimeByIndex(PackageNS_CRIME_TYPE aeType, std::uint16_t aiCrimeIndex)
		{
			using func_t = decltype(&ProcessLists::GetCrimeByIndex);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetCrimeByIndex };
			return func(this, aeType, aiCrimeIndex);
		}

		void StopCombatandAlarmonActor(Actor* apActor, bool bNotAlarm)
		{
			using func_t = decltype(&ProcessLists::StopCombatandAlarmonActor);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::StopCombatandAlarmonActor };
			func(this, apActor, bNotAlarm);
		}

		void AnimateDeadActors()
		{
			using func_t = decltype(&ProcessLists::AnimateDeadActors);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::AnimateDeadActors };
			func(this);
		}

		void PlaceActorsinBedsOrChairs()
		{
			using func_t = decltype(&ProcessLists::PlaceActorsinBedsOrChairs);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::PlaceActorsinBedsOrChairs };
			func(this);
		}

		bool IsActorDetected(Actor* apActor)
		{
			using func_t = decltype(&ProcessLists::IsActorDetected);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::IsActorDetected };
			return func(this, apActor);
		}

		void BuildFollowerListRecursive(Actor* apActor, BSSimpleList<Actor*>& aReturnList)
		{
			using func_t = decltype(&ProcessLists::BuildFollowerListRecursive);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::BuildFollowerListRecursive };
			func(this, apActor, aReturnList);
		}

		std::int32_t GetHighestDetectionLevelForActor(Actor* apActor, bool abIncludeFollowers)
		{
			using func_t = decltype(&ProcessLists::GetHighestDetectionLevelForActor);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::GetHighestDetectionLevelForActor };
			return func(this, apActor, abIncludeFollowers);
		}

		void RemoveActorInDetectionLists(Actor* apActor)
		{
			using func_t = decltype(&ProcessLists::RemoveActorInDetectionLists);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RemoveActorInDetectionLists };
			func(this, apActor);
		}

		bool IsActorTalkingThroughActivator(Actor* apAct)
		{
			using func_t = decltype(&ProcessLists::IsActorTalkingThroughActivator);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::IsActorTalkingThroughActivator };
			return func(this, apAct);
		}

		void MoveFollowersOnToPlayer()
		{
			using func_t = decltype(&ProcessLists::MoveFollowersOnToPlayer);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::MoveFollowersOnToPlayer };
			func(this);
		}

		void MoveActorsToReference(TESObjectREFR* apMarker)
		{
			using func_t = decltype(&ProcessLists::MoveActorsToReference);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::MoveActorsToReference };
			func(this, apMarker);
		}

		void AddTempEffect(BSTempEffect* apTempEffect)
		{
			using func_t = decltype(&ProcessLists::AddTempEffect);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::AddTempEffect };
			func(this, apTempEffect);
		}

		void RemoveTempEffectsForCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&ProcessLists::RemoveTempEffectsForCell);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RemoveTempEffectsForCell };
			func(this, apCell);
		}

		void RemoveParticleTempEffectsFor3D(NiAVObject* apFollow3D)
		{
			using func_t = decltype(&ProcessLists::RemoveParticleTempEffectsFor3D);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RemoveParticleTempEffectsFor3D };
			func(this, apFollow3D);
		}

		void UpdateTempEffects(float afDeltaTime)
		{
			using func_t = decltype(&ProcessLists::UpdateTempEffects);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateTempEffects };
			func(this, afDeltaTime);
		}

		void FinishMagicShaderHitEffect(TESObjectREFR* apEffectTarget, TESEffectShader* apShader)
		{
			using func_t = decltype(&ProcessLists::FinishMagicShaderHitEffect);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::FinishMagicShaderHitEffect };
			func(this, apEffectTarget, apShader);
		}

		bool FlareHitEffect(TESObjectREFR* apEffectTarget, MagicSystem_FlareType aeFlareType)
		{
			using func_t = decltype(&ProcessLists::FlareHitEffect);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::FlareHitEffect };
			return func(this, apEffectTarget, aeFlareType);
		}

		void StopAllActorsInDialog()
		{
			using func_t = decltype(&ProcessLists::StopAllActorsInDialog);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::StopAllActorsInDialog };
			func(this);
		}

		void KillAllProjectiles()
		{
			using func_t = decltype(&ProcessLists::KillAllProjectiles);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::KillAllProjectiles };
			func(this);
		}

		void SaveTempEffectsList()
		{
			using func_t = decltype(&ProcessLists::SaveTempEffectsList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::SaveTempEffectsList };
			func(this);
		}

		void RevertTempEffects(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&ProcessLists::RevertTempEffects);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RevertTempEffects };
			func(this, apLoadGameBuffer);
		}

		void Update3DAfterResting()
		{
			using func_t = decltype(&ProcessLists::Update3DAfterResting);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::Update3DAfterResting };
			func(this);
		}

		void InitActorLeveledItems()
		{
			using func_t = decltype(&ProcessLists::InitActorLeveledItems);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::InitActorLeveledItems };
			func(this);
		}

		void HandleInvalidPositions()
		{
			using func_t = decltype(&ProcessLists::HandleInvalidPositions);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::HandleInvalidPositions };
			func(this);
		}

		bool AreHostilActorsNear(bool abInterior)
		{
			using func_t = decltype(&ProcessLists::AreHostilActorsNear);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::AreHostilActorsNear };
			return func(this, abInterior);
		}

		void ReferDestructorNullOut(TESObjectREFR* apActor)
		{
			using func_t = decltype(&ProcessLists::ReferDestructorNullOut);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::ReferDestructorNullOut };
			func(this, apActor);
		}

		void DisableExcessDeadActors(float afDeltaTime)
		{
			using func_t = decltype(&ProcessLists::DisableExcessDeadActors);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::DisableExcessDeadActors };
			func(this, afDeltaTime);
		}

		void UnloadAllActorPermanentMagic()
		{
			using func_t = decltype(&ProcessLists::UnloadAllActorPermanentMagic);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UnloadAllActorPermanentMagic };
			func(this);
		}

		void RebuildActorsCloseToPlayer()
		{
			using func_t = decltype(&ProcessLists::RebuildActorsCloseToPlayer);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RebuildActorsCloseToPlayer };
			func(this);
		}

		void UpdateRadiationList()
		{
			using func_t = decltype(&ProcessLists::UpdateRadiationList);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateRadiationList };
			func(this);
		}

		void CommentOnPlayerAction(PLAYER_ACTION eaction, TESObjectREFR* apObject, bool abMakecomment)
		{
			using func_t = decltype(&ProcessLists::CommentOnPlayerAction);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::CommentOnPlayerAction };
			func(this, eaction, apObject, abMakecomment);
		}

		void UpdateNonRenderSafeStuff(float afDelta)
		{
			using func_t = decltype(&ProcessLists::UpdateNonRenderSafeStuff);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateNonRenderSafeStuff };
			func(this, afDelta);
		}

		void UpdateHighListAnimation(float afDelta, bool abSleeping)
		{
			using func_t = decltype(&ProcessLists::UpdateHighListAnimation);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::UpdateHighListAnimation };
			func(this, afDelta, abSleeping);
		}

		void RunActorMagicUpdates()
		{
			using func_t = decltype(&ProcessLists::RunActorMagicUpdates);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RunActorMagicUpdates };
			func(this);
		}

		void RunActorScripts()
		{
			using func_t = decltype(&ProcessLists::RunActorScripts);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RunActorScripts };
			func(this);
		}

		void RemoveDetectionEventsOnActors()
		{
			using func_t = decltype(&ProcessLists::RemoveDetectionEventsOnActors);
			static REL::Relocation<func_t> func{ Offsets::ProcessLists::RemoveDetectionEventsOnActors };
			func(this);
		}

	public:
		// members
		float                                 fSecondsPassedNoProcess;         // 00
		ProcessArray                          MobProcessArray;                 // 04
		BSSimpleList<Crime*>*                 GlobalCrimeListArray[5];         // 44
		BSSimpleList<NiPointer<BSTempEffect>> GlobalTempEffectList;            // 58
		BSSimpleList<NiPointer<BSTempEffect>> MagicEffectList;                 // 60
		BSSimpleList<MuzzleFlash*>            ReferenceMuzzleFlashList;        // 68
		BSSimpleList<MobileObject*>           ProjectilePostProcessList;       // 70
		BSSimpleList<TESObjectREFR*>          TempShouldMoveList;              // 78
		BSSimpleList<Actor*>                  AliveActorList;                  // 80
		Actor*                                pActorsCloseToPlayerA[50];       // 88
		std::int32_t                          iActorsCloseToPlayer;            // 150
		float                                 fPlayerActionCommentTimer;       // 154
		float                                 fPlayerKnockObjectCommentTimer;  // 158
		bool                                  bPlayerInRadiationArea;          // 15C
		bool                                  bPlayerInRadiatedWater;          // 15D
		std::uint16_t                         pad15E;                          // 15E
		AITaskManager                         TaskManagerAI;                   // 160
		BSSimpleList<DialoguePackage*>        DialogPackageList;               // 102E0
		BSSpinLock                            ActorsCloseToPlayerLock;         // 102E8
		BSSimpleList<MobileObject*>*          pPrevmoblist;                    // 102F0
		BSSimpleList<MobileObject*>*          pMoblist;                        // 102F4
		LipSyncBackgroundManager              LipBackgroundManager;            // 102F8
		bool                                  bRunScheduals;                   // 10314?
		bool                                  bRunDetection;                   // 10315?
		bool                                  bShowDetectionStats;             // 10316?
		std::uint8_t                          pad10317;                        // 10317
		Actor*                                pStatdetect;                     // 10318?
		bool                                  bProcessHigh;                    // 1031C?
		bool                                  bProcessLow;                     // 1031D?
		bool                                  bProcessMHigh;                   // 1031E?
		bool                                  bProcessMLow;                    // 1031F?
		std::uint8_t                          pad10320[0x8C];                  // 10320
		bool                                  bProcessSche;                    // 103AC
		bool                                  bShowSubtitle;                   // 103AD
		bool                                  bUpdatingLowList;                // 103AE
		std::uint8_t                          pad103AF;                        // 103AF
		std::int32_t                          iNumberHighActors;               // 103B0
		float                                 fCrimeUpdateTimer;               // 103B4
		std::int32_t                          iCrimeNumber;                    // 103B8
		float                                 fRemoveExcessDeadTimer;          // 103BC
		BSSemaphore                           MovementSyncSema;                // 103C0
	};
}
