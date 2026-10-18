#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CSpeedTreeRT_EWindMethod.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CWindEngine
	{
	public:
		// members
		float                    m_fTimeFrequencyShift;     // 00?
		float                    m_fWindStrength;           // 04?
		CSpeedTreeRT_EWindMethod m_eBranchMethod;           // 08?
		CSpeedTreeRT_EWindMethod m_eFrondMethod;            // 0C?
		CSpeedTreeRT_EWindMethod m_eLeafMethod;             // 10?
		bool                     m_bRockingLeaves;          // 14?
		std::uint8_t             pad15[0x3];                // 15
		float                    m_fLeafFactors[2];         // 18?
		float                    m_fLeafFrequency;          // 20?
		float                    m_fLeafThrow;              // 24?
		std::uint32_t            m_nStartingMatrix;         // 28?
		std::uint32_t            m_nMatrixSpan;             // 2C?
		std::uint32_t            m_uiNumLeafAngles;         // 30?
		const float*             m_pRockingAngles;          // 34?
		const float*             m_pRustleAngles;           // 38?
		float                    m_fSpeedWindRockScalar;    // 3C?
		float                    m_fSpeedWindRustleScalar;  // 40?
	};
}
