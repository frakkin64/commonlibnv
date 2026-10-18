#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/ListBox.h"

namespace RE
{
	class StartMenu_Option;

	class StartMenu_OptionListBox :
		public ListBox<StartMenu_Option*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::StartMenu_OptionListBox };
		static constexpr auto VTABLE{ VTABLE::StartMenu_OptionListBox };

	};
}
