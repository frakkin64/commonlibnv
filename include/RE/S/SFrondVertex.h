#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CRotTransform.h"
#include "RE/C/CVec3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SFrondVertex
	{
	public:
		// members
		CVec3         m_cPos;                 // 00?
		CRotTransform m_cTrans;               // 0C?
		float         m_fCrossSectionWeight;  // 30?
		std::int32_t  m_nWindGroup;           // 34?
	};
}
