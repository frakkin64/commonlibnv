#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class ExtraCreatureMovementSound :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCreatureMovementSound };
		static constexpr auto VTABLE{ VTABLE::ExtraCreatureMovementSound };

		// override (BSExtraData)
		virtual ~ExtraCreatureMovementSound() = default;  // 00

		ExtraCreatureMovementSound* ctor(BSSoundHandle apSound)
		{
			using func_t = ExtraCreatureMovementSound*(__thiscall*)(ExtraCreatureMovementSound*, BSSoundHandle);
			static REL::Relocation<func_t> func{ Offsets::ExtraCreatureMovementSound::ctor };
			return func(this, apSound);
		}

	public:
		// members
		BSSoundHandle pHandle;  // 0C
	};
}
