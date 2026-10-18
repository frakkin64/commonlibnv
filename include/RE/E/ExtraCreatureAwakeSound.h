#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class ExtraCreatureAwakeSound :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCreatureAwakeSound };
		static constexpr auto VTABLE{ VTABLE::ExtraCreatureAwakeSound };

		// override (BSExtraData)
		virtual ~ExtraCreatureAwakeSound() = default;  // 00

		ExtraCreatureAwakeSound* ctor(BSSoundHandle apSound)
		{
			using func_t = ExtraCreatureAwakeSound*(__thiscall*)(ExtraCreatureAwakeSound*, BSSoundHandle);
			static REL::Relocation<func_t> func{ Offsets::ExtraCreatureAwakeSound::ctor };
			return func(this, apSound);
		}

	public:
		// members
		BSSoundHandle pHandle;  // 0C
	};
}
