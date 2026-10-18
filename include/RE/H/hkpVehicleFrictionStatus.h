#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpVehicleFrictionStatus
	{
	public:
		class AxisStatus;

		class AxisStatus
		{
		public:
			// members
			float m_forward_slip_velocity;    // 00?
			float m_side_slip_velocity;       // 04?
			float m_skid_energy_density;      // 08?
			float m_side_force;               // 0C?
			float m_delayed_forward_impulse;  // 10?
			float m_sideRhs;                  // 14?
			float m_forwardRhs;               // 18?
			float m_relativeSideForce;        // 1C?
			float m_relativeForwardForce;     // 20?
		};

		// members
		hkpVehicleFrictionStatus::AxisStatus m_axis[2];  // 00?
	};
}
