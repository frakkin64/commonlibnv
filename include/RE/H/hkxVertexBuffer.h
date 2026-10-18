#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkxVertexDescription.h"

namespace RE
{
	class hkxVertexBuffer :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxVertexBuffer };
		static constexpr auto VTABLE{ VTABLE::hkxVertexBuffer };

		class VertexData;

		class VertexData
		{
		public:
			void setSize(std::int32_t n)
			{
				using func_t = decltype(&VertexData::setSize);
				static REL::Relocation<func_t> func{ Offsets::hkxVertexBuffer_VertexData::setSize };
				func(this, n);
			}

		public:
			// members
			hkArray<hkVector4, hkContainerHeapAllocator>     m_vectorData;    // 00?
			hkArray<float, hkContainerHeapAllocator>         m_floatData;     // 0C?
			hkArray<std::uint32_t, hkContainerHeapAllocator> m_uint32Data;    // 18?
			hkArray<std::uint16_t, hkContainerHeapAllocator> m_uint16Data;    // 24?
			hkArray<std::uint8_t, hkContainerHeapAllocator>  m_uint8Data;     // 30?
			std::uint32_t                                    m_numVerts;      // 3C?
			std::uint32_t                                    m_vectorStride;  // 40?
			std::uint32_t                                    m_floatStride;   // 44?
			std::uint32_t                                    m_uint32Stride;  // 48?
			std::uint32_t                                    m_uint16Stride;  // 4C?
			std::uint32_t                                    m_uint8Stride;   // 50?
		};

		// override (hkReferencedObject)
		virtual ~hkxVertexBuffer() = default;  // 00

		void copyVertex(hkxVertexBuffer const& other, std::int32_t vertFrom, std::int32_t vertTo)
		{
			using func_t = decltype(&hkxVertexBuffer::copyVertex);
			static REL::Relocation<func_t> func{ Offsets::hkxVertexBuffer::copyVertex };
			func(this, other, vertFrom, vertTo);
		}

		void setNumVertices(std::int32_t n, hkxVertexDescription const& format)
		{
			using func_t = decltype(&hkxVertexBuffer::setNumVertices);
			static REL::Relocation<func_t> func{ Offsets::hkxVertexBuffer::setNumVertices };
			func(this, n, format);
		}

		void copy(hkxVertexBuffer const& other, bool resize)
		{
			using func_t = decltype(&hkxVertexBuffer::copy);
			static REL::Relocation<func_t> func{ Offsets::hkxVertexBuffer::copy };
			func(this, other, resize);
		}

	public:
		// members
		hkxVertexBuffer::VertexData m_data;  // 08?
		hkxVertexDescription        m_desc;  // 5C?
	};
}
