#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class ExtraActivateLoopSound :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraActivateLoopSound };
		static constexpr auto VTABLE{ VTABLE::ExtraActivateLoopSound };

		// override (BSExtraData)
		virtual ~ExtraActivateLoopSound() = default;  // 00

		ExtraActivateLoopSound* ctor(BSSoundHandle apSound)
		{
			using func_t = ExtraActivateLoopSound*(__thiscall*)(ExtraActivateLoopSound*, BSSoundHandle);
			static REL::Relocation<func_t> func{ Offsets::ExtraActivateLoopSound::ctor };
			return func(this, apSound);
		}

	public:
		// members
		BSSoundHandle pHandle;  // 0C
	};
}
