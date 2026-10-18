#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkProcessContext.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpActionListener.h"
#include "RE/H/hkpConstraintListener.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpPhantomListener.h"
#include "RE/H/hkpWorldCinfo.h"
#include "RE/H/hkpWorldDeletionListener.h"

namespace RE
{
	class hkpPhysicsContextWorldListener;
	class hkpWorld;

	class hkpPhysicsContext :
		public hkReferencedObject,  // 00
		public hkProcessContext,  // 08
		public hkpWorldDeletionListener,  // 58
		public hkpEntityListener,  // 5C
		public hkpPhantomListener,  // 60
		public hkpConstraintListener,  // 64
		public hkpActionListener  // 68
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhysicsContext };
		static constexpr auto VTABLE{ VTABLE::hkpPhysicsContext };

		// override (hkReferencedObject)
		virtual ~hkpPhysicsContext() = default;  // 00

		static void registerAllPhysicsProcesses()
		{
			using func_t = decltype(&hkpPhysicsContext::registerAllPhysicsProcesses);
			static REL::Relocation<func_t> func{ Offsets::hkpPhysicsContext::registerAllPhysicsProcesses };
			func();
		}

	protected:
		void removeFromInspection(hkpWorld* w)
		{
			using func_t = decltype(&hkpPhysicsContext::removeFromInspection);
			static REL::Relocation<func_t> func{ Offsets::hkpPhysicsContext::removeFromInspection };
			func(this, w);
		}

		void addForInspection(hkpWorld* w)
		{
			using func_t = decltype(&hkpPhysicsContext::addForInspection);
			static REL::Relocation<func_t> func{ Offsets::hkpPhysicsContext::addForInspection };
			func(this, w);
		}

	public:
		// members
		hkArray<hkpWorld*, hkContainerHeapAllocator>                       m_worlds;        // 6C?
		hkArray<hkpWorldCinfo, hkContainerHeapAllocator>                   m_worldCinfos;   // 78?
		hkArray<hkpPhysicsContextWorldListener*, hkContainerHeapAllocator> m_addListeners;  // 84?
	};
}
