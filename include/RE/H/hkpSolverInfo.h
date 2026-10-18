#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkHalf.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpSolverInfo
	{
	public:
		class DeactivationInfo;

		class DeactivationInfo
		{
		public:
			// members
			float  m_linearVelocityThresholdInv;      // 00?
			float  m_angularVelocityThresholdInv;     // 04?
			float  m_slowObjectVelocityMultiplier;    // 08?
			float  m_relativeSleepVelocityThreshold;  // 0C?
			float  m_maxDistSqrd[2];                  // 10?
			hkHalf m_maxRotSqrd[2];                   // 18?
		};

		// members
		float                           m_one;                                         // 00?
		float                           m_tau;                                         // 04?
		float                           m_damping;                                     // 08?
		float                           m_frictionTau;                                 // 0C?
		hkVector4                       m_globalAccelerationPerSubStep;                // 10?
		hkVector4                       m_globalAccelerationPerStep;                   // 20?
		hkVector4                       m_integrateVelocityFactor;                     // 30?
		hkVector4                       m_invIntegrateVelocityFactor;                  // 40?
		float                           m_dampDivTau;                                  // 50?
		float                           m_tauDivDamp;                                  // 54?
		float                           m_dampDivFrictionTau;                          // 58?
		float                           m_frictionTauDivDamp;                          // 5C?
		float                           m_contactRestingVelocity;                      // 60?
		hkpSolverInfo::DeactivationInfo m_deactivationInfo[6];                         // 64?
		float                           m_deltaTime;                                   // 10C?
		float                           m_invDeltaTime;                                // 110?
		std::int32_t                    m_numSteps;                                    // 114?
		std::int32_t                    m_numMicroSteps;                               // 118?
		float                           m_invNumMicroSteps;                            // 11C?
		float                           m_invNumSteps;                                 // 120?
		hkBool                          m_forceCoherentConstraintOrderingInSolver;     // 124?
		std::uint8_t                    m_deactivationNumInactiveFramesSelectFlag[2];  // 125?
		std::uint8_t                    m_deactivationIntegrateCounter;                // 127?
		float                           m_maxConstraintViolationSqrd;                  // 128?
		std::uint32_t                   pad12C;                                        // 12C
	};
}
