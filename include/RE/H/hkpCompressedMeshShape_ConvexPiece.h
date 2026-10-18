#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpCompressedMeshShape_ConvexPiece
	{
	public:
		// members
		hkVector4                                        m_offset;          // 00?
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_vertices;        // 10?
		hkArray<std::uint8_t, hkContainerHeapAllocator>  m_faceVertices;    // 1C?
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_faceOffsets;     // 28?
		std::uint16_t                                    m_reference;       // 34?
		std::uint16_t                                    m_transformIndex;  // 36?
		std::uint8_t                                     pad38[0x8];        // 38
	};
}
