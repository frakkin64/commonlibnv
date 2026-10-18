#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class D3DXEffects_SType;

	class D3DXEffects_SHandle
	{
	public:
		// members
		std::uint8_t*        m_pbData;    // 00?
		D3DXEffects_SType*   m_pType;     // 04?
		std::uint32_t*       m_pTimer;    // 08?
		std::uint32_t        m_iElement;  // 0C?
		std::uint32_t        m_cBytes;    // 10?
		union
		{
			std::uint32_t Space;
			struct
				{
					std::uint8_t m_Type;
					std::uint8_t m_bFastSet;
					std::uint16_t m_cUnpackedBytes;
				} __s1;
		} ___u5;  // 14?
		union
		{
			std::uint16_t m_iTechnique;
			std::uint32_t m_iVariable;
			std::uint32_t m_iParameterBlock;
		} ___u6;  // 18?
		union
		{
			std::uint16_t m_iPass;
			std::uint32_t m_oType;
		} ___u7;  // 1C?
		std::uint32_t        m_oData;     // 20?
		D3DXEffects_SHandle* m_pMembers;  // 24?
		union
		{
			D3DXEffects_SHandle* m_pElement;
			D3DXEffects_SHandle* m_pNext;
		} ___u10;  // 28?
	};
}
