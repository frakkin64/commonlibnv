#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpRejectChassisListener.h"
#include "RE/H/hkpVehicleWheelCollide.h"

namespace RE
{
	class hkBool;
	class hkpAabbPhantom;
	class hkpCollidable;
	class hkpCollisionFilter;
	class hkpPairLinearCastCommand;
	class hkpPhantom;
	class hkpRootCdPoint;
	class hkpShape;
	class hkpVehicleInstance;
	class hkpVehicleWheelCollide_CollisionDetectionWheelOutput;
	class hkpWorld;

	class hkpVehicleLinearCastWheelCollide :
		public hkpVehicleWheelCollide  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleLinearCastWheelCollide };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleLinearCastWheelCollide };

		class WheelState;

		class alignas(16) WheelState
		{
		public:
			// members
			hkpAabbPhantom* m_phantom;    // 00?
			const hkpShape* m_shape;      // 04?
			std::uint8_t    pad08[0x8];   // 08
			hkTransform     m_transform;  // 10?
			hkVector4       m_to;         // 50?
		};

		// override (hkpVehicleWheelCollide)
		virtual ~hkpVehicleLinearCastWheelCollide() = default;                                                                                                                 // 00
		virtual void init(const hkpVehicleInstance* a_arg1) override;                                                                                                          // 03
		virtual void collideWheels(const float a_arg1, const hkpVehicleInstance* a_arg2, hkpVehicleWheelCollide_CollisionDetectionWheelOutput* a_arg3) override;               // 04
		virtual void getPhantoms(hkArray<hkpPhantom*, hkContainerHeapAllocator>* a_arg1) override;                                                                             // 05
		virtual void updateBeforeCollisionDetection(const hkpVehicleInstance* a_arg1) override;                                                                                // 06
		virtual void addToWorld(hkpWorld* a_arg1) override;                                                                                                                    // 08
		virtual void removeFromWorld() override;                                                                                                                               // 09
		virtual void setCollisionFilterInfo(std::uint32_t a_arg1) override;                                                                                                    // 0A
		virtual void wheelCollideCallback(hkpVehicleInstance const* vehicle, std::uint8_t wheelIndex, hkpVehicleWheelCollide_CollisionDetectionWheelOutput& cdInfo) override;  // 0B

		// add
		virtual std::int32_t getTotalNumCommands();                                                                                                                                                         // 0C
		virtual std::int32_t getNumCommands(std::uint8_t a_arg1);                                                                                                                                           // 0D
		virtual std::int32_t buildLinearCastCommands(const hkpVehicleInstance* a_arg1, const hkpCollisionFilter* a_arg2, hkpCollidable* a_arg3, hkpPairLinearCastCommand* a_arg4, hkpRootCdPoint* a_arg5);  // 0E
		virtual const hkpRootCdPoint* determineNearestHit(std::uint8_t a_arg1, const hkpPairLinearCastCommand* a_arg2) const;                                                                               // 0F
		virtual hkBool* castSingleWheel(hkBool* a_arg1, const hkpVehicleInstance* a_arg2, std::uint8_t a_arg3, hkpRootCdPoint* a_arg4) const;                                                               // 10
		virtual void getCollisionOutputFromCastResult(const hkpVehicleInstance* a_arg1, std::uint8_t a_arg2, const hkpRootCdPoint* a_arg3, hkpVehicleWheelCollide_CollisionDetectionWheelOutput* a_arg4);   // 11
		virtual void getCollisionOutputWithoutHit(const hkpVehicleInstance* a_arg1, std::uint8_t a_arg2, hkpVehicleWheelCollide_CollisionDetectionWheelOutput* a_arg3);                                     // 12

		// members
		std::uint32_t                                                                   m_wheelCollisionFilterInfo;  // 0C?
		hkArray<hkpVehicleLinearCastWheelCollide::WheelState, hkContainerHeapAllocator> m_wheelStates;               // 10?
		hkpRejectChassisListener                                                        m_rejectChassisListener;     // 1C?
		float                                                                           m_maxExtraPenetration;       // 2C?
		float                                                                           m_startPointTolerance;       // 30?
	};
}
