#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShape.h"

namespace RE
{
	class hkpCollidable;
	class hkpCollisionInput;

	class hkpPhantomCallbackShape :
		public hkpShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhantomCallbackShape };
		static constexpr auto VTABLE{ VTABLE::hkpPhantomCallbackShape };

		// override (hkpShape)
		virtual ~hkpPhantomCallbackShape() = default;  // 00

		// add
		virtual void phantomEnterEvent(const hkpCollidable* a_arg1, const hkpCollidable* a_arg2, const hkpCollisionInput* a_arg3);  // 0B
		virtual void phantomLeaveEvent(const hkpCollidable* a_arg1, const hkpCollidable* a_arg2);                                   // 0C

		hkpPhantomCallbackShape* ctor()
		{
			using func_t = hkpPhantomCallbackShape*(__thiscall*)(hkpPhantomCallbackShape*);
			static REL::Relocation<func_t> func{ Offsets::hkpPhantomCallbackShape::ctor };
			return func(this);
		}
	};
}
