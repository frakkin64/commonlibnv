#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpWorld;

	class __declspec(novtable) hkpPhysicsContextWorldListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhysicsContextWorldListener };
		static constexpr auto VTABLE{ VTABLE::hkpPhysicsContextWorldListener };

		// add
		virtual ~hkpPhysicsContextWorldListener() = default;  // 00
		virtual void worldAddedCallback(hkpWorld* a_arg1);    // 01
		virtual void worldRemovedCallback(hkpWorld* a_arg1);  // 02
	};
}
