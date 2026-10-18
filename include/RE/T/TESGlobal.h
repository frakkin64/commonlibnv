#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class TESGlobal :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESGlobal };
		static constexpr auto VTABLE{ VTABLE::TESGlobal };

		// override (TESForm)
		virtual ~TESGlobal() = default;                  // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		char GetType()
		{
			using func_t = decltype(&TESGlobal::GetType);
			static REL::Relocation<func_t> func{ Offsets::TESGlobal::GetType };
			return func(this);
		}

	public:
		// members
		BSStringT<char> cFormEditorID;  // 18
		char            cType;          // 20
		std::uint8_t    pad21[0x3];     // 21
		float           fValue;         // 24
	};
	static_assert(sizeof(TESGlobal) == 0x28);
}
