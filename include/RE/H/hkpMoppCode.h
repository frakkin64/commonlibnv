#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpMoppCode_CodeInfo.h"

namespace RE
{
	class alignas(16) hkpMoppCode :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppCode };
		static constexpr auto VTABLE{ VTABLE::hkpMoppCode };

		using CodeInfo = hkpMoppCode_CodeInfo;

		enum class BuildType : std::int32_t
		{
			kBUILT_WITH_CHUNK_SUBDIVISION = 0x0,
			kBUILT_WITHOUT_CHUNK_SUBDIVISION = 0x1,
			kBUILD_NOT_SET = 0x2,
		};

		// override (hkReferencedObject)
		virtual ~hkpMoppCode() = default;  // 00

		// members
		std::uint8_t                                    pad08[0x8];   // 08
		hkpMoppCode_CodeInfo                            m_info;       // 10
		hkArray<std::uint8_t, hkContainerHeapAllocator> m_data;       // 20?
		hkEnum<hkpMoppCode::BuildType, std::int8_t>     m_buildType;  // 2C?
		std::uint8_t                                    pad2D[0x3];   // 2D
	};
}
