#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiShaderConstantMapEntry :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiShaderConstantMapEntry };
		static constexpr auto VTABLE{ VTABLE::NiShaderConstantMapEntry };

		// members
		bool          m_bEnabled;              // 08?
		std::uint8_t  pad09[0x3];              // 09
		NiFixedString m_kKey;                  // 0C?
		std::uint32_t m_uiInternal;            // 10?
		std::uint32_t m_uiFlags;               // 14
		std::uint32_t m_uiExtra;               // 18
		std::uint32_t m_uiShaderRegister;      // 1C
		std::uint32_t m_uiRegisterCount;       // 20
		NiFixedString m_kVariableName;         // 24
		std::uint32_t m_uiDataSize;            // 28
		std::uint32_t m_uiDataStride;          // 2C
		void*         m_pvDataSource;          // 30
		bool          m_bOwnData;              // 34?
		bool          m_bVariableHookupValid;  // 35?
		bool          m_bRegisterOnly;         // 36?
		std::uint8_t  pad37;                   // 37
	};
}
