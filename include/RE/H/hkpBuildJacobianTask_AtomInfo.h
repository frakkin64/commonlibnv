#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkTransform;
	class hkpConstraintAtom;
	class hkpConstraintInstance;

	class hkpBuildJacobianTask_AtomInfo
	{
	public:
		// members
		hkpConstraintAtom*     m_atoms;              // 00?
		hkpConstraintInstance* m_instance;           // 04?
		void*                  m_runtime;            // 08?
		const hkTransform*     m_transformA;         // 0C?
		const hkTransform*     m_transformB;         // 10?
		std::uint16_t          m_atomsSize;          // 14?
		std::uint16_t          m_runtimeSize;        // 16?
		std::uint16_t          m_accumulatorIndexA;  // 18?
		std::uint16_t          m_accumulatorIndexB;  // 1A?
	};
}
