#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) StartMenu_Option
	{
	public:
		static constexpr auto RTTI{ RTTI::StartMenu_Option };
		static constexpr auto VTABLE{ VTABLE::StartMenu_Option };

		// add
		virtual ~StartMenu_Option() = default;  // 00

		StartMenu_Option* ctor(char const* apDisplayText, void* apf, std::uint32_t aiModes)
		{
			using func_t = StartMenu_Option*(__thiscall*)(StartMenu_Option*, char const*, void*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::StartMenu_Option::ctor };
			return func(this, apDisplayText, apf, aiModes);
		}

	public:
		// members
		const char*   pDisplayText;  // 04?
		void*         pfChooseFn;    // 08?
		std::uint32_t iModes;        // 0C?
	};
}
