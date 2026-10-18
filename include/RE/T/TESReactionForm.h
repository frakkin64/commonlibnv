#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class GROUP_REACTION;
	class TESForm;

	class TESReactionForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESReactionForm };
		static constexpr auto VTABLE{ VTABLE::TESReactionForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESReactionForm* ctor()
		{
			using func_t = TESReactionForm*(__thiscall*)(TESReactionForm*);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESReactionForm::Save);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESReactionForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::InitItem };
			func(this, apOwner);
		}

		std::uint16_t GetSaveSize(std::uint32_t aiFlags)
		{
			using func_t = decltype(&TESReactionForm::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::GetSaveSize };
			return func(this, aiFlags);
		}

		void SaveGame(std::uint32_t aiFlags)
		{
			using func_t = void (TESReactionForm::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::SaveGame };
			func(this, aiFlags);
		}

		void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags)
		{
			using func_t = void (TESReactionForm::*)(std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::LoadGame };
			func(this, aiFlags, aiCurrentFlags);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (TESReactionForm::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (TESReactionForm::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESReactionForm::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BSSimpleList<GROUP_REACTION*> m_reactionList;    // 04
		std::uint8_t                  m_cGroupFormType;  // 0C
		std::uint8_t                  pad0D[0x3];        // 0D
	};
}
