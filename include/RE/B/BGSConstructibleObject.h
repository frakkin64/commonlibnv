#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESObjectMISC.h"

namespace RE
{
	class BGSListForm;
	class TESBoundObject;
	class TESFile;
	class TESForm;

	class BGSConstructibleObject :
		public TESObjectMISC  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSConstructibleObject };
		static constexpr auto VTABLE{ VTABLE::BGSConstructibleObject };

		// override (TESObjectMISC)
		virtual ~BGSConstructibleObject() = default;     // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		// members
		BGSListForm*    pRequiredItems;  // AC
		TESBoundObject* pCreatedItem;    // B0
	};
	static_assert(sizeof(BGSConstructibleObject) == 0xB4);
}
