#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpAction.h"

namespace RE
{
	class hkStepInfo;
	class hkpConstraintChainInstance;
	class hkpEntity;

	class hkpConstraintChainInstanceAction :
		public hkpAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintChainInstanceAction };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintChainInstanceAction };

		// override (hkpAction)
		virtual ~hkpConstraintChainInstanceAction() = default;                                     // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;                               // 03
		virtual void getEntities(hkArray<hkpEntity*, hkContainerHeapAllocator>* a_arg1) override;  // 04
		virtual void entityRemovedCallback(hkpEntity* a_arg1) override;                            // 06

		// members
		hkpConstraintChainInstance* m_constraintInstance;  // 18?
	};
}
