#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;
	class hkpRigidBody;
	class hkpWorld;

	class hkpRigidBodyCentreOfMassViewer :
		public hkpWorldViewerBase,  // 00
		public hkpEntityListener,  // 28
		public hkpWorldPostSimulationListener  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRigidBodyCentreOfMassViewer };
		static constexpr auto VTABLE{ VTABLE::hkpRigidBodyCentreOfMassViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpRigidBodyCentreOfMassViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpRigidBodyCentreOfMassViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBodyCentreOfMassViewer::registerViewer };
			func();
		}

	protected:
		void removeWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpRigidBodyCentreOfMassViewer::removeWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBodyCentreOfMassViewer::removeWorld };
			func(this, world);
		}

		void addWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpRigidBodyCentreOfMassViewer::addWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBodyCentreOfMassViewer::addWorld };
			func(this, world);
		}

		hkpRigidBodyCentreOfMassViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpRigidBodyCentreOfMassViewer*(__thiscall*)(hkpRigidBodyCentreOfMassViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBodyCentreOfMassViewer::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkArray<hkpRigidBody*, hkContainerHeapAllocator> m_entitiesCreated;  // 30?
	};
}
