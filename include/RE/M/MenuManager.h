#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class HUDMainMenu;
	class InventoryMenu;
	class MapMenu;
	class Menu;
	class StatsMenu;
	class Tile;

	class MenuManager
	{
	public:
		[[nodiscard]] static MenuManager* GetSingleton() noexcept
		{
			static REL::Relocation<MenuManager**> singleton{ Offsets::MenuManager::pInstance };
			return *singleton;
		}

		static MenuManager* Instance(bool abCreate)
		{
			using func_t = decltype(&MenuManager::Instance);
			static REL::Relocation<func_t> func{ Offsets::MenuManager::Instance };
			return func(abCreate);
		}

		Menu* CreateMenuByClass(std::int32_t aiMenuClass)
		{
			using func_t = decltype(&MenuManager::CreateMenuByClass);
			static REL::Relocation<func_t> func{ Offsets::MenuManager::CreateMenuByClass };
			return func(this, aiMenuClass);
		}

		Tile* ReloadMenu(std::int32_t aiMenuClass)
		{
			using func_t = decltype(&MenuManager::ReloadMenu);
			static REL::Relocation<func_t> func{ Offsets::MenuManager::ReloadMenu };
			return func(this, aiMenuClass);
		}

		Menu* GetFrontmostMenu()
		{
			using func_t = decltype(&MenuManager::GetFrontmostMenu);
			static REL::Relocation<func_t> func{ Offsets::MenuManager::GetFrontmostMenu };
			return func(this);
		}

		bool IsMenuOpen(std::int32_t aiClass)
		{
			using func_t = decltype(&MenuManager::IsMenuOpen);
			static REL::Relocation<func_t> func{ Offsets::MenuManager::IsMenuOpen };
			return func(this, aiClass);
		}

	public:
		// members
		MapMenu*       pMapMenu;       // 00?
		InventoryMenu* pInvntoryMenu;  // 04?
		StatsMenu*     pStatsMenu;     // 08?
		HUDMainMenu*   pHUDMainMenu;   // 0C?
	};
}
