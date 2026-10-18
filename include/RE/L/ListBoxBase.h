#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/Interface_enumGamepadButtons.h"

namespace RE
{
	class Menu;
	class Tile;

	class __declspec(novtable) ListBoxBase
	{
	public:
		static constexpr auto RTTI{ RTTI::ListBoxBase };
		static constexpr auto VTABLE{ VTABLE::ListBoxBase };

		// add
		virtual bool Highlight(Tile* a_arg1);                                   // 00
		virtual Tile* GetHighlightedItem();                                     // 01
		virtual Tile* GetHighlightTarget(Interface_enumGamepadButtons a_arg1);  // 02
		virtual bool BelongsTo(const Menu* a_arg1);                             // 03
		virtual void ScrollToHighlight();                                       // 04
		virtual Tile* GetTileAt(std::uint32_t a_arg1, bool a_arg2);             // 05

		ListBoxBase* ctor()
		{
			using func_t = ListBoxBase*(__thiscall*)(ListBoxBase*);
			static REL::Relocation<func_t> func{ Offsets::ListBoxBase::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: pContainerName(absent), eMenu(absent)
	};
	static_assert(sizeof(ListBoxBase) == 0x4);
}
