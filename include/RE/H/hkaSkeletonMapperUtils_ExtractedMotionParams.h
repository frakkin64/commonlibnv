#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkaSkeletonMapperUtils_ExtractedMotionParams_ExtractedMotionMode.h"

namespace RE
{
	class hkaSkeletonMapperUtils_ExtractedMotionParams
	{
	public:
		using ExtractedMotionMode = hkaSkeletonMapperUtils_ExtractedMotionParams_ExtractedMotionMode;

		// members
		hkEnum<hkaSkeletonMapperUtils_ExtractedMotionParams_ExtractedMotionMode, std::int32_t> m_mode;                    // 00?
		std::int32_t                                                                           m_extractedMotionBoneA;    // 04?
		std::int32_t                                                                           m_extractedMotionBoneB;    // 08?
		float                                                                                  m_extractedMotionFactorA;  // 0C?
		float                                                                                  m_extractedMotionFactorB;  // 10?
	};
}
