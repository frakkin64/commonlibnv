#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class NiColorA;

	class __declspec(novtable) SystemColorManager_SystemColor
	{
	public:
		static constexpr auto RTTI{ RTTI::SystemColorManager_SystemColor };
		static constexpr auto VTABLE{ VTABLE::SystemColorManager_SystemColor };

		// add
		virtual ~SystemColorManager_SystemColor() = default;  // 00
		virtual std::uint32_t GetColor();                     // 01
		virtual void SetColor(std::uint32_t a_arg1);          // 02
		virtual bool IsHard();                                // 03
		virtual bool IsSoft();                                // 04

		SystemColorManager_SystemColor* ctor(char const* apName, std::uint32_t aiID)
		{
			using func_t = SystemColorManager_SystemColor*(__thiscall*)(SystemColorManager_SystemColor*, char const*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager_SystemColor::ctor };
			return func(this, apName, aiID);
		}

		void SetColor(NiColorA const& aInColor)
		{
			using func_t = void (SystemColorManager_SystemColor::*)(NiColorA const&);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager_SystemColor::SetColor };
			func(this, aInColor);
		}

	public:
		// members
		BSStringT<char> strXMLID;  // 04
	};
	static_assert(sizeof(SystemColorManager_SystemColor) == 0xC);
}
