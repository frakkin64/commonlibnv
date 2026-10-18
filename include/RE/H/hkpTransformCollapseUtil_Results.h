#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpTransformCollapseUtil_Results
	{
	public:
		void report() const
		{
			using func_t = decltype(&hkpTransformCollapseUtil_Results::report);
			static REL::Relocation<func_t> func{ Offsets::hkpTransformCollapseUtil_Results::report };
			func(this);
		}

	public:
		// members
		std::int32_t m_numCollapsedShapes;              // 00?
		std::int32_t m_numIdentityTransformsRemoved;    // 04?
		std::int32_t m_numSpecializedTransformShapes;   // 08?
		std::int32_t m_numPropagatedTransformsToLists;  // 0C?
	};
}
