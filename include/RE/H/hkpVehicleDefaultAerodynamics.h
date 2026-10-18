#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpVehicleAerodynamics.h"

namespace RE
{
	class hkpVehicleAerodynamics_AerodynamicsDragOutput;
	class hkpVehicleInstance;

	class alignas(16) hkpVehicleDefaultAerodynamics :
		public hkpVehicleAerodynamics  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleDefaultAerodynamics };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleDefaultAerodynamics };

		// override (hkpVehicleAerodynamics)
		virtual ~hkpVehicleDefaultAerodynamics() = default;  // 00

		// add
		virtual void calcAerodynamics(float a_arg1, hkpVehicleInstance const* a_arg2, hkpVehicleAerodynamics_AerodynamicsDragOutput& vehicle);  // 03
		virtual float calcAerodynamicDrag(float a_arg1) const;                                                                                  // 04
		virtual float calcAerodynamicLift(float a_arg1) const;                                                                                  // 05

		// members
		// not placed: m_airDensity(absent), m_frontalArea(absent)
		float     m_dragCoefficient;  // 08
		float     m_liftCoefficient;  // 0C?
		hkVector4 m_extraGravityws;   // 10?
	};
}
