#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpActionListener.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkpVehicleInstance;

	class hkpVehicleViewer :
		public hkpWorldViewerBase,  // 00
		public hkpActionListener,  // 28
		public hkpWorldPostSimulationListener  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleViewer };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpVehicleViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpVehicleViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpVehicleViewer::registerViewer };
			func();
		}

	public:
		// members
		hkArray<hkpVehicleInstance*, hkContainerHeapAllocator> m_vehicles;  // 30?
	};
}
