#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpConstraintInfo.h"

namespace RE
{
	class hkpConstraintModifier;
	class hkpConstraintMotor;

	class hkpGenericConstraintDataScheme
	{
	public:
		// members
		hkpConstraintInfo                                         m_info;       // 00?
		hkArray<hkVector4, hkContainerHeapAllocator>              m_data;       // 10?
		hkArray<std::int32_t, hkContainerHeapAllocator>           m_commands;   // 1C?
		hkArray<hkpConstraintModifier*, hkContainerHeapAllocator> m_modifiers;  // 28?
		hkArray<hkpConstraintMotor*, hkContainerHeapAllocator>    m_motors;     // 34?
	};
}
