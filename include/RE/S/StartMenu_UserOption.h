#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/StartMenu_Option.h"
#include "RE/S/StartMenu_UserOption_UserOptionType.h"

namespace RE
{
	class StartMenu_UserOption :
		public StartMenu_Option  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::StartMenu_UserOption };
		static constexpr auto VTABLE{ VTABLE::StartMenu_UserOption };

		using UserOptionType = StartMenu_UserOption_UserOptionType;

		// override (StartMenu_Option)
		virtual ~StartMenu_UserOption() = default;  // 00

		StartMenu_UserOption* ctor(char const* apDisplayText, void* apCallBack, std::uint32_t aiModes, StartMenu_UserOption_UserOptionType aeType, std::uint32_t aiNumSettings, std::uint32_t aiArrowSpacing, ...)
		{
			using func_t = StartMenu_UserOption*(__cdecl*)(StartMenu_UserOption*, char const*, void*, std::uint32_t, StartMenu_UserOption_UserOptionType, std::uint32_t, std::uint32_t, ...);
			static REL::Relocation<func_t> func{ Offsets::StartMenu_UserOption::ctor };
			return func(this, apDisplayText, apCallBack, aiModes, aeType, aiNumSettings, aiArrowSpacing);
		}

	public:
		// members
		const char*                         pTemplate;      // 10
		std::int32_t                        iVal;           // 14
		std::int32_t                        iDefaultVal;    // 18?
		StartMenu_UserOption_UserOptionType eType;          // 1C?
		std::uint32_t                       iNumSettings;   // 20?
		std::uint32_t                       iArrowSpacing;  // 24?
		const char**                        pValueStrings;  // 28?
		void*                               pfChangeFn;     // 2C?
	};
}
