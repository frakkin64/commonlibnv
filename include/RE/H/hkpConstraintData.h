#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpConstraintData_ConstraintInfo.h"
#include "RE/H/hkpConstraintData_RuntimeInfo.h"

namespace RE
{
	class hkpConstraintData :
		public hkReferencedObject  // 00
	{
	public:
		using ConstraintInfo = hkpConstraintData_ConstraintInfo;
		using RuntimeInfo = hkpConstraintData_RuntimeInfo;

		// members
		std::uint32_t m_userData;  // 08
	};
	static_assert(sizeof(hkpConstraintData) == 0xC);
}
