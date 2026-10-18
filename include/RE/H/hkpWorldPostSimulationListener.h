#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpEntity;
	class hkpWorld;

	class __declspec(novtable) hkpWorldPostSimulationListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldPostSimulationListener };
		static constexpr auto VTABLE{ VTABLE::hkpWorldPostSimulationListener };

		// add
		virtual ~hkpWorldPostSimulationListener() = default;          // 00
		virtual void postSimulationCallback(hkpWorld* a_arg1);        // 01
		virtual void inactiveEntityMovedCallback(hkpEntity* entity);  // 02
	};
}
