#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/Menu.h"

namespace RE
{
	class TESNPC;

	class PlayerNameEntryMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PlayerNameEntryMenu };
		static constexpr auto VTABLE{ VTABLE::PlayerNameEntryMenu };

		// override (Menu)
		virtual ~PlayerNameEntryMenu() = default;  // 00
		virtual void DoIdle() override;            // 0B

		PlayerNameEntryMenu* ctor()
		{
			using func_t = PlayerNameEntryMenu*(__thiscall*)(PlayerNameEntryMenu*);
			static REL::Relocation<func_t> func{ Offsets::PlayerNameEntryMenu::ctor };
			return func(this);
		}

		static bool IsValidName(char const* apText)
		{
			using func_t = decltype(&PlayerNameEntryMenu::IsValidName);
			static REL::Relocation<func_t> func{ Offsets::PlayerNameEntryMenu::IsValidName };
			return func(apText);
		}

	protected:
		void Finish(char const* apName)
		{
			using func_t = decltype(&PlayerNameEntryMenu::Finish);
			static REL::Relocation<func_t> func{ Offsets::PlayerNameEntryMenu::Finish };
			func(this, apName);
		}

	public:
		// members
		// not placed: xKeyboard(absent)
		TESNPC* pPlayerBase;  // 28
	};
	static_assert(sizeof(PlayerNameEntryMenu) == 0x2C);
}
