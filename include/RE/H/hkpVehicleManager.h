#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkStepInfo;
	class hkpVehicleInstance;

	class hkpVehicleManager :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleManager };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleManager };

		// override (hkReferencedObject)
		virtual ~hkpVehicleManager() = default;  // 00

		// add
		virtual void addVehicle(hkpVehicleInstance* vehicle);     // 03
		virtual void removeVehicle(hkpVehicleInstance* vehicle);  // 04
		virtual void stepVehicles(hkStepInfo const& stepInfo);    // 05

		// members
		hkArray<hkpVehicleInstance*, hkContainerHeapAllocator> m_registeredVehicles;  // 08
	};
	static_assert(sizeof(hkpVehicleManager) == 0x14);
}
