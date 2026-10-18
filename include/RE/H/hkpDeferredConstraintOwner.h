#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkpConstraintOwner.h"
#include "RE/H/hkpFixedSizePhysicsCommandQueue.h"

namespace RE
{
	class hkpConstraintInstance;

	class hkpDeferredConstraintOwner :
		public hkpConstraintOwner  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDeferredConstraintOwner };
		static constexpr auto VTABLE{ VTABLE::hkpDeferredConstraintOwner };

		// override (hkpConstraintOwner)
		virtual ~hkpDeferredConstraintOwner() = default;                                                    // 00
		virtual void addConstraintToCriticalLockedIsland(hkpConstraintInstance* constraint) override;       // 03
		virtual void removeConstraintFromCriticalLockedIsland(hkpConstraintInstance* constraint) override;  // 04
		virtual void addCallbackRequest(hkpConstraintInstance* constraint, std::int32_t request) override;  // 05

		// members
		hkPadSpu<std::int32_t>               m_constraintAddRemoveCounter;       // 18
		hkPadSpu<hkpConstraintInstance*>     m_constraintForCommand;             // 1C
		hkPadSpu<std::int32_t>               m_callbackRequestForAddConstraint;  // 20
		hkpFixedSizePhysicsCommandQueue<256> m_commandQueue;                     // 24?
	};
}
