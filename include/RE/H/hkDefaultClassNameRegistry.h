#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDynamicClassNameRegistry.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkDefaultClassNameRegistry :
		public hkDynamicClassNameRegistry,  // 00
		public hkSingleton<hkDefaultClassNameRegistry>  // 1C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDefaultClassNameRegistry };
		static constexpr auto VTABLE{ VTABLE::hkDefaultClassNameRegistry };

		// override (hkDynamicClassNameRegistry)
		virtual ~hkDefaultClassNameRegistry() = default;  // 00

		hkDefaultClassNameRegistry* ctor()
		{
			using func_t = hkDefaultClassNameRegistry*(__thiscall*)(hkDefaultClassNameRegistry*);
			static REL::Relocation<func_t> func{ Offsets::hkDefaultClassNameRegistry::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t gap1C;       // 1C?
		std::uint8_t pad1D[0x3];  // 1D
	};
}
