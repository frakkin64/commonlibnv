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
	class hkpWorld;

	class hkpConvexRadiusViewer :
		public hkpWorldViewerBase,  // 00
		public hkpEntityListener,  // 28
		public hkpWorldPostSimulationListener  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexRadiusViewer };
		static constexpr auto VTABLE{ VTABLE::hkpConvexRadiusViewer };

		class WorldToEntityData;

		class WorldToEntityData
		{
		public:
			// members
			hkpWorld*                                        world;            // 00?
			hkArray<std::uint32_t, hkContainerHeapAllocator> entitiesCreated;  // 04?
		};

		// override (hkpWorldViewerBase)
		virtual ~hkpConvexRadiusViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpConvexRadiusViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexRadiusViewer::registerViewer };
			func();
		}

	protected:
		std::int32_t findWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpConvexRadiusViewer::findWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexRadiusViewer::findWorld };
			return func(this, world);
		}

		void removeAllGeometries(std::int32_t worldIndex)
		{
			using func_t = decltype(&hkpConvexRadiusViewer::removeAllGeometries);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexRadiusViewer::removeAllGeometries };
			func(this, worldIndex);
		}

		hkpConvexRadiusViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpConvexRadiusViewer*(__thiscall*)(hkpConvexRadiusViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexRadiusViewer::ctor };
			return func(this, contexts);
		}

		void addWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpConvexRadiusViewer::addWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexRadiusViewer::addWorld };
			func(this, world);
		}

		void removeWorld(std::int32_t i)
		{
			using func_t = decltype(&hkpConvexRadiusViewer::removeWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexRadiusViewer::removeWorld };
			func(this, i);
		}

	public:
		// members
		hkArray<hkpConvexRadiusViewer::WorldToEntityData*, hkContainerHeapAllocator> m_worldEntities;       // 30?
		std::uint32_t                                                                m_fixedObjectColor;    // 3C?
		std::uint32_t                                                                m_movableObjectColor;  // 40?
	};
}
