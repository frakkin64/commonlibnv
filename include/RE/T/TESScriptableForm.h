#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class Script;
	class TESForm;

	class TESScriptableForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESScriptableForm };
		static constexpr auto VTABLE{ VTABLE::TESScriptableForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		static Script* GetFormScript(TESForm* apForm)
		{
			using func_t = decltype(&TESScriptableForm::GetFormScript);
			static REL::Relocation<func_t> func{ Offsets::TESScriptableForm::GetFormScript };
			return func(apForm);
		}

		TESScriptableForm* ctor()
		{
			using func_t = TESScriptableForm*(__thiscall*)(TESScriptableForm*);
			static REL::Relocation<func_t> func{ Offsets::TESScriptableForm::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESScriptableForm::Save);
			static REL::Relocation<func_t> func{ Offsets::TESScriptableForm::Save };
			func(this);
		}

	public:
		// members
		Script*      pFormScript;     // 04
		bool         bIsInitialized;  // 08
		std::uint8_t pad09[0x3];      // 09
	};
}
