#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkPadSpu.h"

namespace RE
{
	class hkpCollisionQualityInfo
	{
	public:
		// members
		float                  m_keepContact;               // 00?
		float                  m_create4dContact;           // 04?
		float                  m_createContact;             // 08?
		float                  m_manifoldTimDistance;       // 0C?
		hkPadSpu<std::int32_t> m_useContinuousPhysics;      // 10?
		hkBool                 m_useSimpleToiHandling;      // 14?
		std::uint8_t           pad15[0x3];                  // 15
		float                  m_minSeparation;             // 18?
		float                  m_minExtraSeparation;        // 1C?
		float                  m_minSafeDeltaTime;          // 20?
		float                  m_minAbsoluteSafeDeltaTime;  // 24?
		float                  m_toiSeparation;             // 28?
		float                  m_toiExtraSeparation;        // 2C?
		float                  m_toiAccuracy;               // 30?
		float                  m_maxContraintViolation;     // 34?
		float                  m_minToiDeltaTime;           // 38?
		std::uint16_t          m_constraintPriority;        // 3C?
		hkBool                 m_enableToiWeldRejection;    // 3E?
		std::uint8_t           pad3F;                       // 3F
	};
}
