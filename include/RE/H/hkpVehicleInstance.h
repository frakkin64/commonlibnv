#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpUnaryAction.h"
#include "RE/H/hkpVehicleFrictionStatus.h"
#include "RE/H/hkpVehicleInstance_WheelInfo.h"

namespace RE
{
	class hkQuaternion;
	class hkStepInfo;
	class hkVector4;
	class hkpPhantom;
	class hkpRigidBody;
	class hkpTyremarksInfo;
	class hkpVehicleAerodynamics;
	class hkpVehicleAerodynamics_AerodynamicsDragOutput;
	class hkpVehicleBrake;
	class hkpVehicleBrake_WheelBreakingOutput;
	class hkpVehicleData;
	class hkpVehicleDriverInput;
	class hkpVehicleDriverInputStatus;
	class hkpVehicleDriverInput_FilteredDriverInputOutput;
	class hkpVehicleEngine;
	class hkpVehicleSteering;
	class hkpVehicleSuspension;
	class hkpVehicleTransmission;
	class hkpVehicleVelocityDamper;
	class hkpVehicleWheelCollide;
	class hkpVehicleWheelCollide_CollisionDetectionWheelOutput;
	class hkpVelocityAccumulator;
	class hkpWorld;

	class hkpVehicleInstance :
		public hkpUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleInstance };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleInstance };

		using WheelInfo = hkpVehicleInstance_WheelInfo;

		// override (hkpUnaryAction)
		virtual ~hkpVehicleInstance() = default;                                                         // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;                                     // 03
		virtual void getPhantoms(hkArray<hkpPhantom*, hkContainerHeapAllocator>& phantomsOut) override;  // 05

		// add
		virtual void init();                                                                                                                                                              // 08
		virtual void addToWorld(hkpWorld* world);                                                                                                                                         // 09
		virtual void removeFromWorld();                                                                                                                                                   // 0A
		virtual void calcCurrentPositionAndRotation(hkpRigidBody const* chassis, hkpVehicleSuspension const* suspension, std::int32_t wheelNo, hkVector4& posOut, hkQuaternion& rotOut);  // 0B
		virtual float calcRPM() const;                                                                                                                                                    // 0C
		virtual float calcKMPH() const;                                                                                                                                                   // 0D
		virtual float calcMPH() const;                                                                                                                                                    // 0E
		virtual void handleFixedGroundAccum(hkpRigidBody* ground, hkpVelocityAccumulator& accum);                                                                                         // 0F

		void updateBeforeCollisionDetection()
		{
			using func_t = decltype(&hkpVehicleInstance::updateBeforeCollisionDetection);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::updateBeforeCollisionDetection };
			func(this);
		}

		void stepVehicleUsingWheelCollideOutput(hkStepInfo const& stepInfo, hkpVehicleWheelCollide_CollisionDetectionWheelOutput const* cdInfo)
		{
			using func_t = decltype(&hkpVehicleInstance::stepVehicleUsingWheelCollideOutput);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::stepVehicleUsingWheelCollideOutput };
			func(this, stepInfo, cdInfo);
		}

		void stepVehicle(hkStepInfo const& stepInfo)
		{
			using func_t = decltype(&hkpVehicleInstance::stepVehicle);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::stepVehicle };
			func(this, stepInfo);
		}

		hkpVehicleInstance& operator_call(hkpVehicleInstance const& __that)
		{
			using func_t = decltype(&hkpVehicleInstance::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::operator_call };
			return func(this, __that);
		}

	protected:
		void simulateVehicle(hkStepInfo const& stepInfo, hkpVehicleAerodynamics_AerodynamicsDragOutput const& aerodynamicsDragInfo, hkArray<float, hkContainerHeapAllocator> const& suspensionForceAtWheel, hkArray<float, hkContainerHeapAllocator> const& totalLinearForceAtWheel)
		{
			using func_t = decltype(&hkpVehicleInstance::simulateVehicle);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::simulateVehicle };
			func(this, stepInfo, aerodynamicsDragInfo, suspensionForceAtWheel, totalLinearForceAtWheel);
		}

		void updateBrake(float a_arg1, hkpVehicleDriverInput_FilteredDriverInputOutput const& a_arg2, hkpVehicleBrake_WheelBreakingOutput& filteredDriverInputInfo)
		{
			using func_t = decltype(&hkpVehicleInstance::updateBrake);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::updateBrake };
			func(this, a_arg1, a_arg2, filteredDriverInputInfo);
		}

		void updateSteering(float a_arg1, hkpVehicleDriverInput_FilteredDriverInputOutput const& a_arg2)
		{
			using func_t = decltype(&hkpVehicleInstance::updateSteering);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::updateSteering };
			func(this, a_arg1, a_arg2);
		}

		void updateComponents(hkStepInfo const& stepInfo, hkpVehicleWheelCollide_CollisionDetectionWheelOutput const* cdInfo, hkpVehicleAerodynamics_AerodynamicsDragOutput& aerodynamicsDragInfo, hkArray<float, hkContainerHeapAllocator>& suspensionForceAtWheel, hkArray<float, hkContainerHeapAllocator>& totalLinearForceAtWheel)
		{
			using func_t = decltype(&hkpVehicleInstance::updateComponents);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleInstance::updateComponents };
			func(this, stepInfo, cdInfo, aerodynamicsDragInfo, suspensionForceAtWheel, totalLinearForceAtWheel);
		}

	public:
		// members
		hkpVehicleData*                                                 m_data;                          // 1C
		hkpVehicleDriverInput*                                          m_driverInput;                   // 20
		hkpVehicleSteering*                                             m_steering;                      // 24
		hkpVehicleEngine*                                               m_engine;                        // 28
		hkpVehicleTransmission*                                         m_transmission;                  // 2C
		hkpVehicleBrake*                                                m_brake;                         // 30
		hkpVehicleSuspension*                                           m_suspension;                    // 34
		hkpVehicleAerodynamics*                                         m_aerodynamics;                  // 38
		hkpVehicleWheelCollide*                                         m_wheelCollide;                  // 3C
		hkpTyremarksInfo*                                               m_tyreMarks;                     // 40
		hkpVehicleVelocityDamper*                                       m_velocityDamper;                // 44
		hkArray<hkpVehicleInstance_WheelInfo, hkContainerHeapAllocator> m_wheelsInfo;                    // 48
		hkpVehicleFrictionStatus                                        m_frictionStatus;                // 54
		hkpVehicleDriverInputStatus*                                    m_deviceStatus;                  // 9C
		hkArray<hkBool, hkContainerHeapAllocator>                       m_isFixed;                       // A0
		float                                                           m_wheelsTimeSinceMaxPedalInput;  // AC
		hkBool                                                          m_tryingToReverse;               // B0
		std::uint8_t                                                    padB1[0x3];                      // B1
		float                                                           m_torque;                        // B4
		float                                                           m_rpm;                           // B8
		float                                                           m_mainSteeringAngle;             // BC?
		hkArray<float, hkContainerHeapAllocator>                        m_wheelsSteeringAngle;           // C0?
		hkBool                                                          m_isReversing;                   // CC?
		char                                                            m_currentGear;                   // CD?
		hkBool                                                          m_delayed;                       // CE?
		std::uint8_t                                                    padCF;                           // CF
		float                                                           m_clutchDelayCountdown;          // D0?
	};
}
