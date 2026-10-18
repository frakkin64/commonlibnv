#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDisplayBox.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkpRigidBody;
	class hkpWorld;

	class hkpRigidBodyInertiaViewer :
		public hkpWorldViewerBase,  // 00
		public hkpEntityListener,  // 28
		public hkpWorldPostSimulationListener  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRigidBodyInertiaViewer };
		static constexpr auto VTABLE{ VTABLE::hkpRigidBodyInertiaViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpRigidBodyInertiaViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpRigidBodyInertiaViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBodyInertiaViewer::registerViewer };
			func();
		}

	protected:
		void removeWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpRigidBodyInertiaViewer::removeWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBodyInertiaViewer::removeWorld };
			func(this, world);
		}

		void addWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpRigidBodyInertiaViewer::addWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBodyInertiaViewer::addWorld };
			func(this, world);
		}

	public:
		// members
		hkArray<hkpRigidBody*, hkContainerHeapAllocator> m_entitiesCreated;  // 30?
		hkArray<hkDisplayBox, hkContainerHeapAllocator>  m_displayBoxes;     // 3C?
	};
}
