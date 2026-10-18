#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraWeaponModFlags :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraWeaponModFlags };
		static constexpr auto VTABLE{ VTABLE::ExtraWeaponModFlags };

		// override (BSExtraData)
		virtual ~ExtraWeaponModFlags() = default;               // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraWeaponModFlags* ctor()
		{
			using func_t = ExtraWeaponModFlags*(__thiscall*)(ExtraWeaponModFlags*);
			static REL::Relocation<func_t> func{ Offsets::ExtraWeaponModFlags::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t cWeaponModsActive;  // 0C
		std::uint8_t pad0D[0x3];         // 0D
	};
	static_assert(sizeof(ExtraWeaponModFlags) == 0x10);
}
