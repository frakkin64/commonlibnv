#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/B/BSSimpleList.h"
#include "RE/N/NOTE_TYPE.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class TESActorBase;
	class TESDescription;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESQuest;
	class TESSound;
	class TESTexture;
	class TESTopic;

	class BGSNote :
		public TESBoundObject,  // 00
		public TESModel,  // 30
		public TESFullName,  // 48
		public TESIcon,  // 54
		public BGSPickupPutdownSounds  // 60
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSNote };
		static constexpr auto VTABLE{ VTABLE::BGSNote };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kNOTE_ID };

		// override (TESBoundObject)
		virtual ~BGSNote() = default;                                                                                                                                    // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool ProcessBeforeSave() override;                                                                                                                       // 06
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                               // 1C
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		BGSNote* ctor()
		{
			using func_t = BGSNote*(__thiscall*)(BGSNote*);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::ctor };
			return func(this);
		}

		NOTE_TYPE GetNoteType()
		{
			using func_t = decltype(&BGSNote::GetNoteType);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::GetNoteType };
			return func(this);
		}

		void SetNoteType(NOTE_TYPE aeVal)
		{
			using func_t = decltype(&BGSNote::SetNoteType);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::SetNoteType };
			func(this, aeVal);
		}

		TESSound* GetNoteSound()
		{
			using func_t = decltype(&BGSNote::GetNoteSound);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::GetNoteSound };
			return func(this);
		}

		void SetNoteSound(TESSound* apSound)
		{
			using func_t = decltype(&BGSNote::SetNoteSound);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::SetNoteSound };
			func(this, apSound);
		}

		TESTexture* GetNoteImage()
		{
			using func_t = decltype(&BGSNote::GetNoteImage);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::GetNoteImage };
			return func(this);
		}

		TESDescription* GetNoteText()
		{
			using func_t = decltype(&BGSNote::GetNoteText);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::GetNoteText };
			return func(this);
		}

		TESTopic* GetNoteTopic()
		{
			using func_t = decltype(&BGSNote::GetNoteTopic);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::GetNoteTopic };
			return func(this);
		}

		void SetNoteTopic(TESTopic* apTopic)
		{
			using func_t = decltype(&BGSNote::SetNoteTopic);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::SetNoteTopic };
			func(this, apTopic);
		}

		TESActorBase* GetNoteSpeaker()
		{
			using func_t = decltype(&BGSNote::GetNoteSpeaker);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::GetNoteSpeaker };
			return func(this);
		}

		void SetNoteSpeaker(TESActorBase* apSpeaker)
		{
			using func_t = decltype(&BGSNote::SetNoteSpeaker);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::SetNoteSpeaker };
			func(this, apSpeaker);
		}

		bool QHasBeenRead()
		{
			using func_t = decltype(&BGSNote::QHasBeenRead);
			static REL::Relocation<func_t> func{ Offsets::BGSNote::QHasBeenRead };
			return func(this);
		}

	public:
		// members
		union
		{
			TESSound* pNoteSound;
			TESDescription* pNoteText;
			TESTexture* pNoteImage;
			TESTopic* pNoteTopic;
		} ___u5;  // 6C
		TESActorBase*           pSpeaker;      // 70
		BSSimpleList<TESQuest*> OwnerQuests;   // 74
		char                    cType;         // 7C
		bool                    bHasBeenRead;  // 7D
		std::uint16_t           pad7E;         // 7E
	};
	static_assert(sizeof(BGSNote) == 0x80);
}
