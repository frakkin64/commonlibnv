#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SEmbeddedTexCoords
	{
	public:
		// members
		std::int32_t m_nNumLeafMaps;          // 00?
		float*       m_pLeafTexCoords;        // 04?
		std::int32_t m_nNumBillboards;        // 08?
		float*       m_pBillboardTexCoords;   // 0C?
		std::int32_t m_nNumFrondMaps;         // 10?
		float*       m_pFrondTexCoords;       // 14?
		stl::string  m_strCompositeFilename;  // 18?
		float        m_afShadowTexCoords[8];  // 34?
	};
}
