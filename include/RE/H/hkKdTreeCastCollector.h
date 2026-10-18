#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool;

	class __declspec(novtable) hkKdTreeCastCollector
	{
	public:
		static constexpr auto RTTI{ RTTI::hkKdTreeCastCollector };
		static constexpr auto VTABLE{ VTABLE::hkKdTreeCastCollector };

		// add
		virtual ~hkKdTreeCastCollector() = default;                            // 00
		virtual hkBool* addMidPhaseHit(hkBool* a_arg1, std::uint32_t a_arg2);  // 01
		virtual hkBool* hasHit(hkBool* a_arg1);                                // 02
		virtual float getHitFraction();                                        // 03
	};
}
