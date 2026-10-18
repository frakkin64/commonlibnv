#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkTransform.h"

namespace RE
{
	class hkpBvTreeShape;

	class alignas(16) hkpMeshWeldingUtility_ShapeInfo
	{
	public:
		// members
		hkTransform           m_transform;  // 00?
		const hkpBvTreeShape* m_shape;      // 40?
		std::uint8_t          pad44[0xC];   // 44
	};
}
