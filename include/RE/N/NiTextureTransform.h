#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint2.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiTextureTransform
	{
	public:
		enum class TransformMethod : std::int32_t
		{
			kMAYA_DEPRECATED_TRANSFORM = 0x0,
			kMAX_TRANSFORM = 0x1,
			kMAYA_TRANSFORM = 0x2,
		};

		// members
		NiPoint2                            m_kTranslate;    // 00?
		float                               m_fRotate;       // 08?
		NiPoint2                            m_kScale;        // 0C?
		NiPoint2                            m_kCenter;       // 14?
		bool                                m_bMatrixDirty;  // 1C?
		std::uint8_t                        pad1D[0x3];      // 1D
		NiMatrix3                           m_kMatrix;       // 20?
		NiTextureTransform::TransformMethod m_eMethod;       // 44?
	};
}
