#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraTerminalState :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraTerminalState };
		static constexpr auto VTABLE{ VTABLE::ExtraTerminalState };

		// override (BSExtraData)
		virtual ~ExtraTerminalState() = default;  // 00

		ExtraTerminalState* ctor()
		{
			using func_t = ExtraTerminalState*(__thiscall*)(ExtraTerminalState*);
			static REL::Relocation<func_t> func{ Offsets::ExtraTerminalState::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t  cState;         // 0C
		char          cLockOverride;  // 0D
		std::uint16_t pad0E;          // 0E
	};
	static_assert(sizeof(ExtraTerminalState) == 0x10);
}
