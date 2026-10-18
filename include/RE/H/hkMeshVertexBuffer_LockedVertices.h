#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkMeshVertexBuffer_LockedVertices_Buffer.h"

namespace RE
{
	class hkMeshVertexBuffer_LockedVertices
	{
	public:
		using Buffer = hkMeshVertexBuffer_LockedVertices_Buffer;

		// members
		hkMeshVertexBuffer_LockedVertices_Buffer m_buffers[32];    // 00?
		std::int32_t                             m_numBuffers;     // 280?
		std::int32_t                             m_numVertices;    // 284?
		hkBool                                   m_isInterleaved;  // 288?
		std::uint8_t                             pad289[0x3];      // 289
	};
}
