#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpSimulationIsland;

	class __declspec(novtable) hkpIslandActivationListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpIslandActivationListener };
		static constexpr auto VTABLE{ VTABLE::hkpIslandActivationListener };

		// add
		virtual ~hkpIslandActivationListener() = default;                     // 00
		virtual void islandActivatedCallback(hkpSimulationIsland* a_arg1);    // 01
		virtual void islandDeactivatedCallback(hkpSimulationIsland* a_arg1);  // 02

		hkpIslandActivationListener* ctor()
		{
			using func_t = hkpIslandActivationListener*(__thiscall*)(hkpIslandActivationListener*);
			static REL::Relocation<func_t> func{ Offsets::hkpIslandActivationListener::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(hkpIslandActivationListener) == 0x4);
}
