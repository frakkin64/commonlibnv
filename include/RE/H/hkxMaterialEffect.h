#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxMaterialEffect :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxMaterialEffect };
		static constexpr auto VTABLE{ VTABLE::hkxMaterialEffect };

		enum class EffectType : std::int32_t
		{
			kEFFECT_TYPE_INVALID = 0x0,
			kEFFECT_TYPE_UNKNOWN = 0x1,
			kEFFECT_TYPE_HLSL_INLINE = 0x2,
			kEFFECT_TYPE_CG_INLINE = 0x3,
			kEFFECT_TYPE_HLSL_FILENAME = 0x4,
			kEFFECT_TYPE_CG_FILENAME = 0x5,
			kEFFECT_TYPE_MAX_ID = 0x6,
		};

		// override (hkReferencedObject)
		virtual ~hkxMaterialEffect() = default;  // 00

		// members
		hkStringPtr                                         m_name;      // 08?
		hkEnum<hkxMaterialEffect::EffectType, std::uint8_t> m_type;      // 0C?
		std::uint8_t                                        pad0D[0x3];  // 0D
		hkArray<std::uint8_t, hkContainerHeapAllocator>     m_data;      // 10?
	};
}
