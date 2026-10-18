#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkDebugDisplayHandler;
	class hkProcessContext;
	class hkpEntity;
	class hkpShape;
	class hkpWorld;

	class hkpShapeDisplayViewer :
		public hkpWorldViewerBase,  // 00
		public hkpEntityListener,  // 28
		public hkpWorldPostSimulationListener  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapeDisplayViewer };
		static constexpr auto VTABLE{ VTABLE::hkpShapeDisplayViewer };

		class WorldToEntityData;

		class WorldToEntityData
		{
		public:
			// members
			hkpWorld*                                        world;            // 00?
			hkArray<std::uint32_t, hkContainerHeapAllocator> entitiesCreated;  // 04?
		};

		// override (hkpWorldViewerBase)
		virtual ~hkpShapeDisplayViewer() = default;  // 00

		// add
		virtual void synchronizeTransforms(hkDebugDisplayHandler* displayHandler, hkpWorld* world);  // 04 (reversed overload group)
		virtual void synchronizeTransforms(hkpWorld* world);                                         // 03 (reversed overload group)

		std::int32_t findWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpShapeDisplayViewer::findWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayViewer::findWorld };
			return func(this, world);
		}

		void removeAllGeometries(std::int32_t worldIndex)
		{
			using func_t = decltype(&hkpShapeDisplayViewer::removeAllGeometries);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayViewer::removeAllGeometries };
			func(this, worldIndex);
		}

		static void registerViewer()
		{
			using func_t = decltype(&hkpShapeDisplayViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayViewer::registerViewer };
			func();
		}

		void addWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpShapeDisplayViewer::addWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayViewer::addWorld };
			func(this, world);
		}

		void removeWorld(std::int32_t i)
		{
			using func_t = decltype(&hkpShapeDisplayViewer::removeWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayViewer::removeWorld };
			func(this, i);
		}

		static std::uint32_t getId(hkpEntity* entity)
		{
			using func_t = decltype(&hkpShapeDisplayViewer::getId);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayViewer::getId };
			return func(entity);
		}

	protected:
		hkpShapeDisplayViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpShapeDisplayViewer*(__thiscall*)(hkpShapeDisplayViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayViewer::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkArray<hkpShapeDisplayViewer::WorldToEntityData*, hkContainerHeapAllocator> m_worldEntities;               // 30?
		hkPointerMap<hkpShape const*, std::uint32_t, hkContainerHeapAllocator>       m_instancedShapeToGeomID;      // 3C?
		hkPointerMap<hkpShape const*, std::uint32_t, hkContainerHeapAllocator>       m_instancedShapeToUsageCount;  // 48?
		hkPointerMap<hkpShape const*, std::uint32_t, hkContainerHeapAllocator>       m_cachedShapes;                // 54?
		hkBool                                                                       m_enableShapeTransformUpdate;  // 60?
		hkBool                                                                       m_enableInstancing;            // 61?
		hkBool                                                                       m_enableDisplayCaching;        // 62?
		hkBool                                                                       m_enableDisplayCreation;       // 63?
		hkBool                                                                       m_autoGeometryCreation;        // 64?
		hkBool                                                                       m_enableAutoColor;             // 65?
		hkBool                                                                       m_enableAutoColorOverride;     // 66?
		std::uint8_t                                                                 pad67;                         // 67
		float                                                                        m_timeForDisplay;              // 68?
		std::uint32_t                                                                m_fixedObjectColor;            // 6C?
		std::uint32_t                                                                m_movableObjectColor;          // 70?
	};
}
