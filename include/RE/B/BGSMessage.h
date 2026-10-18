#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class BGSMenuIcon;
	class MESSAGEBOX_BUTTON;
	class TESFile;

	class BGSMessage :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESDescription  // 24
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMessage };
		static constexpr auto VTABLE{ VTABLE::BGSMessage };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kMESG_ID };

		// override (TESForm)
		virtual ~BGSMessage() = default;                 // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSMessage* ctor()
		{
			using func_t = BGSMessage*(__thiscall*)(BGSMessage*);
			static REL::Relocation<func_t> func{ Offsets::BGSMessage::ctor };
			return func(this);
		}

		bool GetIsMessageBox()
		{
			using func_t = decltype(&BGSMessage::GetIsMessageBox);
			static REL::Relocation<func_t> func{ Offsets::BGSMessage::GetIsMessageBox };
			return func(this);
		}

		bool QAutoDisplay()
		{
			using func_t = decltype(&BGSMessage::QAutoDisplay);
			static REL::Relocation<func_t> func{ Offsets::BGSMessage::QAutoDisplay };
			return func(this);
		}

		void SetIcon(BGSMenuIcon* apIcon)
		{
			using func_t = decltype(&BGSMessage::SetIcon);
			static REL::Relocation<func_t> func{ Offsets::BGSMessage::SetIcon };
			func(this, apIcon);
		}

	public:
		// members
		BGSMenuIcon*                     pIcon;         // 2C
		BSSimpleList<MESSAGEBOX_BUTTON*> ButtonList;    // 30
		std::uint32_t                    iFlags;        // 38
		std::uint32_t                    iDisplayTime;  // 3C
	};
	static_assert(sizeof(BGSMessage) == 0x40);
}
