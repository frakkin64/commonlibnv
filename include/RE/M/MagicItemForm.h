#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MagicItem.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class MagicItemForm :
		public TESForm,  // 00
		public MagicItem  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicItemForm };
		static constexpr auto VTABLE{ VTABLE::MagicItemForm };

		// override (TESForm)
		virtual ~MagicItemForm() = default;                // 04
		virtual bool Load(TESFile* apFile) override;       // 08
		virtual void Save() override;                      // 0B
		virtual void InitItem() override;                  // 22
		virtual void SetAltered(bool abAltered) override;  // 32
		virtual bool IsMagicItem() override;               // 3B
		virtual void Copy(TESForm* apCopy) override;       // 42
		virtual bool Compare(TESForm* apCopy) override;    // 43

		// add
		virtual void Unk_4E();  // 4E

		MagicItemForm* ctor()
		{
			using func_t = MagicItemForm*(__thiscall*)(MagicItemForm*);
			static REL::Relocation<func_t> func{ Offsets::MagicItemForm::ctor };
			return func(this);
		}
	};
}
