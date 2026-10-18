#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/C/CFilter.h"
#include "RE/D/DIALOGUE_EMOTION.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PROCESS_TYPE.h"
#include "RE/T/TESObjectREFR.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BaseProcess;
	class DialogueResponse;
	class NiAVObject;
	class PackageLocation;
	class TESIdleForm;
	class TESObjectCELL;
	class TESPackage;
	class TESTopic;
	class TESWorldSpace;
	class bhkCharacterController;

	class MobileObject :
		public TESObjectREFR  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MobileObject };
		static constexpr auto VTABLE{ VTABLE::MobileObject };

		// override (TESObjectREFR)
		virtual ~MobileObject() = default;                                                          // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                          // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                        // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                      // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                        // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;        // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                    // 19
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;        // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;  // 1B
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                          // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                        // 1D
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 21
		virtual void SetDelete(bool abDeleted) override;                                            // 31
		virtual bool IsMobileObject() override;                                                     // 3F
		virtual void UpdateSoundCallBack() override;                                                // 50
		virtual bool DetachHavok() override;                                                        // 70
		virtual void InitHavok() override;                                                          // 71
		virtual NiAVObject* Load3D(bool abBackgroundLoading) override;                              // 72
		virtual NiPoint3 GetBoundMin() override;                                                    // 76
		virtual void SetRunsInLow(bool abFlag) override;                                            // 7E
		virtual void MoveHavok(bool abForceRec) override;                                           // 7F
		virtual void SetParentCell(TESObjectCELL* apCell) override;                                 // 8A
		virtual bool IsKnockedOut() override;                                                       // 8C

		// add
		virtual bool MovetoHigh();                                                                                                                                                                                                                                                                                                                                         // 90
		virtual bool MovetoLow();                                                                                                                                                                                                                                                                                                                                          // 91
		virtual bool MovetoMiddleLow();                                                                                                                                                                                                                                                                                                                                    // 92
		virtual bool MovetoMiddleHigh();                                                                                                                                                                                                                                                                                                                                   // 93
		virtual bhkCharacterController* Move(float afDeltaTime, NiPoint3& arDeltaMove, std::uint32_t aiMoveDir);                                                                                                                                                                                                                                                           // 94
		virtual bhkCharacterController* Jump();                                                                                                                                                                                                                                                                                                                            // 95
		virtual void SetAvoidanceDisabled(bool abTF);                                                                                                                                                                                                                                                                                                                      // 96
		virtual void Process(float afDelta);                                                                                                                                                                                                                                                                                                                               // 97
		virtual bool ChangeProcessLevel();                                                                                                                                                                                                                                                                                                                                 // 98
		virtual void UpdateInDialogue(float afDelta, DialogueResponse* pResponse, bool abChangeAnimationEndVoice);                                                                                                                                                                                                                                                         // 99
		virtual void UpdateAnimation(float afDelta);                                                                                                                                                                                                                                                                                                                       // 9A
		virtual bool GetEVPBuffered();                                                                                                                                                                                                                                                                                                                                     // 9B
		virtual void Unk_9C();                                                                                                                                                                                                                                                                                                                                             // 9C
		virtual bool IsInCombat(bool abSearching);                                                                                                                                                                                                                                                                                                                         // 9D
		virtual void SetDialoguewithPlayer(bool abFlag);                                                                                                                                                                                                                                                                                                                   // 9E
		virtual bool InitiateDialogue(MobileObject* apTarget, PackageLocation* pPackLoc, PackageLocation* pPackSecondLoc, bool bHeadTrack, bool bMove, bool bflag, TESTopic* pTopic, bool abTargetContinueMoving, bool abTargetMoveTowardStarter);                                                                                                                         // A0 (reversed overload group)
		virtual bool InitiateDialogue(TESPackage* pDialoguePackage);                                                                                                                                                                                                                                                                                                       // 9F (reversed overload group)
		virtual float SpeakSoundFunction(char const* apSoundFile, BSSoundHandle& aSoundHand, DIALOGUE_EMOTION aeEmotiontype, std::uint32_t aiEmotionValue, std::int32_t aiStringLength, TESIdleForm* apResponseSpeakerIdle, TESIdleForm* apResponseListenerIdle, TESObjectREFR* apTarget, bool abSetEmotion, bool ab2D, bool abQueue, bool abLip, bool abUseIdleManager);  // A1
		virtual void EndDialogue();                                                                                                                                                                                                                                                                                                                                        // A2
		virtual void SetRunOnceExtraPackage(TESPackage* apPack, char acDay);                                                                                                                                                                                                                                                                                               // A3
		virtual bool HasEditorLocation();                                                                                                                                                                                                                                                                                                                                  // A4
		virtual TESWorldSpace* GetEditorLocationWorld();                                                                                                                                                                                                                                                                                                                   // A5
		virtual TESObjectCELL* GetEditorLocationInteriorCell();                                                                                                                                                                                                                                                                                                            // A6
		virtual NiPoint3 GetEditorLocationCoord();                                                                                                                                                                                                                                                                                                                         // A7
		virtual bool DetachCharController();                                                                                                                                                                                                                                                                                                                               // A8
		virtual bool RemoveCharController();                                                                                                                                                                                                                                                                                                                               // A9
		virtual void SetPosition(NiPoint3 const& arPos);                                                                                                                                                                                                                                                                                                                   // AA
		virtual void GetLinearVelocity(NiPoint3& arVel);                                                                                                                                                                                                                                                                                                                   // AB
		virtual void EvaluateDetection(float ftime);                                                                                                                                                                                                                                                                                                                       // AC
		virtual float GetDetectionTimer();                                                                                                                                                                                                                                                                                                                                 // AD
		virtual void ReduceDetectionTimer();                                                                                                                                                                                                                                                                                                                               // AE
		virtual float GetHeading(bool abIgnoreImmobile);                                                                                                                                                                                                                                                                                                                   // AF
		virtual void SetHeading(float afAngle);                                                                                                                                                                                                                                                                                                                            // B1 (reversed overload group)
		virtual void SetHeading(TESObjectREFR* apTargetReference);                                                                                                                                                                                                                                                                                                         // B0 (reversed overload group)
		virtual TESObjectREFR* GetCurrentTarget();                                                                                                                                                                                                                                                                                                                         // B2
		virtual bool IsAtPoint(NiPoint3 const& aPoint, float a_arg2, bool a_arg3, bool abExpandRadius);                                                                                                                                                                                                                                                                    // B3
		virtual std::int32_t GetSpeakingEmotion();                                                                                                                                                                                                                                                                                                                         // B4
		virtual void SetSpeakingEmotion(std::int32_t aiEmotion);                                                                                                                                                                                                                                                                                                           // B5
		virtual std::int32_t GetSpeakingEmotionValue();                                                                                                                                                                                                                                                                                                                    // B6
		virtual void SetSpeakingEmotionValue(std::int32_t aiEmotionValue);                                                                                                                                                                                                                                                                                                 // B7
		virtual void SetSize(float afRadius);                                                                                                                                                                                                                                                                                                                              // B8
		virtual float GetAcrobatics();                                                                                                                                                                                                                                                                                                                                     // B9
		virtual bool IsDying();                                                                                                                                                                                                                                                                                                                                            // BA
		virtual bool IsTransient();                                                                                                                                                                                                                                                                                                                                        // BB
		virtual void SetDisplayGeometry(bool abTF);                                                                                                                                                                                                                                                                                                                        // BC
		virtual void PutCreatedPackage(TESPackage* apPack, bool abTempPack, bool abIsaCreatedPackage);                                                                                                                                                                                                                                                                     // BD
		virtual void Update(float afDelta);                                                                                                                                                                                                                                                                                                                                // BE
		virtual void CleanUpPointersOnDisable();                                                                                                                                                                                                                                                                                                                           // BF
		virtual MobileObject* SetUpTalkingActivatorActor(MobileObject* apTarget, MobileObject*& aptalkingactivator);                                                                                                                                                                                                                                                       // C0

		bool GetRunsInLow()
		{
			using func_t = decltype(&MobileObject::GetRunsInLow);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetRunsInLow };
			return func(this);
		}

		bool IsTalkingActivator()
		{
			using func_t = decltype(&MobileObject::IsTalkingActivator);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::IsTalkingActivator };
			return func(this);
		}

		void SetRotation(NiPoint3 const& arRot)
		{
			using func_t = decltype(&MobileObject::SetRotation);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::SetRotation };
			func(this, arRot);
		}

		MobileObject* ctor()
		{
			using func_t = MobileObject*(__thiscall*)(MobileObject*);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::ctor };
			return func(this);
		}

		void CleanUpOtherMobileObjects(bool abMagicCaster)
		{
			using func_t = decltype(&MobileObject::CleanUpOtherMobileObjects);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::CleanUpOtherMobileObjects };
			func(this, abMagicCaster);
		}

		bhkCharacterController* GetCharController()
		{
			using func_t = decltype(&MobileObject::GetCharController);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetCharController };
			return func(this);
		}

		void SetPackageStartLocationFromCurrentLocation()
		{
			using func_t = decltype(&MobileObject::SetPackageStartLocationFromCurrentLocation);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::SetPackageStartLocationFromCurrentLocation };
			func(this);
		}

		PROCESS_TYPE GetCurrentProcessType()
		{
			using func_t = decltype(&MobileObject::GetCurrentProcessType);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetCurrentProcessType };
			return func(this);
		}

		void ModHeading(float afModAngle)
		{
			using func_t = decltype(&MobileObject::ModHeading);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::ModHeading };
			func(this, afModAngle);
		}

		float GetLooking()
		{
			using func_t = decltype(&MobileObject::GetLooking);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetLooking };
			return func(this);
		}

		void SetLooking(float afAngle)
		{
			using func_t = decltype(&MobileObject::SetLooking);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::SetLooking };
			func(this, afAngle);
		}

		void ModLooking(float afModAngle)
		{
			using func_t = decltype(&MobileObject::ModLooking);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::ModLooking };
			func(this, afModAngle);
		}

		CFilter GetCollisionFilter()
		{
			using func_t = decltype(&MobileObject::GetCollisionFilter);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetCollisionFilter };
			return func(this);
		}

		void SetChaseBip(bool abTF)
		{
			using func_t = decltype(&MobileObject::SetChaseBip);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::SetChaseBip };
			func(this, abTF);
		}

		BSSoundHandle PlaySound(char* result, bool apSoundFileName, std::uint32_t abLoop)
		{
			using func_t = decltype(&MobileObject::PlaySound);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::PlaySound };
			return func(this, result, apSoundFileName, abLoop);
		}

		BSSoundHandle PlaySoundByEditorName(char const* result, bool apEditorName, std::uint32_t abLoop, bool aiSoundType)
		{
			using func_t = decltype(&MobileObject::PlaySoundByEditorName);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::PlaySoundByEditorName };
			return func(this, result, apEditorName, abLoop, aiSoundType);
		}

		PROCESS_TYPE GetDesiredProcessLevel()
		{
			using func_t = decltype(&MobileObject::GetDesiredProcessLevel);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetDesiredProcessLevel };
			return func(this);
		}

		bool IsinDialogue()
		{
			using func_t = decltype(&MobileObject::IsinDialogue);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::IsinDialogue };
			return func(this);
		}

		bool IsInAir()
		{
			using func_t = decltype(&MobileObject::IsInAir);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::IsInAir };
			return func(this);
		}

		bool IsInDialoguewithPlayer()
		{
			using func_t = decltype(&MobileObject::IsInDialoguewithPlayer);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::IsInDialoguewithPlayer };
			return func(this);
		}

		void StopCurrentDialogue()
		{
			using func_t = decltype(&MobileObject::StopCurrentDialogue);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::StopCurrentDialogue };
			func(this);
		}

		TESPackage* GetCurrentPackage()
		{
			using func_t = decltype(&MobileObject::GetCurrentPackage);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetCurrentPackage };
			return func(this);
		}

		void UpdateTopicInfoSayOnce()
		{
			using func_t = decltype(&MobileObject::UpdateTopicInfoSayOnce);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::UpdateTopicInfoSayOnce };
			func(this);
		}

		static void SoundFileCallBack(void* apContext, bool abSucceeded)
		{
			using func_t = decltype(&MobileObject::SoundFileCallBack);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::SoundFileCallBack };
			func(apContext, abSucceeded);
		}

		static void ChangeDialogueAnimation(void* apContext, bool abSucceeded)
		{
			using func_t = decltype(&MobileObject::ChangeDialogueAnimation);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::ChangeDialogueAnimation };
			func(apContext, abSucceeded);
		}

		static void SayToCallBack(void* apContext, bool abSucceeded)
		{
			using func_t = decltype(&MobileObject::SayToCallBack);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::SayToCallBack };
			func(apContext, abSucceeded);
		}

		static void DialogueConversationCallBack(void* apContext, bool abSucceeded)
		{
			using func_t = decltype(&MobileObject::DialogueConversationCallBack);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::DialogueConversationCallBack };
			func(apContext, abSucceeded);
		}

		float GetActualHeading()
		{
			using func_t = decltype(&MobileObject::GetActualHeading);
			static REL::Relocation<func_t> func{ Offsets::MobileObject::GetActualHeading };
			return func(this);
		}

	public:
		// members
		BaseProcess*   pCurrentProcess;             // 68
		TESObjectREFR* pTalkingActivator;           // 6C
		MobileObject*  pDialogueItemTarget;         // 70
		float          fUpdateTargetTimer;          // 74
		float          fSayToFailVoiceTimer;        // 78
		bool           bSpeakingDone;               // 7C
		bool           bTalkingToPlayer;            // 7D
		bool           bIgnoreChangeAnimationCall;  // 7E
		bool           bSoundFileDone;              // 7F
		bool           bVoiceFileDone;              // 80
		bool           bTalkingActivator;           // 81
		bool           bInTempChangeList;           // 82
		bool           bDoNotRunSayToCallBack;      // 83
		char           cSoundCallBackSet;           // 84
		bool           bSoundCallBackSuccess;       // 85
		bool           bUseEmotion;                 // 86
		bool           bRunsInLow;                  // 87
	};
	static_assert(sizeof(MobileObject) == 0x88);
}
