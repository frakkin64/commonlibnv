#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"
#include "RE/C/CHUNK_ID.h"
#include "RE/T/TESIcon.h"

namespace RE
{
	class BGSMessageIcon :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMessageIcon };
		static constexpr auto VTABLE{ VTABLE::BGSMessageIcon };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSMessageIcon* ctor()
		{
			using func_t = BGSMessageIcon*(__thiscall*)(BGSMessageIcon*);
			static REL::Relocation<func_t> func{ Offsets::BGSMessageIcon::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSMessageIcon*);
			static REL::Relocation<func_t> func{ Offsets::BGSMessageIcon::dtor };
			func(this);
		}

		void Save(CHUNK_ID aeTextureID)
		{
			using func_t = decltype(&BGSMessageIcon::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSMessageIcon::Save };
			func(this, aeTextureID);
		}

		char const* GetMessageIconTextureName()
		{
			using func_t = decltype(&BGSMessageIcon::GetMessageIconTextureName);
			static REL::Relocation<func_t> func{ Offsets::BGSMessageIcon::GetMessageIconTextureName };
			return func(this);
		}

		void SetMessageIconTextureName(char const* apTexture)
		{
			using func_t = decltype(&BGSMessageIcon::SetMessageIconTextureName);
			static REL::Relocation<func_t> func{ Offsets::BGSMessageIcon::SetMessageIconTextureName };
			func(this, apTexture);
		}

	public:
		// members
		TESIcon Icon;  // 04
	};
	static_assert(sizeof(BGSMessageIcon) == 0x10);
}
