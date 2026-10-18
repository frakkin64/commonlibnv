#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool;
	class hkpCollidable;
	class hkpWorldRayCastInput;

	class __declspec(novtable) hkpRayCollidableFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRayCollidableFilter };
		static constexpr auto VTABLE{ VTABLE::hkpRayCollidableFilter };

		// add
		virtual ~hkpRayCollidableFilter() = default;                                                                          // 00
		virtual hkBool* isCollisionEnabled(hkBool* a_arg1, const hkpWorldRayCastInput* a_arg2, const hkpCollidable* a_arg3);  // 01
	};
}
