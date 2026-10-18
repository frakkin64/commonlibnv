#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/L/LOAD_SCREEN_DATA_TYPE.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class LOAD_FORM_DATA;
	class TESFile;
	class TESLoadScreenType;

	class TESLoadScreen :
		public TESForm,  // 00
		public TESTexture,  // 18
		public TESDescription  // 24
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLoadScreen };
		static constexpr auto VTABLE{ VTABLE::TESLoadScreen };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLSCR_ID };

		// override (TESForm)
		virtual ~TESLoadScreen() = default;              // 04
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESLoadScreen* ctor()
		{
			using func_t = TESLoadScreen*(__thiscall*)(TESLoadScreen*);
			static REL::Relocation<func_t> func{ Offsets::TESLoadScreen::ctor };
			return func(this);
		}

		bool CanDisplayForForm(TESForm* apLoadingForm)
		{
			using func_t = decltype(&TESLoadScreen::CanDisplayForForm);
			static REL::Relocation<func_t> func{ Offsets::TESLoadScreen::CanDisplayForForm };
			return func(this, apLoadingForm);
		}

		LOAD_SCREEN_DATA_TYPE GetLoadScreenTypeDataType()
		{
			using func_t = decltype(&TESLoadScreen::GetLoadScreenTypeDataType);
			static REL::Relocation<func_t> func{ Offsets::TESLoadScreen::GetLoadScreenTypeDataType };
			return func(this);
		}

	public:
		// members
		BSSimpleList<LOAD_FORM_DATA*> LoadFormList;     // 2C
		TESLoadScreenType*            pLoadScreenType;  // 34
		BSStringT<char>               cDescText;        // 38
	};
	static_assert(sizeof(TESLoadScreen) == 0x40);
}
