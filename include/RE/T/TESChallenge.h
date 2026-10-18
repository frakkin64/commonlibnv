#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSMessageIcon.h"
#include "RE/C/CHALLENGE_DATA.h"
#include "RE/C/CHALLENGE_PROGRESS.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESScriptableForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;

	class TESChallenge :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESDescription,  // 24
		public TESScriptableForm,  // 2C
		public TESIcon,  // 38
		public BGSMessageIcon  // 44
	{
	public:
		static constexpr auto RTTI{ RTTI::TESChallenge };
		static constexpr auto VTABLE{ VTABLE::TESChallenge };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCHAL_ID };

		// override (TESForm)
		virtual ~TESChallenge() = default;                                                    // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitItem() override;                                                     // 22
		virtual void Copy(TESForm* apCopy) override;                                          // 42
		virtual bool Compare(TESForm* apCopy) override;                                       // 43

		TESForm* GetFormOne()
		{
			using func_t = decltype(&TESChallenge::GetFormOne);
			static REL::Relocation<func_t> func{ Offsets::TESChallenge::GetFormOne };
			return func(this);
		}

		std::int32_t GetUnlocked()
		{
			using func_t = decltype(&TESChallenge::GetUnlocked);
			static REL::Relocation<func_t> func{ Offsets::TESChallenge::GetUnlocked };
			return func(this);
		}

		std::int32_t GetCompleted()
		{
			using func_t = decltype(&TESChallenge::GetCompleted);
			static REL::Relocation<func_t> func{ Offsets::TESChallenge::GetCompleted };
			return func(this);
		}

		TESChallenge* ctor()
		{
			using func_t = TESChallenge*(__thiscall*)(TESChallenge*);
			static REL::Relocation<func_t> func{ Offsets::TESChallenge::ctor };
			return func(this);
		}

		std::int32_t GetStartsLocked()
		{
			using func_t = decltype(&TESChallenge::GetStartsLocked);
			static REL::Relocation<func_t> func{ Offsets::TESChallenge::GetStartsLocked };
			return func(this);
		}

	public:
		// members
		CHALLENGE_DATA     data;      // 54
		CHALLENGE_PROGRESS progress;  // 6C
		TESForm*           pFormOne;  // 74
		TESForm*           pFormTwo;  // 78
	};
	static_assert(sizeof(TESChallenge) == 0x7C);
}
