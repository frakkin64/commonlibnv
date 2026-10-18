#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkRotation.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpVehicleFrictionDescription.h"
#include "RE/H/hkpVehicleSuspension_SuspensionWheelParameters.h"

namespace RE
{
	class hkpRigidBody;

	class alignas(16) hkpVehicleData :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleData };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleData };

		class WheelComponentParams;

		class WheelComponentParams
		{
		public:
			// members
			float        m_radius;                      // 00?
			float        m_mass;                        // 04?
			float        m_width;                       // 08?
			float        m_friction;                    // 0C?
			float        m_viscosityFriction;           // 10?
			float        m_maxFriction;                 // 14?
			float        m_slipAngle;                   // 18?
			float        m_forceFeedbackMultiplier;     // 1C?
			float        m_maxContactBodyAcceleration;  // 20?
			char         m_axle;                        // 24?
			std::uint8_t pad25[0x3];                    // 25
		};

		// override (hkReferencedObject)
		virtual ~hkpVehicleData() = default;  // 00

		// add
		virtual void init(hkArray<hkpVehicleSuspension_SuspensionWheelParameters, hkContainerHeapAllocator> const& suspensionWheelParams, hkpRigidBody* chassis);  // 03

		// members
		std::uint8_t                                                            pad08[0x8];                          // 08
		hkVector4                                                               m_gravity;                           // 10?
		char                                                                    m_numWheels;                         // 20?
		std::uint8_t                                                            pad21[0xF];                          // 21
		hkRotation                                                              m_chassisOrientation;                // 30?
		float                                                                   m_torqueRollFactor;                  // 60?
		float                                                                   m_torquePitchFactor;                 // 64?
		float                                                                   m_torqueYawFactor;                   // 68?
		float                                                                   m_extraTorqueFactor;                 // 6C?
		float                                                                   m_maxVelocityForPositionalFriction;  // 70?
		float                                                                   m_chassisUnitInertiaYaw;             // 74?
		float                                                                   m_chassisUnitInertiaRoll;            // 78?
		float                                                                   m_chassisUnitInertiaPitch;           // 7C?
		float                                                                   m_frictionEqualizer;                 // 80?
		float                                                                   m_normalClippingAngleCos;            // 84?
		float                                                                   m_maxFrictionSolverMassRatio;        // 88?
		hkArray<hkpVehicleData::WheelComponentParams, hkContainerHeapAllocator> m_wheelParams;                       // 8C?
		hkArray<std::int8_t, hkContainerHeapAllocator>                          m_numWheelsPerAxle;                  // 98?
		hkpVehicleFrictionDescription                                           m_frictionDescription;               // A4?
		std::uint8_t                                                            pad174[0xC];                         // 174
		hkVector4                                                               m_chassisFrictionInertiaInvDiag;     // 180?
		hkBool                                                                  m_alreadyInitialised;                // 190?
		std::uint8_t                                                            pad191[0xF];                         // 191
	};
}
