#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpConstraintInfo.h"

namespace RE
{
	class hkpConstraintInstance;

	class hkpConstraintOwner :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintOwner };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintOwner };

		// override (hkReferencedObject)
		virtual ~hkpConstraintOwner() = default;  // 00

		// add
		virtual void addConstraintToCriticalLockedIsland(hkpConstraintInstance* constraint);       // 03
		virtual void removeConstraintFromCriticalLockedIsland(hkpConstraintInstance* constraint);  // 04
		virtual void addCallbackRequest(hkpConstraintInstance* constraint, std::int32_t request);  // 05
		virtual void checkAccessRw();                                                              // 06

		// members
		hkpConstraintInfo m_constraintInfo;  // 08
	};
	static_assert(sizeof(hkpConstraintOwner) == 0x18);
}
