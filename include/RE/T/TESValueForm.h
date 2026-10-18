#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESForm;

	class TESValueForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESValueForm };
		static constexpr auto VTABLE{ VTABLE::TESValueForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags);                    // 04
		virtual void SaveGame(std::uint32_t aiFlags);                                // 05
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags);  // 06

		TESValueForm* ctor()
		{
			using func_t = TESValueForm*(__thiscall*)(TESValueForm*);
			static REL::Relocation<func_t> func{ Offsets::TESValueForm::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESValueForm*);
			static REL::Relocation<func_t> func{ Offsets::TESValueForm::dtor };
			func(this);
		}

		static std::int32_t GetFormValue(TESForm* apForm)
		{
			using func_t = decltype(&TESValueForm::GetFormValue);
			static REL::Relocation<func_t> func{ Offsets::TESValueForm::GetFormValue };
			return func(apForm);
		}

		void SetFormValue(std::int32_t aiValue)
		{
			using func_t = decltype(&TESValueForm::SetFormValue);
			static REL::Relocation<func_t> func{ Offsets::TESValueForm::SetFormValue };
			func(this, aiValue);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (TESValueForm::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESValueForm::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (TESValueForm::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESValueForm::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		std::uint32_t iValue;  // 04
	};
}
