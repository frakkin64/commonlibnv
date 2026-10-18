#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESBoundObject.h"
#include "RE/T/TESModelTextureSwap.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class TESSound;

	class TESObjectSTAT :
		public TESBoundObject,  // 00
		public TESModelTextureSwap  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectSTAT };
		static constexpr auto VTABLE{ VTABLE::TESObjectSTAT };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSTAT_ID };

		// override (TESBoundObject)
		virtual ~TESObjectSTAT() = default;              // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESObjectSTAT* ctor()
		{
			using func_t = TESObjectSTAT*(__thiscall*)(TESObjectSTAT*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectSTAT::ctor };
			return func(this);
		}

	public:
		// members
		char         cPassThroughSoundIndex;  // 50
		std::uint8_t pad51[0x3];              // 51
		TESSound*    pRandomSound;            // 54
	};
	static_assert(sizeof(TESObjectSTAT) == 0x58);
}
