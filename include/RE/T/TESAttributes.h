#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class TESAttributes :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESAttributes };
		static constexpr auto VTABLE{ VTABLE::TESAttributes };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESAttributes* ctor()
		{
			using func_t = TESAttributes*(__thiscall*)(TESAttributes*);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::ctor };
			return func(this);
		}

		std::uint32_t Save(void* apData)
		{
			using func_t = decltype(&TESAttributes::Save);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::Save };
			return func(this, apData);
		}

		std::uint32_t Load(void* apData)
		{
			using func_t = decltype(&TESAttributes::Load);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::Load };
			return func(this, apData);
		}

		std::uint8_t GetAttributeValue(ActorValue_Index aeAttribute) const
		{
			using func_t = decltype(&TESAttributes::GetAttributeValue);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::GetAttributeValue };
			return func(this, aeAttribute);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&TESAttributes::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&TESAttributes::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::LoadGame };
			func(this, apLoadGameBuffer);
		}

		std::uint8_t GetEndurance()
		{
			using func_t = decltype(&TESAttributes::GetEndurance);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::GetEndurance };
			return func(this);
		}

		std::uint32_t GetAttributeDataSize() const
		{
			using func_t = decltype(&TESAttributes::GetAttributeDataSize);
			static REL::Relocation<func_t> func{ Offsets::TESAttributes::GetAttributeDataSize };
			return func(this);
		}

	public:
		// members
		std::uint8_t cAttribute[7];  // 04
		std::uint8_t pad0B;          // 0B
	};
}
