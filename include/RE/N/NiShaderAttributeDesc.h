#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiShaderAttributeDesc_AttributeType.h"
#include "RE/N/NiShaderAttributeDesc_ObjectType.h"
#include "RE/N/NiShaderDescBase.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiShaderAttributeDesc :
		public NiShaderDescBase  // 00
	{
	public:
		using AttributeType = NiShaderAttributeDesc_AttributeType;
		using ObjectType = NiShaderAttributeDesc_ObjectType;

		class ArrayData;

		class ArrayData
		{
		public:
			// members
			void*                               m_pvValue;        // 00?
			NiShaderAttributeDesc_AttributeType m_eType;          // 04?
			std::uint32_t                       m_uiElementSize;  // 08?
		};

		// members
		NiShaderAttributeDesc_AttributeType m_eType;         // 10?
		std::uint32_t                       m_uiFlags;       // 14?
		union
		{
			bool m_bValue;
			char* m_pcValue;
			std::uint32_t m_uiValue;
			float m_aafValue[4][4];
			NiShaderAttributeDesc::ArrayData m_kArrayValue;
		} ___u3;  // 18?
		std::uint32_t                       m_uiLen;         // 58?
		union
		{
			std::uint32_t m_uiLow;
			float m_aafLow[4][4];
			void* m_pvLow;
		} ___u5;  // 5C?
		union
		{
			std::uint32_t m_uiHigh;
			float m_aafHigh[4][4];
			void* m_pvHigh;
		} ___u6;  // 9C?
		char*                               m_pcDefault;     // DC?
		std::uint32_t                       m_uiDefaultLen;  // E0?
	};
}
