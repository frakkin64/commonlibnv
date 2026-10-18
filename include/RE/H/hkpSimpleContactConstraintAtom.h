#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpSimpleContactConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_sizeOfAllAtoms, m_numContactPoints, m_numReservedContactPoints, m_numUserDatasForBodyA, m_numUserDatasForBodyB, m_contactPointPropertiesStriding, m_maxNumContactPoints, m_info
	};
}
