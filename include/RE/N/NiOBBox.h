#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiOBBRoot;

	// not confirmed: no named code in the executable refers to this type
	class NiOBBox
	{
	public:
		// members
		NiPoint3   m_center;      // 00?
		NiPoint3   m_basis[3];    // 0C?
		float      m_extent[3];   // 30?
		NiPoint3   m_wCenter;     // 3C?
		NiPoint3   m_wBasis[3];   // 48?
		float      m_wExtent[3];  // 6C?
		NiOBBRoot* m_pRoot;       // 78?
	};
}
