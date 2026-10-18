#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData_RendererData.h"

namespace RE
{
	class NiGeometryGroup;
	class NiVBChip;

	class NiGeometryBufferData :
		public NiGeometryData_RendererData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometryBufferData };
		static constexpr auto VTABLE{ VTABLE::NiGeometryBufferData };

		// add
		virtual void Unk_01();  // 01

		// members
		std::uint32_t        m_uiFlags;            // 04
		NiGeometryGroup*     m_pkGeometryGroup;    // 08?
		std::uint32_t        m_uiFVF;              // 0C?
		void*                m_hDeclaration;       // 10?
		bool                 m_bSoftwareVP;        // 14?
		std::uint8_t         pad15[0x3];           // 15
		std::uint32_t        m_uiVertCount;        // 18?
		std::uint32_t        m_uiMaxVertCount;     // 1C?
		std::uint32_t        m_uiStreamCount;      // 20?
		std::uint32_t*       m_puiVertexStride;    // 24?
		NiVBChip**           m_ppkVBChip;          // 28?
		std::uint32_t        m_uiIndexCount;       // 2C?
		std::uint32_t        m_uiIBSize;           // 30?
		void*                m_pkIB;               // 34?
		std::uint32_t        m_uiBaseVertexIndex;  // 38?
		std::uint32_t        m_eType;              // 3C?
		std::uint32_t        m_uiTriCount;         // 40?
		std::uint32_t        m_uiMaxTriCount;      // 44?
		std::uint32_t        m_uiNumArrays;        // 48?
		const std::uint16_t* m_pusArrayLengths;    // 4C?
	};
}
