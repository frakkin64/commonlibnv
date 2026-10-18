#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkpContactListener.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;
	class hkpRigidBody;

	class hkpToiCountViewer :
		public hkpWorldViewerBase,  // 00
		public hkpContactListener,  // 28
		public hkpWorldPostSimulationListener,  // 2C
		public hkpEntityListener  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpToiCountViewer };
		static constexpr auto VTABLE{ VTABLE::hkpToiCountViewer };

		enum class DisplayPosition : std::int32_t
		{
			kPOSITIVE_X = 0x0,
			kPOSITIVE_Y = 0x1,
			kPOSITIVE_Z = 0x2,
			kNEGATIVE_X = 0x3,
			kNEGATIVE_Y = 0x4,
			kNEGATIVE_Z = 0x5,
		};

		hkpToiCountViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpToiCountViewer*(__thiscall*)(hkpToiCountViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpToiCountViewer::ctor };
			return func(this, contexts);
		}

		static void registerViewer()
		{
			using func_t = decltype(&hkpToiCountViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpToiCountViewer::registerViewer };
			func();
		}

		void displayCountForBody(hkpRigidBody* body, hkpToiCountViewer::DisplayPosition displayPosition)
		{
			using func_t = decltype(&hkpToiCountViewer::displayCountForBody);
			static REL::Relocation<func_t> func{ Offsets::hkpToiCountViewer::displayCountForBody };
			func(this, body, displayPosition);
		}

	public:
		// members
		hkPointerMap<hkpRigidBody*, std::uint32_t, hkContainerHeapAllocator> m_toiCounts;  // 34?
	};
}
