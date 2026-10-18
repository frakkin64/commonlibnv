#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AMMO_EFFECT_DATA.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class TESFile;

	class TESAmmoEffect :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESAmmoEffect };
		static constexpr auto VTABLE{ VTABLE::TESAmmoEffect };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kAMEF_ID };

		// override (TESForm)
		virtual ~TESAmmoEffect() = default;              // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESAmmoEffect* ctor()
		{
			using func_t = TESAmmoEffect*(__thiscall*)(TESAmmoEffect*);
			static REL::Relocation<func_t> func{ Offsets::TESAmmoEffect::ctor };
			return func(this);
		}

		void BuildMenuString(char* astrResult, std::uint32_t auiResultLen)
		{
			using func_t = decltype(&TESAmmoEffect::BuildMenuString);
			static REL::Relocation<func_t> func{ Offsets::TESAmmoEffect::BuildMenuString };
			func(this, astrResult, auiResultLen);
		}

	public:
		// members
		AMMO_EFFECT_DATA data;  // 24
	};
	static_assert(sizeof(TESAmmoEffect) == 0x30);
}
