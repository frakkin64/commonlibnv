#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpPhantomListener.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkpWorld;
	class hkpWorldObject;

	class hkpPhantomDisplayViewer :
		public hkpWorldViewerBase,  // 00
		public hkpPhantomListener,  // 28
		public hkpWorldPostSimulationListener  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhantomDisplayViewer };
		static constexpr auto VTABLE{ VTABLE::hkpPhantomDisplayViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpPhantomDisplayViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpPhantomDisplayViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpPhantomDisplayViewer::registerViewer };
			func();
		}

	protected:
		void removeWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpPhantomDisplayViewer::removeWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpPhantomDisplayViewer::removeWorld };
			func(this, world);
		}

		void addWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpPhantomDisplayViewer::addWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpPhantomDisplayViewer::addWorld };
			func(this, world);
		}

	public:
		// members
		hkArray<hkpWorldObject*, hkContainerHeapAllocator> m_phantomShapesCreated;  // 30?
	};
}
