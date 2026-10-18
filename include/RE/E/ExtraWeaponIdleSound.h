#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class ExtraWeaponIdleSound :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraWeaponIdleSound };
		static constexpr auto VTABLE{ VTABLE::ExtraWeaponIdleSound };

		// override (BSExtraData)
		virtual ~ExtraWeaponIdleSound() = default;  // 00

		ExtraWeaponIdleSound* ctor(BSSoundHandle apSound)
		{
			using func_t = ExtraWeaponIdleSound*(__thiscall*)(ExtraWeaponIdleSound*, BSSoundHandle);
			static REL::Relocation<func_t> func{ Offsets::ExtraWeaponIdleSound::ctor };
			return func(this, apSound);
		}

	public:
		// members
		BSSoundHandle pHandle;  // 0C
	};
}
