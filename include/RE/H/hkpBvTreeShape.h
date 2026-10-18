#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkpShape.h"

namespace RE
{
	class hkAabb;
	class hkTransform;
	class hkVector4;

	class hkpBvTreeShape :
		public hkpShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBvTreeShape };
		static constexpr auto VTABLE{ VTABLE::hkpBvTreeShape };

		enum class BvTreeType : std::int32_t
		{
			kBVTREE_MOPP = 0x0,
			kBVTREE_TRISAMPLED_HEIGHTFIELD = 0x1,
			kBVTREE_USER = 0x2,
			kBVTREE_MAX = 0x3,
		};

		// override (hkpShape)
		virtual ~hkpBvTreeShape() = default;  // 00

		// add
		virtual void queryObb(const hkTransform* a_arg1, const hkVector4* a_arg2, float a_arg3, hkArray<std::uint32_t, hkContainerHeapAllocator>* a_arg4);  // 0B
		virtual void queryAabb(const hkAabb* a_arg1, hkArray<std::uint32_t, hkContainerHeapAllocator>* a_arg2);                                             // 0C
		virtual std::uint32_t queryAabbImpl(const hkAabb* a_arg1, std::uint32_t* a_arg2, std::int32_t a_arg3);                                              // 0D

		// members
		hkEnum<hkpBvTreeShape::BvTreeType, std::uint8_t> m_bvTreeType;  // 10?
		std::uint8_t                                     pad11[0x3];    // 11
	};
}
