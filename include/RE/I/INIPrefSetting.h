#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/INIPrefSettingCollection.h"
#include "RE/S/SettingT.h"

namespace RE
{
	class INIPrefSetting :
		public SettingT<INIPrefSettingCollection>  // 00
	{
	public:
		INIPrefSetting* ctor(char const* apID, float afValue)
		{
			using func_t = INIPrefSetting*(__thiscall*)(INIPrefSetting*, char const*, float);
			static REL::Relocation<func_t> func{ Offsets::INIPrefSetting::ctor };
			return func(this, apID, afValue);
		}

		INIPrefSetting* ctor(char const* apID, bool abValue)
		{
			using func_t = INIPrefSetting*(__thiscall*)(INIPrefSetting*, char const*, bool);
			static REL::Relocation<func_t> func{ Offsets::INIPrefSetting::ctor_1 };
			return func(this, apID, abValue);
		}

	public:
		// members
		std::uint16_t sKey;   // 0C
		std::uint16_t pad0E;  // 0E
	};
}
