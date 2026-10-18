#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpVehicleFrictionDescription
	{
	public:
		class AxisDescription;

		class AxisDescription
		{
		public:
			// members
			float m_frictionCircleYtab[16];   // 00?
			float m_xStep;                    // 40?
			float m_xStart;                   // 44?
			float m_wheelSurfaceInertia;      // 48?
			float m_wheelSurfaceInertiaInv;   // 4C?
			float m_wheelChassisMassRatio;    // 50?
			float m_wheelRadius;              // 54?
			float m_wheelRadiusInv;           // 58?
			float m_wheelDownForceFactor;     // 5C?
			float m_wheelDownForceSumFactor;  // 60?
		};

		// members
		float                                          m_wheelDistance;   // 00?
		float                                          m_chassisMassInv;  // 04?
		hkpVehicleFrictionDescription::AxisDescription m_axleDescr[2];    // 08?
	};
}
