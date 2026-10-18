#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool;
	class hkpCollidable;

	class __declspec(novtable) hkpCollidableCollidableFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCollidableCollidableFilter };
		static constexpr auto VTABLE{ VTABLE::hkpCollidableCollidableFilter };

		// add
		virtual ~hkpCollidableCollidableFilter() = default;                                                            // 00
		virtual hkBool* isCollisionEnabled(hkBool* a_arg1, const hkpCollidable* a_arg2, const hkpCollidable* a_arg3);  // 01
	};
}
