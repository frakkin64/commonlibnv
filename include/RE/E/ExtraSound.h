#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class ExtraSound :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSound };
		static constexpr auto VTABLE{ VTABLE::ExtraSound };

		// override (BSExtraData)
		virtual ~ExtraSound() = default;  // 00

		ExtraSound* ctor(BSSoundHandle apSound)
		{
			using func_t = ExtraSound*(__thiscall*)(ExtraSound*, BSSoundHandle);
			static REL::Relocation<func_t> func{ Offsets::ExtraSound::ctor };
			return func(this, apSound);
		}

	public:
		// members
		BSSoundHandle pHandle;  // 0C
	};
}
