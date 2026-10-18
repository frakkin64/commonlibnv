#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConvexListFilter.h"
#include "RE/H/hkpConvexListFilter_ConvexListCollisionType.h"

namespace RE
{
	class hkpCdBody;
	class hkpCollisionInput;

	class hkpDefaultConvexListFilter :
		public hkpConvexListFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDefaultConvexListFilter };
		static constexpr auto VTABLE{ VTABLE::hkpDefaultConvexListFilter };

		// override (hkpConvexListFilter)
		virtual ~hkpDefaultConvexListFilter() = default;  // 00

		// add
		virtual hkpConvexListFilter_ConvexListCollisionType getConvexListCollisionType(const hkpCdBody* a_arg1, const hkpCdBody* a_arg2, const hkpCollisionInput* a_arg3) const;  // 03
	};
}
