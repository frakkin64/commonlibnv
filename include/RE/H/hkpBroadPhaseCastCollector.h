#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpBroadPhaseHandle;

	class __declspec(novtable) hkpBroadPhaseCastCollector
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBroadPhaseCastCollector };
		static constexpr auto VTABLE{ VTABLE::hkpBroadPhaseCastCollector };

		// add
		virtual ~hkpBroadPhaseCastCollector() = default;                                            // 00
		virtual float addBroadPhaseHandle(const hkpBroadPhaseHandle* a_arg1, std::int32_t a_arg2);  // 01
	};
}
