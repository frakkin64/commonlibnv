#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpTypedBroadPhaseHandlePair;

	class __declspec(novtable) hkpBroadPhaseListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBroadPhaseListener };
		static constexpr auto VTABLE{ VTABLE::hkpBroadPhaseListener };

		// add
		virtual ~hkpBroadPhaseListener() = default;                              // 00
		virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair* a_arg1);     // 01
		virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair* a_arg1);  // 02
	};
}
