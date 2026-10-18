#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpMoppCostFunction :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppCostFunction };
		static constexpr auto VTABLE{ VTABLE::hkpMoppCostFunction };

		class hkpMoppSplitCostParams;

		class hkpMoppSplitCostParams
		{
		public:
			// members
			float m_weightPrimitiveSplit;          // 00?
			float m_weightPlaneDistance;           // 04?
			float m_weightNumUnbalancedTriangles;  // 08?
			float m_weightPlanePosition;           // 0C?
			float m_weightPrimitiveIdSpread;       // 10?
			float m_queryErrorTolerance;           // 14?
		};

		// override (hkReferencedObject)
		virtual ~hkpMoppCostFunction() = default;  // 00

		// members
		hkpMoppCostFunction::hkpMoppSplitCostParams m_userScaling;  // 08?
	};
}
