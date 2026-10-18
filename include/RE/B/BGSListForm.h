#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;

	class BGSListForm :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSListForm };
		static constexpr auto VTABLE{ VTABLE::BGSListForm };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kFLST_ID };

		// override (TESForm)
		virtual ~BGSListForm() = default;                                     // 04
		virtual bool ProcessBeforeSave() override;                            // 06
		virtual bool Load(TESFile* apFile) override;                          // 08
		virtual void Save() override;                                         // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 1C
		virtual void InitItem() override;                                     // 22
		virtual void Copy(TESForm* apCopy) override;                          // 42
		virtual bool Compare(TESForm* apCopy) override;                       // 43

		BSSimpleList<TESForm*>* GetFormList()
		{
			using func_t = decltype(&BGSListForm::GetFormList);
			static REL::Relocation<func_t> func{ Offsets::BGSListForm::GetFormList };
			return func(this);
		}

		std::int32_t GetItemIndex(TESForm* apForm)
		{
			using func_t = decltype(&BGSListForm::GetItemIndex);
			static REL::Relocation<func_t> func{ Offsets::BGSListForm::GetItemIndex };
			return func(this, apForm);
		}

		void AddScriptAddedForm(TESForm* apAddedForm)
		{
			using func_t = decltype(&BGSListForm::AddScriptAddedForm);
			static REL::Relocation<func_t> func{ Offsets::BGSListForm::AddScriptAddedForm };
			func(this, apAddedForm);
		}

	public:
		// members
		BSSimpleList<TESForm*> ListOfForms;            // 18
		std::uint32_t          iScriptAddedFormCount;  // 20
	};
	static_assert(sizeof(BGSListForm) == 0x24);
}
