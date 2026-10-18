#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkpConstraintInstance_ConstraintPriority.h"

namespace RE
{
	class hkpConstraintAtom;
	class hkpConstraintInstance;
	class hkpEntity;

	class hkConstraintInternal
	{
	public:
		// members
		hkpConstraintInstance*                                         m_constraint;          // 00?
		hkpEntity*                                                     m_entities[2];         // 04?
		hkpConstraintAtom*                                             m_atoms;               // 0C?
		std::uint16_t                                                  m_atomsSize;           // 10?
		std::uint8_t                                                   m_callbackRequest;     // 12?
		std::uint8_t                                                   pad13;                 // 13
		hkEnum<hkpConstraintInstance_ConstraintPriority, std::uint8_t> m_priority;            // 14?
		std::uint8_t                                                   pad15;                 // 15
		std::uint16_t                                                  m_sizeOfSchemas;       // 16?
		std::uint16_t                                                  m_numSolverResults;    // 18?
		std::uint16_t                                                  m_numSolverElemTemps;  // 1A?
		std::uint8_t                                                   m_whoIsMaster;         // 1C?
		hkBool                                                         m_isNormalType;        // 1D?
		std::uint16_t                                                  pad1E;                 // 1E
		void*                                                          m_runtime;             // 20?
		std::uint16_t                                                  m_runtimeSize;         // 24?
		std::uint16_t                                                  m_slaveIndex;          // 26?
	};
}
