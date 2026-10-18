#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkSphere;

	class hkpHeightFieldShape_CollideSpheresInput
	{
	public:
		// members
		std::uint32_t pad00;         // 00
		hkSphere*     m_spheres;     // 04
		std::int32_t  m_numSpheres;  // 08?
		float         m_tolerance;   // 0C?
	};
}
