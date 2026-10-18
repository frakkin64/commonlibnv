#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb16.h"
#include "RE/H/hkAabbTreeQueryUtils.h"

namespace RE
{
	class hkpRayCollidableFilter;
	class hkpRayHitCollector;
	class hkpRayShapeCollectionFilter;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class hkpAabbTreeCollidableRaycaster :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint16_t>::Collector,  // 00
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb16, std::uint16_t>::Collector  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAabbTreeCollidableRaycaster };
		static constexpr auto VTABLE{ VTABLE::hkpAabbTreeCollidableRaycaster };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint16_t>::Collector)
		virtual ~hkpAabbTreeCollidableRaycaster() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint16_t>::Node const* leaf);  // 01

		hkpAabbTreeCollidableRaycaster* ctor()
		{
			using func_t = hkpAabbTreeCollidableRaycaster*(__thiscall*)(hkpAabbTreeCollidableRaycaster*);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeCollidableRaycaster::ctor };
			return func(this);
		}

	public:
		// members
		const hkpWorldRayCastInput*        m_input;                // 08
		const hkpRayCollidableFilter*      m_filter;               // 0C
		const hkpRayShapeCollectionFilter* m_collectionFilter;     // 10
		hkpWorldRayCastOutput*             m_output;               // 14
		hkpRayHitCollector*                m_collector;            // 18?
		float                              m_earlyOutHitFraction;  // 1C?
	};
}
