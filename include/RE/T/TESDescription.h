#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"
#include "RE/C/CHUNK_ID.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class TESDescription :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESDescription };
		static constexpr auto VTABLE{ VTABLE::TESDescription };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual char const* GetDescription(TESForm* apForm, CHUNK_ID aeChunk);  // 04

		TESDescription* ctor()
		{
			using func_t = TESDescription*(__thiscall*)(TESDescription*);
			static REL::Relocation<func_t> func{ Offsets::TESDescription::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESDescription::Save);
			static REL::Relocation<func_t> func{ Offsets::TESDescription::Save };
			func(this);
		}

		static void SaveDescriptionData(TESDescription* apDesc, CHUNK_ID aiChunk)
		{
			using func_t = decltype(&TESDescription::SaveDescriptionData);
			static REL::Relocation<func_t> func{ Offsets::TESDescription::SaveDescriptionData };
			func(apDesc, aiChunk);
		}

		std::uint32_t GetDescriptionLength()
		{
			using func_t = decltype(&TESDescription::GetDescriptionLength);
			static REL::Relocation<func_t> func{ Offsets::TESDescription::GetDescriptionLength };
			return func(this);
		}

		static void LoadDescriptionData(TESDescription* apDesc, TESFile* apFile)
		{
			using func_t = decltype(&TESDescription::LoadDescriptionData);
			static REL::Relocation<func_t> func{ Offsets::TESDescription::LoadDescriptionData };
			func(apDesc, apFile);
		}

		void LoadDescription(TESForm* apForm, CHUNK_ID aeChunk)
		{
			using func_t = decltype(&TESDescription::LoadDescription);
			static REL::Relocation<func_t> func{ Offsets::TESDescription::LoadDescription };
			func(this, apForm, aeChunk);
		}

	public:
		// members
		std::uint32_t lFileOffset;  // 04
	};
	static_assert(sizeof(TESDescription) == 0x8);
}
