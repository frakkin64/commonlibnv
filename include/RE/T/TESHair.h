#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class TESFile;
	class TESNPC;

	class TESHair :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESModel,  // 24
		public TESTexture  // 3C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESHair };
		static constexpr auto VTABLE{ VTABLE::TESHair };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kHAIR_ID };

		// override (TESForm)
		virtual ~TESHair() = default;                    // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESHair* ctor()
		{
			using func_t = TESHair*(__thiscall*)(TESHair*);
			static REL::Relocation<func_t> func{ Offsets::TESHair::ctor };
			return func(this);
		}

		bool CanBeHairForNPC(TESNPC* apNPC)
		{
			using func_t = decltype(&TESHair::CanBeHairForNPC);
			static REL::Relocation<func_t> func{ Offsets::TESHair::CanBeHairForNPC };
			return func(this, apNPC);
		}

	public:
		// members
		char         cFlags;      // 48
		std::uint8_t pad49[0x3];  // 49
	};
	static_assert(sizeof(TESHair) == 0x4C);
}
