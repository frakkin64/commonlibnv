#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/D/DIALOGUE_TYPE.h"
#include "RE/S/SPEECH_CHALLENGE_LEVEL.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESForm.h"
#include "RE/T/TOPIC_INFO_DATA.h"
#include "RE/T/TOPIC_INFO_RESULT_SCRIPT.h"

namespace RE
{
	class ActorValueInfo;
	class BGSLoadFormBuffer;
	class BGSPerk;
	class FORM;
	class FORM_GROUP;
	class ResponseListWrapper;
	class Script;
	class TESActorBase;
	class TESConversationData;
	class TESFile;
	class TESObjectREFR;
	class TESQuest;
	class TESTopic;

	class TESTopicInfo :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESTopicInfo };
		static constexpr auto VTABLE{ VTABLE::TESTopicInfo };

		// override (TESForm)
		virtual ~TESTopicInfo() = default;                                                                      // 04
		virtual void ClearData() override;                                                                      // 05
		virtual bool ProcessBeforeSave() override;                                                              // 06
		virtual bool Load(TESFile* apFile) override;                                                            // 08
		virtual void Save() override;                                                                           // 0B
		virtual bool SavesBefore(FORM* apGroupFORM) override;                                                   // 0E
		virtual bool SavesBefore(TESForm* apForm) override;                                                     // 0F
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                    // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                    // 18
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                      // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                                    // 1D
		virtual void InitItem() override;                                                                       // 22
		virtual void GetFormDetailedString(BSStringT<char>& aString) override;                                  // 24
		virtual void SetAltered(bool abAltered) override;                                                       // 32
		virtual void Copy(TESForm* apCopy) override;                                                            // 42
		virtual bool BelongsInGroup(FORM* apGroupFORM, bool abAllowParentGroups, bool abCurrentOnly) override;  // 44
		virtual void CreateGroupData(FORM* apOutGroupFORM, FORM_GROUP* apParentGroup) override;                 // 45

		void SetSpeaker(TESActorBase* apActor)
		{
			using func_t = decltype(&TESTopicInfo::SetSpeaker);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::SetSpeaker };
			func(this, apActor);
		}

		bool IsRunImmediately()
		{
			using func_t = decltype(&TESTopicInfo::IsRunImmediately);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::IsRunImmediately };
			return func(this);
		}

		std::uint16_t GetInfoIndex()
		{
			using func_t = decltype(&TESTopicInfo::GetInfoIndex);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::GetInfoIndex };
			return func(this);
		}

		bool IsSayOnce() const
		{
			using func_t = decltype(&TESTopicInfo::IsSayOnce);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::IsSayOnce };
			return func(this);
		}

		bool IsSayOnceADay()
		{
			using func_t = decltype(&TESTopicInfo::IsSayOnceADay);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::IsSayOnceADay };
			return func(this);
		}

		TESTopicInfo* ctor(DIALOGUE_TYPE aeType)
		{
			using func_t = TESTopicInfo*(__thiscall*)(TESTopicInfo*, DIALOGUE_TYPE);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::ctor };
			return func(this, aeType);
		}

		void SetPrompt(char const* apPrompt)
		{
			using func_t = decltype(&TESTopicInfo::SetPrompt);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::SetPrompt };
			func(this, apPrompt);
		}

		void SetInfoConditions(TESCondition* apCond)
		{
			using func_t = decltype(&TESTopicInfo::SetInfoConditions);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::SetInfoConditions };
			func(this, apCond);
		}

		void GetInfoDisplayText(BSStringT<char>& aString, bool abFirstOnly)
		{
			using func_t = decltype(&TESTopicInfo::GetInfoDisplayText);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::GetInfoDisplayText };
			func(this, aString, abFirstOnly);
		}

		bool CheckCondition(bool& abDispositionFailure, TESQuest* apQuest, TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef)
		{
			using func_t = decltype(&TESTopicInfo::CheckCondition);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::CheckCondition };
			return func(this, abDispositionFailure, apQuest, apActionRef, apTargetRef);
		}

		void CloneResponseList(ResponseListWrapper& aResponseListWrapper)
		{
			using func_t = decltype(&TESTopicInfo::CloneResponseList);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::CloneResponseList };
			func(this, aResponseListWrapper);
		}

		Script* GetResultScript(TOPIC_INFO_RESULT_SCRIPT aeScript)
		{
			using func_t = decltype(&TESTopicInfo::GetResultScript);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::GetResultScript };
			return func(this, aeScript);
		}

		void AddTopicList()
		{
			using func_t = decltype(&TESTopicInfo::AddTopicList);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::AddTopicList };
			func(this);
		}

		void RunResult(TOPIC_INFO_RESULT_SCRIPT aeScript, TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESTopicInfo::RunResult);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::RunResult };
			func(this, aeScript, apRef);
		}

		void SetSaidOnce()
		{
			using func_t = decltype(&TESTopicInfo::SetSaidOnce);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::SetSaidOnce };
			func(this);
		}

		std::int32_t GetDifficulty()
		{
			using func_t = decltype(&TESTopicInfo::GetDifficulty);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::GetDifficulty };
			return func(this);
		}

		void SetInfoIndex(std::uint16_t iIdx)
		{
			using func_t = decltype(&TESTopicInfo::SetInfoIndex);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::SetInfoIndex };
			func(this, iIdx);
		}

		bool IsSpeechChallenge() const
		{
			using func_t = decltype(&TESTopicInfo::IsSpeechChallenge);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::IsSpeechChallenge };
			return func(this);
		}

		ActorValueInfo* GetActorValue()
		{
			using func_t = decltype(&TESTopicInfo::GetActorValue);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::GetActorValue };
			return func(this);
		}

		BGSPerk* GetPerk()
		{
			using func_t = decltype(&TESTopicInfo::GetPerk);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::GetPerk };
			return func(this);
		}

	protected:
		void ClearResponseList()
		{
			using func_t = decltype(&TESTopicInfo::ClearResponseList);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::ClearResponseList };
			func(this);
		}

		ResponseListWrapper* GetResponseList(ResponseListWrapper* apList)
		{
			using func_t = decltype(&TESTopicInfo::GetResponseList);
			static REL::Relocation<func_t> func{ Offsets::TESTopicInfo::GetResponseList };
			return func(this, apList);
		}

	public:
		// members
		TESCondition            objConditions;        // 18
		std::uint16_t           iInfoIndex;           // 20
		bool                    bSaidOnce;            // 22
		TOPIC_INFO_DATA         m_Data;               // 23
		std::uint8_t            pad27;                // 27
		BSStringT<char>         cPrompt;              // 28
		BSSimpleList<TESTopic*> m_listAddTopics;      // 30
		TESConversationData*    m_pConversationData;  // 38
		TESActorBase*           pSpeaker;             // 3C
		TESForm*                pPerkSkillStat;       // 40
		SPEECH_CHALLENGE_LEVEL  eDifficulty;          // 44
		TESQuest*               pOwnerQuest;          // 48
		std::uint32_t           iFileOffset;          // 4C
	};
	static_assert(sizeof(TESTopicInfo) == 0x50);
}
