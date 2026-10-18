#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBroadPhaseCastCollector.h"
#include "RE/H/hkpLinearCastCollisionInput.h"
#include "RE/H/hkpShapeType.h"

namespace RE
{
	class hkpBroadPhaseHandle;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollidableCollidableFilter;
	class hkpLinearCastInput;

	class alignas(16) hkpWorldLinearCaster :
		public hkpBroadPhaseCastCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldLinearCaster };
		static constexpr auto VTABLE{ VTABLE::hkpWorldLinearCaster };

		// override (hkpBroadPhaseCastCollector)
		virtual ~hkpWorldLinearCaster() = default;                                                           // 00
		virtual float addBroadPhaseHandle(const hkpBroadPhaseHandle* a_arg1, std::int32_t a_arg2) override;  // 01

		// members
		const hkpLinearCastInput*            m_input;                // 04?
		const hkpCollidableCollidableFilter* m_filter;               // 08?
		hkpCdPointCollector*                 m_castCollector;        // 0C?
		hkpCdPointCollector*                 m_startPointCollector;  // 10?
		const hkpCollidable*                 m_collidableA;          // 14?
		hkpShapeType                         m_typeA;                // 18?
		std::uint32_t                        pad1C;                  // 1C
		hkpLinearCastCollisionInput          m_shapeInput;           // 20?
	};
}
