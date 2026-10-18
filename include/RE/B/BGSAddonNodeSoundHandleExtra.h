#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/N/NiExtraData.h"

namespace RE
{
	class BGSAddonNodeSoundHandleExtra :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSAddonNodeSoundHandleExtra };
		static constexpr auto VTABLE{ VTABLE::BGSAddonNodeSoundHandleExtra };

		// override (NiExtraData)
		virtual ~BGSAddonNodeSoundHandleExtra() = default;  // 00

		BGSAddonNodeSoundHandleExtra* ctor()
		{
			using func_t = BGSAddonNodeSoundHandleExtra*(__thiscall*)(BGSAddonNodeSoundHandleExtra*);
			static REL::Relocation<func_t> func{ Offsets::BGSAddonNodeSoundHandleExtra::ctor };
			return func(this);
		}

	public:
		// members
		BSSoundHandle SoundHandle;  // 0C
	};
	static_assert(sizeof(BGSAddonNodeSoundHandleExtra) == 0x18);
}
