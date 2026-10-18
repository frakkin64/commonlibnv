#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkHalf.h"
#include "RE/H/hkpMeshMaterial.h"

namespace RE
{
	class hkpStorageExtendedMeshShape_Material :
		public hkpMeshMaterial  // 00
	{
	public:
		// members
		hkHalf        m_restitution;  // 04?
		hkHalf        m_friction;     // 06?
		std::uint32_t m_userData;     // 08?
	};
}
