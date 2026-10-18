#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollidableAddedEvent;
	class hkpCollidableRemovedEvent;

	class __declspec(novtable) hkpPhantomOverlapListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhantomOverlapListener };
		static constexpr auto VTABLE{ VTABLE::hkpPhantomOverlapListener };

		// add
		virtual void collidableAddedCallback(const hkpCollidableAddedEvent* a_arg1);      // 00
		virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent* a_arg1);  // 01
		virtual ~hkpPhantomOverlapListener() = default;                                   // 02
	};
}
