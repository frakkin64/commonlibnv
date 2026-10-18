#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/L/LOCK_LEVEL.h"
#include "RE/T/TERMINAL_DATA.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESObjectACTI.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSNote;
	class BGSSaveFormBuffer;
	class TERMINAL_MENU_ITEM;
	class TESBoundObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class BGSTerminal :
		public TESObjectACTI,  // 00
		public TESDescription  // 90
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSTerminal };
		static constexpr auto VTABLE{ VTABLE::BGSTerminal };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kTERM_ID };

		// override (TESObjectACTI)
		virtual ~BGSTerminal() = default;                                                                                                                                // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool ProcessBeforeSave() override;                                                                                                                       // 06
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                               // 1C
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		BSSimpleList<TERMINAL_MENU_ITEM*>* GetMenuItemList()
		{
			using func_t = decltype(&BGSTerminal::GetMenuItemList);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::GetMenuItemList };
			return func(this);
		}

		BGSNote* GetPassword()
		{
			using func_t = decltype(&BGSTerminal::GetPassword);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::GetPassword };
			return func(this);
		}

		BGSTerminal* ctor()
		{
			using func_t = BGSTerminal*(__thiscall*)(BGSTerminal*);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::ctor };
			return func(this);
		}

		LOCK_LEVEL GetHackDifficultyLockLevel(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSTerminal::GetHackDifficultyLockLevel);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::GetHackDifficultyLockLevel };
			return func(this, apRef);
		}

		std::uint32_t GetHackMiniGameValue(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSTerminal::GetHackMiniGameValue);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::GetHackMiniGameValue };
			return func(this, apRef);
		}

		static bool IsTerminalRefInUse(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSTerminal::IsTerminalRefInUse);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::IsTerminalRefInUse };
			return func(apRef);
		}

		bool IsUnlocked()
		{
			using func_t = bool (BGSTerminal::*)();
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::IsUnlocked };
			return func(this);
		}

		float GetMinSkillRequiredToHack(TESObjectREFR* apItemActivated)
		{
			using func_t = decltype(&BGSTerminal::GetMinSkillRequiredToHack);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::GetMinSkillRequiredToHack };
			return func(this, apItemActivated);
		}

		static void SetHacked(TESObjectREFR* apRef, bool abVal)
		{
			using func_t = decltype(&BGSTerminal::SetHacked);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::SetHacked };
			func(apRef, abVal);
		}

		static void LockOut(TESObjectREFR* apRef, bool abLock)
		{
			using func_t = decltype(&BGSTerminal::LockOut);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::LockOut };
			func(apRef, abLock);
		}

		void SetRawDifficulty(TESObjectREFR* apRef, LOCK_LEVEL aeVal)
		{
			using func_t = decltype(&BGSTerminal::SetRawDifficulty);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::SetRawDifficulty };
			func(this, apRef, aeVal);
		}

		bool IsUnlocked(TESObjectREFR* apRef)
		{
			using func_t = bool (BGSTerminal::*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::IsUnlocked_1 };
			return func(this, apRef);
		}

		void SetUnlocked(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSTerminal::SetUnlocked);
			static REL::Relocation<func_t> func{ Offsets::BGSTerminal::SetUnlocked };
			func(this, apRef);
		}

	public:
		// members
		BSSimpleList<TERMINAL_MENU_ITEM*> MenuItemList;  // 98
		BGSNote*                          pPassword;     // A0
		TERMINAL_DATA                     Data;          // A4
	};
	static_assert(sizeof(BGSTerminal) == 0xA8);
}
