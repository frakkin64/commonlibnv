#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBroadPhaseListener.h"

namespace RE
{
	class hkCriticalSection;
	class hkpTypedBroadPhaseHandlePair;

	class hkpMultiThreadedSimulation_MtPhantomBroadPhaseListener :
		public hkpBroadPhaseListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMultiThreadedSimulation_MtPhantomBroadPhaseListener };
		static constexpr auto VTABLE{ VTABLE::hkpMultiThreadedSimulation_MtPhantomBroadPhaseListener };

		// override (hkpBroadPhaseListener)
		virtual ~hkpMultiThreadedSimulation_MtPhantomBroadPhaseListener() = default;      // 00
		virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair* a_arg1) override;     // 01
		virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair* a_arg1) override;  // 02

		// members
		hkCriticalSection* m_criticalSection;  // 04?
	};
}
