#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiShaderAttributeDesc_ObjectType.h"

namespace RE
{
	class NiMaterialResource :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMaterialResource };
		static constexpr auto VTABLE{ VTABLE::NiMaterialResource };

		enum class Source : std::int32_t
		{
			kSOURCE_UNKNOWN = 0x0,
			kSOURCE_OBJECT = 0x1,
			kSOURCE_PREDEFINED = 0x2,
			kSOURCE_CONSTANT = 0x3,
			kSOURCE_ATTRIBUTE = 0x4,
			kSOURCE_GLOBAL = 0x5,
			kSOURCE_MAX = 0x6,
		};

		// members
		NiFixedString                    m_kType;          // 08?
		NiFixedString                    m_kSemantic;      // 0C?
		NiFixedString                    m_kLabel;         // 10?
		NiFixedString                    m_kVariable;      // 14?
		NiFixedString                    m_kDefaultValue;  // 18?
		std::uint32_t                    m_uiCount;        // 1C?
		NiMaterialResource::Source       m_eSource;        // 20?
		std::uint32_t                    m_uiExtraData;    // 24?
		NiShaderAttributeDesc_ObjectType m_eObjectType;    // 28?
	};
}
