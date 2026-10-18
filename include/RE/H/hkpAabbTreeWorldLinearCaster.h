#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkpLinearCastCollisionInput.h"
#include "RE/H/hkpShapeType.h"
#include "RE/T/T.h"

namespace RE
{
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollidableCollidableFilter;
	class hkpLinearCastInput;

	template <class T>
	class hkpAabbTreeWorldLinearCaster :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint16_t>::Collector,  // 00
		public hkAabbTreeQueryUtils<T, std::uint16_t>::Collector  // 04
	{
	public:
		// members
		const hkpLinearCastInput* m_input;
		const hkpCollidableCollidableFilter* m_filter;
		hkpCdPointCollector* m_castCollector;
		hkpCdPointCollector* m_startPointCollector;
		const hkpCollidable* m_collidableA;
		hkpShapeType m_typeA;
		hkpLinearCastCollisionInput m_shapeInput;
	};
}
