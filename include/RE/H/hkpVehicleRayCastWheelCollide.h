#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpRejectChassisListener.h"
#include "RE/H/hkpVehicleWheelCollide.h"

namespace RE
{
	class hkAabb;
	class hkpAabbPhantom;
	class hkpCollisionFilter;
	class hkpPhantom;
	class hkpShapeRayCastCommand;
	class hkpVehicleInstance;
	class hkpVehicleInstance_WheelInfo;
	class hkpVehicleWheelCollide_CollisionDetectionWheelOutput;
	class hkpWorld;
	class hkpWorldRayCastOutput;

	class hkpVehicleRayCastWheelCollide :
		public hkpVehicleWheelCollide  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleRayCastWheelCollide };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleRayCastWheelCollide };

		// override (hkpVehicleWheelCollide)
		virtual ~hkpVehicleRayCastWheelCollide() = default;                                                                                                       // 00
		virtual void init(const hkpVehicleInstance* a_arg1) override;                                                                                             // 03
		virtual void collideWheels(const float a_arg1, const hkpVehicleInstance* a_arg2, hkpVehicleWheelCollide_CollisionDetectionWheelOutput* a_arg3) override;  // 04
		virtual void getPhantoms(hkArray<hkpPhantom*, hkContainerHeapAllocator>* a_arg1) override;                                                                // 05
		virtual void updateBeforeCollisionDetection(const hkpVehicleInstance* a_arg1) override;                                                                   // 06
		virtual void addToWorld(hkpWorld* a_arg1) override;                                                                                                       // 08
		virtual void removeFromWorld() override;                                                                                                                  // 09
		virtual void setCollisionFilterInfo(std::uint32_t a_arg1) override;                                                                                       // 0A

		// add
		virtual std::int32_t buildRayCastCommands(const hkpVehicleInstance* a_arg1, const hkpCollisionFilter* a_arg2, std::int32_t a_arg3, hkpShapeRayCastCommand* a_arg4, hkpWorldRayCastOutput* a_arg5);        // 0C
		virtual void calcWheelsAABB(const hkpVehicleInstance* a_arg1, hkAabb* a_arg2) const;                                                                                                                      // 0D
		virtual void castSingleWheel(const hkpVehicleInstance_WheelInfo* a_arg1, hkpWorldRayCastOutput* a_arg2) const;                                                                                            // 0E
		virtual void getCollisionOutputFromCastResult(const hkpVehicleInstance* a_arg1, std::uint8_t a_arg2, const hkpWorldRayCastOutput* a_arg3, hkpVehicleWheelCollide_CollisionDetectionWheelOutput* a_arg4);  // 0F
		virtual void getCollisionOutputWithoutHit(const hkpVehicleInstance* a_arg1, std::uint8_t a_arg2, hkpVehicleWheelCollide_CollisionDetectionWheelOutput* a_arg3);                                           // 10

		// members
		std::uint32_t            m_wheelCollisionFilterInfo;  // 0C
		hkpAabbPhantom*          m_phantom;                   // 10?
		hkpRejectChassisListener m_rejectRayChassisListener;  // 14?
	};
}
