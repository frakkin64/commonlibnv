#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESForm.h"
#include "RE/V/VOICE_TYPE_DATA.h"

namespace RE
{
	class TESFile;

	class BGSVoiceType :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSVoiceType };
		static constexpr auto VTABLE{ VTABLE::BGSVoiceType };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kVTYP_ID };

		// override (TESForm)
		virtual ~BGSVoiceType() = default;               // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSVoiceType* ctor()
		{
			using func_t = BGSVoiceType*(__thiscall*)(BGSVoiceType*);
			static REL::Relocation<func_t> func{ Offsets::BGSVoiceType::ctor };
			return func(this);
		}

	public:
		// members
		VOICE_TYPE_DATA Data;        // 18
		std::uint8_t    pad19[0xB];  // 19
	};
	static_assert(sizeof(BGSVoiceType) == 0x24);
}
