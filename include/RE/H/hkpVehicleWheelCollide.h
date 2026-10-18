#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleWheelCollide_CollisionDetectionWheelOutput.h"

namespace RE
{
	class hkpPhantom;
	class hkpRigidBody;
	class hkpVehicleInstance;
	class hkpWorld;

	class hkpVehicleWheelCollide :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleWheelCollide };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleWheelCollide };

		using CollisionDetectionWheelOutput = hkpVehicleWheelCollide_CollisionDetectionWheelOutput;

		// override (hkReferencedObject)
		virtual ~hkpVehicleWheelCollide() = default;  // 00

		// add
		virtual void init(const hkpVehicleInstance* a_arg1);                                                                                                          // 03
		virtual void collideWheels(const float a_arg1, const hkpVehicleInstance* a_arg2, hkpVehicleWheelCollide_CollisionDetectionWheelOutput* a_arg3);               // 04
		virtual void getPhantoms(hkArray<hkpPhantom*, hkContainerHeapAllocator>* a_arg1);                                                                             // 05
		virtual void updateBeforeCollisionDetection(const hkpVehicleInstance* a_arg1);                                                                                // 06
		virtual hkpVehicleWheelCollide* clone(const hkpRigidBody* a_arg1, const hkArray<hkpPhantom*, hkContainerHeapAllocator>* a_arg2);                              // 07
		virtual void addToWorld(hkpWorld* a_arg1);                                                                                                                    // 08
		virtual void removeFromWorld();                                                                                                                               // 09
		virtual void setCollisionFilterInfo(std::uint32_t a_arg1);                                                                                                    // 0A
		virtual void wheelCollideCallback(hkpVehicleInstance const* vehicle, std::uint8_t wheelIndex, hkpVehicleWheelCollide_CollisionDetectionWheelOutput& cdInfo);  // 0B

		// members
		// not placed: m_type(misaligned)
		hkBool       m_alreadyUsed;  // 08
		std::uint8_t pad09[0x3];     // 09
	};
	static_assert(sizeof(hkpVehicleWheelCollide) == 0xC);
}
