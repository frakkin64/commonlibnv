#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkVector4;
	class hkVector4Comparison;

	class __declspec(novtable) hkKdTreeBundleCastCollector
	{
	public:
		static constexpr auto RTTI{ RTTI::hkKdTreeBundleCastCollector };
		static constexpr auto VTABLE{ VTABLE::hkKdTreeBundleCastCollector };

		// add
		virtual ~hkKdTreeBundleCastCollector() = default;                                      // 00
		virtual void addMidPhaseHit(std::uint32_t a_arg1, const hkVector4Comparison* a_arg2);  // 01
		virtual void getHitFractions(hkVector4* a_arg1);                                       // 02
	};
}
