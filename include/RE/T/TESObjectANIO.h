#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESForm.h"
#include "RE/T/TESModelTextureSwap.h"

namespace RE
{
	class TESFile;
	class TESIdleForm;

	class TESObjectANIO :
		public TESForm,  // 00
		public TESModelTextureSwap  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectANIO };
		static constexpr auto VTABLE{ VTABLE::TESObjectANIO };

		// override (TESForm)
		virtual ~TESObjectANIO() = default;              // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		// members
		TESIdleForm* pIdleAnim;  // 38
	};
	static_assert(sizeof(TESObjectANIO) == 0x3C);
}
