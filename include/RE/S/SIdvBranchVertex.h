#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CRotTransform.h"
#include "RE/C/CVec3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SIdvBranchVertex
	{
	public:
		// members
		CVec3         m_cDirection;      // 00?
		CVec3         m_cPos;            // 0C?
		float         m_fRadius;         // 18?
		CRotTransform m_cTrans;          // 1C?
		float         m_fRunningLength;  // 40?
		float         m_fWindWeight;     // 44?
	};
}
