#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/I/Interface_FADE_STATE.h"

namespace RE
{
	class Tile;
	class TileMenu;
	class Tile_TileTemplate;

	class __declspec(novtable) Menu
	{
	public:
		static constexpr auto RTTI{ RTTI::Menu };
		static constexpr auto VTABLE{ VTABLE::Menu };

		// add
		virtual ~Menu() = default;                                                        // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile);                     // 01
		virtual void DoDownClick(std::int32_t aiID, Tile* apTarget);                      // 02
		virtual void DoClick(std::int32_t aiID, Tile* apTarget);                          // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget);                          // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget);                          // 05
		virtual void DoDragEnter(std::int32_t aiID, Tile* apDragTarget, Tile* apTarget);  // 06
		virtual void DoDragLeave(std::int32_t aiID, Tile* apDragTarget, Tile* apTarget);  // 07
		virtual void DoStillDown(std::int32_t aiID, Tile* apTarget);                      // 08
		virtual void DoStillDragOver(std::int32_t aiID, Tile* apTarget);                  // 09
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget);                      // 0A
		virtual void DoIdle();                                                            // 0B
		virtual bool DoKey(std::int32_t aiKey);                                           // 0C
		virtual std::int32_t GetClass();                                                  // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue);                     // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue);              // 0F
		virtual void OnXMLDataChange(std::int32_t aiTrait);                               // 10
		virtual void DoControllerSwitch(bool abHas360Controller);                         // 11

		static bool IsMenuVisible(std::int32_t aiMenuID)
		{
			using func_t = decltype(&Menu::IsMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Menu::IsMenuVisible };
			return func(aiMenuID);
		}

		TileMenu* GetMenuTile()
		{
			using func_t = decltype(&Menu::GetMenuTile);
			static REL::Relocation<func_t> func{ Offsets::Menu::GetMenuTile };
			return func(this);
		}

		void SetRenderedMenu()
		{
			using func_t = decltype(&Menu::SetRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::Menu::SetRenderedMenu };
			func(this);
		}

		Menu* ctor()
		{
			using func_t = Menu*(__thiscall*)(Menu*);
			static REL::Relocation<func_t> func{ Offsets::Menu::ctor };
			return func(this);
		}

		static bool RemoveFromXMLArchive(char const* apFilename, Menu* apMenu)
		{
			using func_t = decltype(&Menu::RemoveFromXMLArchive);
			static REL::Relocation<func_t> func{ Offsets::Menu::RemoveFromXMLArchive };
			return func(apFilename, apMenu);
		}

		static bool CreateFinalMasterXMLFile()
		{
			using func_t = decltype(&Menu::CreateFinalMasterXMLFile);
			static REL::Relocation<func_t> func{ Offsets::Menu::CreateFinalMasterXMLFile };
			return func();
		}

		void StartFadeOut()
		{
			using func_t = decltype(&Menu::StartFadeOut);
			static REL::Relocation<func_t> func{ Offsets::Menu::StartFadeOut };
			func(this);
		}

		void InstantFadeOut()
		{
			using func_t = decltype(&Menu::InstantFadeOut);
			static REL::Relocation<func_t> func{ Offsets::Menu::InstantFadeOut };
			func(this);
		}

		void StartFadeIn()
		{
			using func_t = decltype(&Menu::StartFadeIn);
			static REL::Relocation<func_t> func{ Offsets::Menu::StartFadeIn };
			func(this);
		}

		void PrepForVisibility(bool abStayHidden)
		{
			using func_t = decltype(&Menu::PrepForVisibility);
			static REL::Relocation<func_t> func{ Offsets::Menu::PrepForVisibility };
			func(this, abStayHidden);
		}

		void SetMenuTile(TileMenu* apMenu, bool abDontAddToStack)
		{
			using func_t = decltype(&Menu::SetMenuTile);
			static REL::Relocation<func_t> func{ Offsets::Menu::SetMenuTile };
			func(this, apMenu, abDontAddToStack);
		}

		Tile* RenderTemplate(Tile* apParent, char const* axName, Tile* apLast)
		{
			using func_t = decltype(&Menu::RenderTemplate);
			static REL::Relocation<func_t> func{ Offsets::Menu::RenderTemplate };
			return func(this, apParent, axName, apLast);
		}

		static float GetMaxDepth()
		{
			using func_t = decltype(&Menu::GetMaxDepth);
			static REL::Relocation<func_t> func{ Offsets::Menu::GetMaxDepth };
			return func();
		}

		static void SetMenuByClass(std::int32_t aiClass, Tile* apTile)
		{
			using func_t = decltype(&Menu::SetMenuByClass);
			static REL::Relocation<func_t> func{ Offsets::Menu::SetMenuByClass };
			func(aiClass, apTile);
		}

	public:
		// members
		TileMenu*                        pMenu;             // 04
		BSSimpleList<Tile_TileTemplate*> xTemplates;        // 08
		Tile*                            pLastTile;         // 10
		std::int32_t                     iIsModal;          // 14
		std::int32_t                     iMenuThickness;    // 18
		bool                             bRenderedMenu;     // 1C
		bool                             bDeleteTemplates;  // 1D
		std::uint16_t                    pad1E;             // 1E
		std::int32_t                     iClass;            // 20
		Interface_FADE_STATE             xFadeState;        // 24
	};
	static_assert(sizeof(Menu) == 0x28);
}
