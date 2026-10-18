#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTION_FLAGS.h"
#include "RE/A/ANIM_GROUP_ACTION.h"
#include "RE/A/ANIM_GROUP_SECTION.h"
#include "RE/A/AnimIdle_PLAY_TYPE_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class Actor;
	class AnimIdle;
	class AnimSequenceBase;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BSAnimGroupSequence;
	class IDLE_REPLAY_DELAY;
	class KFModel;
	class NiAVObject;
	class NiControllerManager;
	class NiControllerSequence;
	class NiNode;
	class TESAnimGroup;
	class TESIdleForm;
	class TESObjectREFR;

	class Animation
	{
	public:
		std::uint16_t GetGroup(ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&Animation::GetGroup);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetGroup };
			return func(this, aeSection);
		}

		float GetTime()
		{
			using func_t = float (Animation::*)();
			static REL::Relocation<func_t> func{ Offsets::Animation::GetTime };
			return func(this);
		}

		Animation* ctor()
		{
			using func_t = Animation*(__thiscall*)(Animation*);
			static REL::Relocation<func_t> func{ Offsets::Animation::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(Animation*);
			static REL::Relocation<func_t> func{ Offsets::Animation::dtor };
			func(this);
		}

		void ShutdownAllAnimIdles()
		{
			using func_t = decltype(&Animation::ShutdownAllAnimIdles);
			static REL::Relocation<func_t> func{ Offsets::Animation::ShutdownAllAnimIdles };
			func(this);
		}

		bool Init(BSSimpleList<char const*>* apFileList, NiNode* apRoot, TESObjectREFR* apRef, bool abUpdate3D)
		{
			using func_t = decltype(&Animation::Init);
			static REL::Relocation<func_t> func{ Offsets::Animation::Init };
			return func(this, apFileList, apRoot, apRef, abUpdate3D);
		}

		void AddSpecialAnimations(BSSimpleList<char const*>* apFileList, char const* apPath)
		{
			using func_t = decltype(&Animation::AddSpecialAnimations);
			static REL::Relocation<func_t> func{ Offsets::Animation::AddSpecialAnimations };
			func(this, apFileList, apPath);
		}

		void AddAnimationsFromList(BSSimpleList<char const*>* apFileList)
		{
			using func_t = decltype(&Animation::AddAnimationsFromList);
			static REL::Relocation<func_t> func{ Offsets::Animation::AddAnimationsFromList };
			func(this, apFileList);
		}

		bool AddAnimation(KFModel* apKFModel, bool abDelaySequenceClone)
		{
			using func_t = decltype(&Animation::AddAnimation);
			static REL::Relocation<func_t> func{ Offsets::Animation::AddAnimation };
			return func(this, apKFModel, abDelaySequenceClone);
		}

		bool ShouldQueueSequenceCloning()
		{
			using func_t = decltype(&Animation::ShouldQueueSequenceCloning);
			static REL::Relocation<func_t> func{ Offsets::Animation::ShouldQueueSequenceCloning };
			return func(this);
		}

		BSAnimGroupSequence* GetCurrentSequence(ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&Animation::GetCurrentSequence);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetCurrentSequence };
			return func(this, aeSection);
		}

		static float GetDuration(NiControllerSequence* apSeq)
		{
			using func_t = decltype(&Animation::GetDuration);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetDuration };
			return func(apSeq);
		}

		static bool FindSkinnedNode(NiAVObject* apAVObject)
		{
			using func_t = decltype(&Animation::FindSkinnedNode);
			static REL::Relocation<func_t> func{ Offsets::Animation::FindSkinnedNode };
			return func(apAVObject);
		}

		void Update(TESObjectREFR* ownerObject, float fSecondsPassed, float forceTime)
		{
			using func_t = decltype(&Animation::Update);
			static REL::Relocation<func_t> func{ Offsets::Animation::Update };
			func(this, ownerObject, fSecondsPassed, forceTime);
		}

		float GetTime(NiControllerSequence* apSequence)
		{
			using func_t = float (Animation::*)(NiControllerSequence*);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetTime_1 };
			return func(this, apSequence);
		}

		bool GetAnimsLoading()
		{
			using func_t = decltype(&Animation::GetAnimsLoading);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetAnimsLoading };
			return func(this);
		}

		void UpdateMovement(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Animation::UpdateMovement);
			static REL::Relocation<func_t> func{ Offsets::Animation::UpdateMovement };
			func(this, apRef);
		}

		bool UpdateQueuedScenegraph()
		{
			using func_t = decltype(&Animation::UpdateQueuedScenegraph);
			static REL::Relocation<func_t> func{ Offsets::Animation::UpdateQueuedScenegraph };
			return func(this);
		}

		void UpdateMovementNoWorldUpdate(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Animation::UpdateMovementNoWorldUpdate);
			static REL::Relocation<func_t> func{ Offsets::Animation::UpdateMovementNoWorldUpdate };
			func(this, apRef);
		}

		void UpdateSceneGraphNoController()
		{
			using func_t = decltype(&Animation::UpdateSceneGraphNoController);
			static REL::Relocation<func_t> func{ Offsets::Animation::UpdateSceneGraphNoController };
			func(this);
		}

		void InitGroupSpeed(TESAnimGroup* apAnimGroup)
		{
			using func_t = decltype(&Animation::InitGroupSpeed);
			static REL::Relocation<func_t> func{ Offsets::Animation::InitGroupSpeed };
			func(this, apAnimGroup);
		}

		std::int16_t GetGroupSpeed(std::uint16_t asAnimGroup)
		{
			using func_t = decltype(&Animation::GetGroupSpeed);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetGroupSpeed };
			return func(this, asAnimGroup);
		}

		bool GetDelta(NiPoint3* delta, TESObjectREFR* apRef, bool applyRot, bool zeroZ)
		{
			using func_t = decltype(&Animation::GetDelta);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetDelta };
			return func(this, delta, apRef, applyRot, zeroZ);
		}

		bool GroupLoaded(std::uint16_t asTestGroup)
		{
			using func_t = decltype(&Animation::GroupLoaded);
			static REL::Relocation<func_t> func{ Offsets::Animation::GroupLoaded };
			return func(this, asTestGroup);
		}

		BSAnimGroupSequence* PlayGroup(std::uint16_t asNewGroup, ACTION_FLAGS aeFlags, std::int32_t aiLoops, ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&Animation::PlayGroup);
			static REL::Relocation<func_t> func{ Offsets::Animation::PlayGroup };
			return func(this, asNewGroup, aeFlags, aiLoops, aeSection);
		}

		void ForceSection(ANIM_GROUP_SECTION aeSection, std::uint16_t asNewGroup, ANIM_GROUP_ACTION aeNewAction, float a_arg4, char a_arg5)
		{
			using func_t = decltype(&Animation::ForceSection);
			static REL::Relocation<func_t> func{ Offsets::Animation::ForceSection };
			func(this, aeSection, asNewGroup, aeNewAction, a_arg4, a_arg5);
		}

		std::uint16_t PickBestAnimation(std::uint16_t asAnimGroup, bool abRecursive)
		{
			using func_t = decltype(&Animation::PickBestAnimation);
			static REL::Relocation<func_t> func{ Offsets::Animation::PickBestAnimation };
			return func(this, asAnimGroup, abRecursive);
		}

		bool ShouldBeMoving()
		{
			using func_t = decltype(&Animation::ShouldBeMoving);
			static REL::Relocation<func_t> func{ Offsets::Animation::ShouldBeMoving };
			return func(this);
		}

		BSAnimGroupSequence* SyncSequences(BSAnimGroupSequence* apSeq, std::uint16_t asGroup)
		{
			using func_t = decltype(&Animation::SyncSequences);
			static REL::Relocation<func_t> func{ Offsets::Animation::SyncSequences };
			return func(this, apSeq, asGroup);
		}

		char FindSwitchKey(float* pTime)
		{
			using func_t = decltype(&Animation::FindSwitchKey);
			static REL::Relocation<func_t> func{ Offsets::Animation::FindSwitchKey };
			return func(this, pTime);
		}

		char FindNextNoteKey(ANIM_GROUP_SECTION aeSection, char* apSearchKey, float* apKeyTime)
		{
			using func_t = decltype(&Animation::FindNextNoteKey);
			static REL::Relocation<func_t> func{ Offsets::Animation::FindNextNoteKey };
			return func(this, aeSection, apSearchKey, apKeyTime);
		}

		void ClearGroup(ANIM_GROUP_SECTION aeSection, float afEaseOutTime)
		{
			using func_t = decltype(&Animation::ClearGroup);
			static REL::Relocation<func_t> func{ Offsets::Animation::ClearGroup };
			func(this, aeSection, afEaseOutTime);
		}

		void ZeroGlobalTransform()
		{
			using func_t = decltype(&Animation::ZeroGlobalTransform);
			static REL::Relocation<func_t> func{ Offsets::Animation::ZeroGlobalTransform };
			func(this);
		}

		void ClearAccumRootTranslate()
		{
			using func_t = decltype(&Animation::ClearAccumRootTranslate);
			static REL::Relocation<func_t> func{ Offsets::Animation::ClearAccumRootTranslate };
			func(this);
		}

		TESAnimGroup* GetTESAnimGroup(std::uint16_t asGroup)
		{
			using func_t = decltype(&Animation::GetTESAnimGroup);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetTESAnimGroup };
			return func(this, asGroup);
		}

		NiControllerManager* GetControllerManager()
		{
			using func_t = decltype(&Animation::GetControllerManager);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetControllerManager };
			return func(this);
		}

		NiTPointerMap<std::uint16_t, AnimSequenceBase*>* GetAnimSequenceMap()
		{
			using func_t = decltype(&Animation::GetAnimSequenceMap);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetAnimSequenceMap };
			return func(this);
		}

		void SkipNextBlend()
		{
			using func_t = decltype(&Animation::SkipNextBlend);
			static REL::Relocation<func_t> func{ Offsets::Animation::SkipNextBlend };
			func(this);
		}

		void SpecialIdleQueue(TESIdleForm* apIdleForm, ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&Animation::SpecialIdleQueue);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdleQueue };
			func(this, apIdleForm, aeSection);
		}

		void SpecialIdleAuto(TESIdleForm* apIdleForm, Actor* apActor, ANIM_GROUP_SECTION aeSection, AnimIdle_PLAY_TYPE_ENUM aeType)
		{
			using func_t = decltype(&Animation::SpecialIdleAuto);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdleAuto };
			func(this, apIdleForm, apActor, aeSection, aeType);
		}

		void SpecialIdleReplace(TESIdleForm* apIdleForm, Actor* apActor, ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&Animation::SpecialIdleReplace);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdleReplace };
			func(this, apIdleForm, apActor, aeSection);
		}

		bool SpecialIdleLoaded()
		{
			using func_t = decltype(&Animation::SpecialIdleLoaded);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdleLoaded };
			return func(this);
		}

		bool SpecialIdlePlay(Actor* apActor)
		{
			using func_t = bool (Animation::*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdlePlay };
			return func(this, apActor);
		}

		bool SpecialIdlePlay()
		{
			using func_t = bool (Animation::*)();
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdlePlay_1 };
			return func(this);
		}

		bool SpecialIdleDonePlaying()
		{
			using func_t = decltype(&Animation::SpecialIdleDonePlaying);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdleDonePlaying };
			return func(this);
		}

		void SpecialIdleFree(bool abFreeQueued, bool abForceDelete)
		{
			using func_t = decltype(&Animation::SpecialIdleFree);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdleFree };
			func(this, abFreeQueued, abForceDelete);
		}

		bool SpecialIdleWorking()
		{
			using func_t = decltype(&Animation::SpecialIdleWorking);
			static REL::Relocation<func_t> func{ Offsets::Animation::SpecialIdleWorking };
			return func(this);
		}

		void ClearBlendInterps()
		{
			using func_t = decltype(&Animation::ClearBlendInterps);
			static REL::Relocation<func_t> func{ Offsets::Animation::ClearBlendInterps };
			func(this);
		}

		static void ClearControllersInterpolators(NiAVObject* apObj)
		{
			using func_t = decltype(&Animation::ClearControllersInterpolators);
			static REL::Relocation<func_t> func{ Offsets::Animation::ClearControllersInterpolators };
			func(apObj);
		}

		void ReloadTargets(bool abReload)
		{
			using func_t = decltype(&Animation::ReloadTargets);
			static REL::Relocation<func_t> func{ Offsets::Animation::ReloadTargets };
			func(this, abReload);
		}

		void BlendOut(ANIM_GROUP_SECTION aeSection, bool abIronSightsToggle)
		{
			using func_t = decltype(&Animation::BlendOut);
			static REL::Relocation<func_t> func{ Offsets::Animation::BlendOut };
			func(this, aeSection, abIronSightsToggle);
		}

		std::uint16_t GetSaveSize(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Animation::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetSaveSize };
			return func(this, apRef);
		}

		void SaveGame(TESObjectREFR* apRef)
		{
			using func_t = void (Animation::*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::Animation::SaveGame };
			func(this, apRef);
		}

		void LoadGame(TESObjectREFR* apRef)
		{
			using func_t = void (Animation::*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::Animation::LoadGame };
			func(this, apRef);
		}

		void Revert(TESObjectREFR* apRef)
		{
			using func_t = void (Animation::*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::Animation::Revert };
			func(this, apRef);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (Animation::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::Animation::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (Animation::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::Animation::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		void Revert(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (Animation::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::Animation::Revert_1 };
			func(this, apLoadGameBuffer);
		}

		void UpdateBipOnly(float a_arg1, NiPoint3* a_arg2, bool apTranslate)
		{
			using func_t = decltype(&Animation::UpdateBipOnly);
			static REL::Relocation<func_t> func{ Offsets::Animation::UpdateBipOnly };
			func(this, a_arg1, a_arg2, apTranslate);
		}

		void SetLipTime(float a_arg1)
		{
			using func_t = void (Animation::*)(float);
			static REL::Relocation<func_t> func{ Offsets::Animation::SetLipTime };
			func(this, a_arg1);
		}

		static void SetLipTime(float a_arg1, NiControllerManager* a_arg2, NiControllerSequence* apManager)
		{
			using func_t = void(__cdecl*)(float, NiControllerManager*, NiControllerSequence*);
			static REL::Relocation<func_t> func{ Offsets::Animation::SetLipTime_1 };
			func(a_arg1, a_arg2, apManager);
		}

		void SetAttackSpeed(float attackSpeed)
		{
			using func_t = decltype(&Animation::SetAttackSpeed);
			static REL::Relocation<func_t> func{ Offsets::Animation::SetAttackSpeed };
			func(this, attackSpeed);
		}

		ANIM_GROUP_ACTION GetGroupAction(ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&Animation::GetGroupAction);
			static REL::Relocation<func_t> func{ Offsets::Animation::GetGroupAction };
			return func(this, aeSection);
		}

		bool ReloadAnimQueued()
		{
			using func_t = decltype(&Animation::ReloadAnimQueued);
			static REL::Relocation<func_t> func{ Offsets::Animation::ReloadAnimQueued };
			return func(this);
		}

		void SetGlobalTimeMultiplier(float fValue)
		{
			using func_t = decltype(&Animation::SetGlobalTimeMultiplier);
			static REL::Relocation<func_t> func{ Offsets::Animation::SetGlobalTimeMultiplier };
			func(this, fValue);
		}

		void SetMoveSpeed(float moveSpeed)
		{
			using func_t = decltype(&Animation::SetMoveSpeed);
			static REL::Relocation<func_t> func{ Offsets::Animation::SetMoveSpeed };
			func(this, moveSpeed);
		}

		void SkipUpdate(ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&Animation::SkipUpdate);
			static REL::Relocation<func_t> func{ Offsets::Animation::SkipUpdate };
			func(this, aeSection);
		}

	protected:
		BSAnimGroupSequence* StartGroup(std::uint16_t asNewGroup, ANIM_GROUP_SECTION aeSection)
		{
			using func_t = BSAnimGroupSequence* (Animation::*)(std::uint16_t, ANIM_GROUP_SECTION);
			static REL::Relocation<func_t> func{ Offsets::Animation::StartGroup };
			return func(this, asNewGroup, aeSection);
		}

		BSAnimGroupSequence* StartGroup(BSAnimGroupSequence* apSeq, std::uint16_t asNewGroup, ANIM_GROUP_SECTION aeSection)
		{
			using func_t = BSAnimGroupSequence* (Animation::*)(BSAnimGroupSequence*, std::uint16_t, ANIM_GROUP_SECTION);
			static REL::Relocation<func_t> func{ Offsets::Animation::StartGroup_1 };
			return func(this, apSeq, asNewGroup, aeSection);
		}

		void AnimIdleFree(NiPointer<AnimIdle>& aspAnimIdle)
		{
			using func_t = decltype(&Animation::AnimIdleFree);
			static REL::Relocation<func_t> func{ Offsets::Animation::AnimIdleFree };
			func(this, aspAnimIdle);
		}

	public:
		// members
		std::uint8_t                                     m_uFlags;                        // 00
		std::uint8_t                                     pad01[0x3];                      // 01
		TESObjectREFR*                                   pActorRef;                       // 04
		NiPointer<NiNode>                                pAnimRoot;                       // 08
		NiNode*                                          pAccumRoot;                      // 0C
		NiPoint3                                         movementDelta;                   // 10
		NiPoint3                                         AccumRootTranslate;              // 1C
		NiAVObject*                                      pSoundPriorityBone[8];           // 28
		float                                            m_fLooking;                      // 48
		std::uint16_t                                    group[8];                        // 4C
		ANIM_GROUP_ACTION                                action[8];                       // 5C
		std::int32_t                                     loopCount[8];                    // 7C
		std::uint16_t                                    nextGroup[8];                    // 9C
		std::int32_t                                     nextLoops[8];                    // AC
		char                                             cSkipUpdate;                     // CC
		bool                                             bShutDown;                       // CD
		std::uint16_t                                    padCE;                           // CE
		float                                            time;                            // D0
		float                                            fLipTime;                        // D4
		NiPointer<NiControllerManager>                   spManager;                       // D8
		NiTPointerMap<std::uint16_t, AnimSequenceBase*>* pAnimSequenceMap;                // DC
		BSAnimGroupSequence*                             pCurrentSequence[8];             // E0
		BSAnimGroupSequence*                             pLastMovementSequence;           // 100
		BSSimpleList<KFModel*>                           kfModelList;                     // 104
		float                                            m_fMoveSpeed;                    // 10C
		float                                            m_fAttackSpeed;                  // 110
		float                                            m_fGlobalTimeMultiplier;         // 114
		float                                            m_fReloadModifier;               // 118
		float                                            m_fEquipModifier;                // 11C
		char                                             cSkipNextBlend;                  // 120
		std::uint8_t                                     pad121;                          // 121
		std::uint16_t                                    sQueuedReloadGroup;              // 122
		NiPointer<AnimIdle>                              spAnimIdle;                      // 124
		NiPointer<AnimIdle>                              spAnimIdleQueued;                // 128
		NiPointer<AnimIdle>                              spAnimIdleFreeWhenInactiveA[2];  // 12C
		BSSimpleList<IDLE_REPLAY_DELAY*>                 replayDelayList;                 // 134
	};
	static_assert(sizeof(Animation) == 0x13C);
}
