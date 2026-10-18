#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/C/CARAVANDECKDATA.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class TESCaravanCard;
	class TESFile;

	class TESCaravanDeck :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESCaravanDeck };
		static constexpr auto VTABLE{ VTABLE::TESCaravanDeck };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCDCK_ID };

		// override (TESForm)
		virtual ~TESCaravanDeck() = default;             // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESCaravanDeck* ctor()
		{
			using func_t = TESCaravanDeck*(__thiscall*)(TESCaravanDeck*);
			static REL::Relocation<func_t> func{ Offsets::TESCaravanDeck::ctor };
			return func(this);
		}

	public:
		// members
		BSSimpleList<TESCaravanCard*>* pDeck;  // 24
		CARAVANDECKDATA                data;   // 28
	};
	static_assert(sizeof(TESCaravanDeck) == 0x2C);
}
