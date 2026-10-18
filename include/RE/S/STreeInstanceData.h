#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CVec3.h"

namespace RE
{
	class CSpeedTreeRT;

	// not confirmed: no named code in the executable refers to this type
	class STreeInstanceData
	{
	public:
		// members
		const CSpeedTreeRT* m_pParent;    // 00?
		CVec3               m_cPosition;  // 04?
		float               m_fLodLevel;  // 10?
	};
}
