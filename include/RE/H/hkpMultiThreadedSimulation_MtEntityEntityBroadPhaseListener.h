#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBroadPhaseListener.h"

namespace RE
{
	class hkpMultiThreadedSimulation;
	class hkpTypedBroadPhaseHandlePair;

	class hkpMultiThreadedSimulation_MtEntityEntityBroadPhaseListener :
		public hkpBroadPhaseListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMultiThreadedSimulation_MtEntityEntityBroadPhaseListener };
		static constexpr auto VTABLE{ VTABLE::hkpMultiThreadedSimulation_MtEntityEntityBroadPhaseListener };

		// override (hkpBroadPhaseListener)
		virtual ~hkpMultiThreadedSimulation_MtEntityEntityBroadPhaseListener() = default;  // 00
		virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair* a_arg1) override;      // 01
		virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair* a_arg1) override;   // 02

		// members
		hkpMultiThreadedSimulation* m_simulation;  // 04?
	};
}
