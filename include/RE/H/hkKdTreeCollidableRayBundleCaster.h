#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkKdTreeBundleCastCollector.h"

namespace RE
{
	class hkVector4Comparison;
	class hkpRayCollidableFilter;
	class hkpRayShapeCollectionFilter;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class hkKdTreeCollidableRayBundleCaster :
		public hkKdTreeBundleCastCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkKdTreeCollidableRayBundleCaster };
		static constexpr auto VTABLE{ VTABLE::hkKdTreeCollidableRayBundleCaster };

		// override (hkKdTreeBundleCastCollector)
		virtual ~hkKdTreeCollidableRayBundleCaster() = default;                                         // 00
		virtual void addMidPhaseHit(std::uint32_t a_arg1, const hkVector4Comparison* a_arg2) override;  // 01

		// members
		hkpWorldRayCastInput*              m_input;             // 04
		const hkpRayCollidableFilter*      m_filter;            // 08
		const hkpRayShapeCollectionFilter* m_collectionFilter;  // 0C
		hkpWorldRayCastOutput*             m_output;            // 10
	};
}
