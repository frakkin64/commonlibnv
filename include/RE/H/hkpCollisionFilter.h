#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpCollidableCollidableFilter.h"
#include "RE/H/hkpRayCollidableFilter.h"
#include "RE/H/hkpRayShapeCollectionFilter.h"
#include "RE/H/hkpShapeCollectionFilter.h"

namespace RE
{
	class hkpCollisionFilter :
		public hkReferencedObject,  // 00
		public hkpCollidableCollidableFilter,  // 08
		public hkpShapeCollectionFilter,  // 0C
		public hkpRayShapeCollectionFilter,  // 10
		public hkpRayCollidableFilter  // 14
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCollisionFilter };
		static constexpr auto VTABLE{ VTABLE::hkpCollisionFilter };

		enum class hkpFilterType : std::int32_t
		{
			kHK_FILTER_UNKNOWN = 0x0,
			kHK_FILTER_NULL = 0x1,
			kHK_FILTER_GROUP = 0x2,
			kHK_FILTER_LIST = 0x3,
			kHK_FILTER_CUSTOM = 0x4,
			kHK_FILTER_PAIR = 0x5,
			kHK_FILTER_CONSTRAINT = 0x6,
		};

		// override (hkReferencedObject)
		virtual ~hkpCollisionFilter() = default;  // 00

		// members
		std::uint32_t                                            m_prepad[2];   // 18?
		hkEnum<hkpCollisionFilter::hkpFilterType, std::uint32_t> m_type;        // 20?
		std::uint32_t                                            m_postpad[3];  // 24?
	};
}
