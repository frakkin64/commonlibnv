#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVertexFormat_Element.h"

namespace RE
{
	class hkMeshVertexBuffer_LockedVertices_Buffer
	{
	public:
		// members
		void*                  m_start;    // 00?
		std::int32_t           m_stride;   // 04?
		hkVertexFormat_Element m_element;  // 08?
	};
}
