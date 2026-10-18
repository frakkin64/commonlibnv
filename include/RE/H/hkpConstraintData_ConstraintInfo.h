#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintInfo.h"

namespace RE
{
	class hkpConstraintAtom;

	class hkpConstraintData_ConstraintInfo :
		public hkpConstraintInfo  // 00
	{
	public:
		// members
		hkpConstraintAtom* m_atoms;           // 10
		std::uint32_t      m_sizeOfAllAtoms;  // 14?
	};
}
