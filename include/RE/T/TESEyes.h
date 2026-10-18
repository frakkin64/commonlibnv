#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class TESFile;
	class TESNPC;

	class TESEyes :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESTexture  // 24
	{
	public:
		static constexpr auto RTTI{ RTTI::TESEyes };
		static constexpr auto VTABLE{ VTABLE::TESEyes };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kEYES_ID };

		// override (TESForm)
		virtual ~TESEyes() = default;                    // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESEyes* ctor()
		{
			using func_t = TESEyes*(__thiscall*)(TESEyes*);
			static REL::Relocation<func_t> func{ Offsets::TESEyes::ctor };
			return func(this);
		}

		bool CanBeMale()
		{
			using func_t = decltype(&TESEyes::CanBeMale);
			static REL::Relocation<func_t> func{ Offsets::TESEyes::CanBeMale };
			return func(this);
		}

		bool CanBeFemale()
		{
			using func_t = decltype(&TESEyes::CanBeFemale);
			static REL::Relocation<func_t> func{ Offsets::TESEyes::CanBeFemale };
			return func(this);
		}

		bool CanBeEyesForNPC(TESNPC* apNPC)
		{
			using func_t = decltype(&TESEyes::CanBeEyesForNPC);
			static REL::Relocation<func_t> func{ Offsets::TESEyes::CanBeEyesForNPC };
			return func(this, apNPC);
		}

	public:
		// members
		char         cFlags;      // 30
		std::uint8_t pad31[0x3];  // 31
	};
	static_assert(sizeof(TESEyes) == 0x34);
}
