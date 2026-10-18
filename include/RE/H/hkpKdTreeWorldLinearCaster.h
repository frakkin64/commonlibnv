#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkKdTreeCastCollector.h"
#include "RE/H/hkpLinearCastCollisionInput.h"
#include "RE/H/hkpShapeType.h"

namespace RE
{
	class hkBool;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollidableCollidableFilter;
	class hkpLinearCastInput;

	class alignas(16) hkpKdTreeWorldLinearCaster :
		public hkKdTreeCastCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpKdTreeWorldLinearCaster };
		static constexpr auto VTABLE{ VTABLE::hkpKdTreeWorldLinearCaster };

		// override (hkKdTreeCastCollector)
		virtual ~hkpKdTreeWorldLinearCaster() = default;                                // 00
		virtual hkBool* addMidPhaseHit(hkBool* a_arg1, std::uint32_t a_arg2) override;  // 01
		virtual hkBool* hasHit(hkBool* a_arg1) override;                                // 02
		virtual float getHitFraction() override;                                        // 03

		// members
		const hkpLinearCastInput*            m_input;                // 04
		const hkpCollidableCollidableFilter* m_filter;               // 08
		hkpCdPointCollector*                 m_castCollector;        // 0C
		hkpCdPointCollector*                 m_startPointCollector;  // 10
		const hkpCollidable*                 m_collidableA;          // 14?
		hkEnum<hkpShapeType, std::int32_t>   m_typeA;                // 18?
		std::uint32_t                        pad1C;                  // 1C
		hkpLinearCastCollisionInput          m_shapeInput;           // 20?
	};
}
