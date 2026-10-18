#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkgpMesh_Location_Region.h"

namespace RE
{
	class alignas(16) hkgpMesh_Location
	{
	public:
		using Region = hkgpMesh_Location_Region;

		// members
		hkVector4                m_normal;           // 00?
		hkVector4                m_pseudoNormal;     // 10?
		hkVector4                m_coordinates;      // 20?
		hkVector4                m_projection;       // 30?
		float                    m_squaredDistance;  // 40?
		hkBool                   m_inside;           // 44?
		std::uint8_t             pad45[0x3];         // 45
		hkgpMesh_Location_Region m_region;           // 48?
		std::uint8_t             pad54[0xC];         // 54
	};
}
