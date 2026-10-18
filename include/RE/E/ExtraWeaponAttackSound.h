#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class ExtraWeaponAttackSound :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraWeaponAttackSound };
		static constexpr auto VTABLE{ VTABLE::ExtraWeaponAttackSound };

		// override (BSExtraData)
		virtual ~ExtraWeaponAttackSound() = default;  // 00

		ExtraWeaponAttackSound* ctor(BSSoundHandle apSound)
		{
			using func_t = ExtraWeaponAttackSound*(__thiscall*)(ExtraWeaponAttackSound*, BSSoundHandle);
			static REL::Relocation<func_t> func{ Offsets::ExtraWeaponAttackSound::ctor };
			return func(this, apSound);
		}

	public:
		// members
		BSSoundHandle pHandle;  // 0C
	};
}
