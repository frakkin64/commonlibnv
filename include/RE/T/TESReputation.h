#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSMessageIcon.h"
#include "RE/R/REPUTATION_DATA.h"
#include "RE/R/ReputationType.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;

	class TESReputation :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESIcon,  // 24
		public BGSMessageIcon  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::TESReputation };
		static constexpr auto VTABLE{ VTABLE::TESReputation };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kREPU_ID };

		// override (TESForm)
		virtual ~TESReputation() = default;                                                   // 04
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

		TESReputation* ctor()
		{
			using func_t = TESReputation*(__thiscall*)(TESReputation*);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::ctor };
			return func(this);
		}

		float GetReputationValue(ReputationType RepType)
		{
			using func_t = decltype(&TESReputation::GetReputationValue);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::GetReputationValue };
			return func(this, RepType);
		}

		void DisplayReputationTitleChange()
		{
			using func_t = decltype(&TESReputation::DisplayReputationTitleChange);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::DisplayReputationTitleChange };
			func(this);
		}

		void AddReputationValue(ReputationType RepType, float fValue)
		{
			using func_t = decltype(&TESReputation::AddReputationValue);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::AddReputationValue };
			func(this, RepType, fValue);
		}

		void RemoveReputationValue(ReputationType RepType, float fValue)
		{
			using func_t = decltype(&TESReputation::RemoveReputationValue);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::RemoveReputationValue };
			func(this, RepType, fValue);
		}

		void AddReputationValueByLevel(ReputationType RepType, std::int32_t iValue)
		{
			using func_t = decltype(&TESReputation::AddReputationValueByLevel);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::AddReputationValueByLevel };
			func(this, RepType, iValue);
		}

		void RemoveReputationValueByLevel(ReputationType RepType, std::int32_t iValue)
		{
			using func_t = decltype(&TESReputation::RemoveReputationValueByLevel);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::RemoveReputationValueByLevel };
			func(this, RepType, iValue);
		}

		char const* GetReputationTitle()
		{
			using func_t = decltype(&TESReputation::GetReputationTitle);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::GetReputationTitle };
			return func(this);
		}

		char const* GetReputationIcon()
		{
			using func_t = decltype(&TESReputation::GetReputationIcon);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::GetReputationIcon };
			return func(this);
		}

		char const* GetReputationDesc()
		{
			using func_t = decltype(&TESReputation::GetReputationDesc);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::GetReputationDesc };
			return func(this);
		}

		const char GetReputationLevel(ReputationType RepType)
		{
			using func_t = decltype(&TESReputation::GetReputationLevel);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::GetReputationLevel };
			return func(this, RepType);
		}

		const float GetReputationPct(ReputationType RepType)
		{
			using func_t = decltype(&TESReputation::GetReputationPct);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::GetReputationPct };
			return func(this, RepType);
		}

		const char GetReputationThreshold(char cAxis)
		{
			using func_t = decltype(&TESReputation::GetReputationThreshold);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::GetReputationThreshold };
			return func(this, cAxis);
		}

		void CommitCrime(bool bMajor)
		{
			using func_t = decltype(&TESReputation::CommitCrime);
			static REL::Relocation<func_t> func{ Offsets::TESReputation::CommitCrime };
			func(this, bMajor);
		}

	public:
		// members
		REPUTATION_DATA data;            // 40
		float           fPositiveValue;  // 44
		float           fNegativeValue;  // 48
		ReputationType  rSound;          // 4C
	};
	static_assert(sizeof(TESReputation) == 0x50);
}
