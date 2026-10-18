#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkKdTreeCastCollector.h"

namespace RE
{
	class hkBool;
	class hkpRayCollidableFilter;
	class hkpRayHitCollector;
	class hkpRayShapeCollectionFilter;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class hkpKdTreeCollidableRaycaster :
		public hkKdTreeCastCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpKdTreeCollidableRaycaster };
		static constexpr auto VTABLE{ VTABLE::hkpKdTreeCollidableRaycaster };

		// override (hkKdTreeCastCollector)
		virtual ~hkpKdTreeCollidableRaycaster() = default;                              // 00
		virtual hkBool* addMidPhaseHit(hkBool* a_arg1, std::uint32_t a_arg2) override;  // 01
		virtual hkBool* hasHit(hkBool* a_arg1) override;                                // 02
		virtual float getHitFraction() override;                                        // 03

		// members
		const hkpWorldRayCastInput*        m_input;             // 04?
		const hkpRayCollidableFilter*      m_filter;            // 08?
		const hkpRayShapeCollectionFilter* m_collectionFilter;  // 0C?
		hkpWorldRayCastOutput*             m_output;            // 10?
		hkpRayHitCollector*                m_collector;         // 14?
	};
}
