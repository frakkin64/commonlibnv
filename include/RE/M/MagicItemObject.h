#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MagicItem.h"
#include "RE/T/TESBoundObject.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class MagicItemObject :
		public TESBoundObject,  // 00
		public MagicItem  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicItemObject };
		static constexpr auto VTABLE{ VTABLE::MagicItemObject };

		// override (TESBoundObject)
		virtual ~MagicItemObject() = default;              // 04
		virtual bool Load(TESFile* apFile) override;       // 08
		virtual void Save() override;                      // 0B
		virtual void InitItem() override;                  // 22
		virtual void SetAltered(bool abAltered) override;  // 32
		virtual bool IsMagicItem() override;               // 3B
		virtual void Copy(TESForm* apCopy) override;       // 42
		virtual bool Compare(TESForm* apCopy) override;    // 43

		// add
		virtual void Unk_60();  // 60

		MagicItemObject* ctor()
		{
			using func_t = MagicItemObject*(__thiscall*)(MagicItemObject*);
			static REL::Relocation<func_t> func{ Offsets::MagicItemObject::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(MagicItemObject) == 0x4C);
}
