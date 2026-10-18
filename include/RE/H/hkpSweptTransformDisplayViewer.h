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

	class hkpSweptTransformDisplayViewer :
		public hkpWorldViewerBase,  // 00
		public hkpEntityListener,  // 28
		public hkpWorldPostSimulationListener  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSweptTransformDisplayViewer };
		static constexpr auto VTABLE{ VTABLE::hkpSweptTransformDisplayViewer };

		class WorldToEntityData;

		class WorldToEntityData
		{
		public:
			// members
			hkpWorld*                                        world;            // 00?
			hkArray<std::uint32_t, hkContainerHeapAllocator> entitiesCreated;  // 04?
		};

		// override (hkpWorldViewerBase)
		virtual ~hkpSweptTransformDisplayViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpSweptTransformDisplayViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpSweptTransformDisplayViewer::registerViewer };
			func();
		}

	protected:
		std::int32_t findWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpSweptTransformDisplayViewer::findWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpSweptTransformDisplayViewer::findWorld };
			return func(this, world);
		}

		void removeAllGeometries(std::int32_t worldIndex)
		{
			using func_t = decltype(&hkpSweptTransformDisplayViewer::removeAllGeometries);
			static REL::Relocation<func_t> func{ Offsets::hkpSweptTransformDisplayViewer::removeAllGeometries };
			func(this, worldIndex);
		}

		hkpSweptTransformDisplayViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpSweptTransformDisplayViewer*(__thiscall*)(hkpSweptTransformDisplayViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpSweptTransformDisplayViewer::ctor };
			return func(this, contexts);
		}

		void addWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpSweptTransformDisplayViewer::addWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpSweptTransformDisplayViewer::addWorld };
			func(this, world);
		}

		void removeWorld(std::int32_t i)
		{
			using func_t = decltype(&hkpSweptTransformDisplayViewer::removeWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpSweptTransformDisplayViewer::removeWorld };
			func(this, i);
		}

	public:
		// members
		hkArray<hkpSweptTransformDisplayViewer::WorldToEntityData*, hkContainerHeapAllocator> m_worldEntities;  // 30?
	};
}
