#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiShaderAttributeDesc_AttributeType.h"

namespace RE
{
	class NiGlobalConstantEntry :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGlobalConstantEntry };
		static constexpr auto VTABLE{ VTABLE::NiGlobalConstantEntry };

		// members
		NiFixedString                       m_kKey;          // 08
		NiShaderAttributeDesc_AttributeType m_eType;         // 0C
		std::uint32_t                       m_uiDataSize;    // 10
		void*                               m_pvDataSource;  // 14
	};
}
