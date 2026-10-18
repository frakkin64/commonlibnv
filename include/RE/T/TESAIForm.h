#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AIDATA.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/P/PackageList.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESForm;
	class TESObject;

	class TESAIForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESAIForm };
		static constexpr auto VTABLE{ VTABLE::TESAIForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags);                    // 04
		virtual void SaveGame(std::uint32_t aiFlags);                                // 05
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags);  // 06

		void dtor()
		{
			using func_t = void(__thiscall*)(TESAIForm*);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::dtor };
			func(this);
		}

		void SetAggression(std::uint8_t acAggression, bool abAddChange)
		{
			using func_t = decltype(&TESAIForm::SetAggression);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetAggression };
			func(this, acAggression, abAddChange);
		}

		std::uint8_t GetAssistance()
		{
			using func_t = decltype(&TESAIForm::GetAssistance);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::GetAssistance };
			return func(this);
		}

		void SetAssistance(std::uint8_t acAssistance)
		{
			using func_t = decltype(&TESAIForm::SetAssistance);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetAssistance };
			func(this, acAssistance);
		}

		void SetHasAggroRadius(bool abAggro)
		{
			using func_t = decltype(&TESAIForm::SetHasAggroRadius);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetHasAggroRadius };
			func(this, abAggro);
		}

		void SetAggroRadius(std::uint32_t auiRadius)
		{
			using func_t = decltype(&TESAIForm::SetAggroRadius);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetAggroRadius };
			func(this, auiRadius);
		}

		static float GetConfidenceLevel(std::uint8_t acConfidence)
		{
			using func_t = decltype(&TESAIForm::GetConfidenceLevel);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::GetConfidenceLevel };
			return func(acConfidence);
		}

		void SetConfidence(std::uint8_t acConfidence, bool abAddChange)
		{
			using func_t = decltype(&TESAIForm::SetConfidence);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetConfidence };
			func(this, acConfidence, abAddChange);
		}

		void SetEnergy(std::uint8_t acEnergy, bool abAddChange)
		{
			using func_t = decltype(&TESAIForm::SetEnergy);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetEnergy };
			func(this, acEnergy, abAddChange);
		}

		std::uint8_t GetResponsibility()
		{
			using func_t = decltype(&TESAIForm::GetResponsibility);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::GetResponsibility };
			return func(this);
		}

		void SetResponsibility(std::uint8_t acResponsibility, bool abAddChange)
		{
			using func_t = decltype(&TESAIForm::SetResponsibility);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetResponsibility };
			func(this, acResponsibility, abAddChange);
		}

		void SetMood(std::uint8_t acMood)
		{
			using func_t = decltype(&TESAIForm::SetMood);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetMood };
			func(this, acMood);
		}

		void SetServiceFlags(std::uint32_t aiServeFlags, bool abAddChange)
		{
			using func_t = decltype(&TESAIForm::SetServiceFlags);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetServiceFlags };
			func(this, aiServeFlags, abAddChange);
		}

		void SetAIData(AIDATA* pAIData)
		{
			using func_t = decltype(&TESAIForm::SetAIData);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SetAIData };
			func(this, pAIData);
		}

		void CopyAIData(TESAIForm* apAIForm)
		{
			using func_t = decltype(&TESAIForm::CopyAIData);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::CopyAIData };
			func(this, apAIForm);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESAIForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::InitItem };
			func(this, apOwner);
		}

		bool SellBuysItem(TESObject* apObject)
		{
			using func_t = decltype(&TESAIForm::SellBuysItem);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SellBuysItem };
			return func(this, apObject);
		}

		void AddFormChange(std::int32_t aiChangeFlags)
		{
			using func_t = decltype(&TESAIForm::AddFormChange);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::AddFormChange };
			func(this, aiChangeFlags);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (TESAIForm::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (TESAIForm::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::LoadGame };
			func(this, apLoadGameBuffer);
		}

		std::uint8_t GetConfidence()
		{
			using func_t = decltype(&TESAIForm::GetConfidence);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::GetConfidence };
			return func(this);
		}

		std::uint8_t GetMood()
		{
			using func_t = decltype(&TESAIForm::GetMood);
			static REL::Relocation<func_t> func{ Offsets::TESAIForm::GetMood };
			return func(this);
		}

	public:
		// members
		AIDATA      AIData;      // 04
		PackageList AIPackList;  // 18
	};
}
