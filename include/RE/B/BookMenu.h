#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/Menu.h"

namespace RE
{
	class TESObjectBOOK;
	class TESObjectREFR;
	class Tile;

	class BookMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BookMenu };
		static constexpr auto VTABLE{ VTABLE::BookMenu };

		// override (Menu)
		virtual ~BookMenu() = default;                                          // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoDownClick(std::int32_t aiID, Tile* apTarget) override;   // 02
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoStillDown(std::int32_t aiID, Tile* apTarget) override;   // 08
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget) override;   // 0A
		virtual void DoIdle() override;                                         // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                        // 0C
		virtual std::int32_t GetClass() override;                               // 0D

		static Tile* Create(TESObjectBOOK* apBook, TESObjectREFR* apRef)
		{
			using func_t = decltype(&BookMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::BookMenu::Create };
			return func(apBook, apRef);
		}

		void UpdateBook(TESObjectBOOK* apTarget, TESObjectREFR* apRef)
		{
			using func_t = decltype(&BookMenu::UpdateBook);
			static REL::Relocation<func_t> func{ Offsets::BookMenu::UpdateBook };
			func(this, apTarget, apRef);
		}

		void Close()
		{
			using func_t = decltype(&BookMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::BookMenu::Close };
			func(this);
		}

		void UseWorkbook()
		{
			using func_t = decltype(&BookMenu::UseWorkbook);
			static REL::Relocation<func_t> func{ Offsets::BookMenu::UseWorkbook };
			func(this);
		}

	public:
		// members
		Tile*          pScrollBar;     // 28
		Tile*          pScrollMarker;  // 2C
		TESObjectREFR* pBook;          // 30
		TESObjectBOOK* pScroll;        // 34
		float          fScrollOffset;  // 38
	};
	static_assert(sizeof(BookMenu) == 0x3C);
}
