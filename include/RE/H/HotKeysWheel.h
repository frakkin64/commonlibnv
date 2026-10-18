#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ItemChange;
	class Tile;

	class HotKeysWheel
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(HotKeysWheel*);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::dtor };
			func(this);
		}

		void Initialize(Tile* apWheel)
		{
			using func_t = decltype(&HotKeysWheel::Initialize);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::Initialize };
			func(this, apWheel);
		}

		bool GetVisible()
		{
			using func_t = decltype(&HotKeysWheel::GetVisible);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::GetVisible };
			return func(this);
		}

		void SetVisible(bool abVisible)
		{
			using func_t = decltype(&HotKeysWheel::SetVisible);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::SetVisible };
			func(this, abVisible);
		}

		void UpdateHotkeyList()
		{
			using func_t = decltype(&HotKeysWheel::UpdateHotkeyList);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::UpdateHotkeyList };
			func(this);
		}

		void SetHotkeyItem(ItemChange* apHotkeyItem)
		{
			using func_t = decltype(&HotKeysWheel::SetHotkeyItem);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::SetHotkeyItem };
			func(this, apHotkeyItem);
		}

		std::int32_t MoveHighlight(std::int32_t aiNewIndex)
		{
			using func_t = decltype(&HotKeysWheel::MoveHighlight);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::MoveHighlight };
			return func(this, aiNewIndex);
		}

		void UseHotkeyItem()
		{
			using func_t = decltype(&HotKeysWheel::UseHotkeyItem);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::UseHotkeyItem };
			func(this);
		}

		static bool IsDPadPressed()
		{
			using func_t = decltype(&HotKeysWheel::IsDPadPressed);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::IsDPadPressed };
			return func();
		}

	private:
		void HighlightHotkey(std::int32_t aiIndex)
		{
			using func_t = decltype(&HotKeysWheel::HighlightHotkey);
			static REL::Relocation<func_t> func{ Offsets::HotKeysWheel::HighlightHotkey };
			func(this, aiIndex);
		}

	public:
		// members
		Tile*        pWheel;                  // 00
		Tile*        pHotkeyTilesA[8];        // 04
		bool         bSelectingHotkey;        // 24
		std::uint8_t pad25[0x3];              // 25
		std::int32_t iLastHighlightedHotkey;  // 28
		std::int32_t iUT_HighlightedHotkey;   // 2C
		std::int32_t iUT_HighlightedText;     // 30
	};
}
