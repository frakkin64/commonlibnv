#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkaAnimationBinding;

	class alignas(16) hkaPoseMatchingUtility
	{
	public:
		class CandidatePoseInfo;

		class alignas(16) CandidatePoseInfo
		{
		public:
			// members
			hkQuaternion               m_reference;  // 00?
			const hkaAnimationBinding* m_binding;    // 10?
			float                      m_time;       // 14?
			std::uint8_t               pad18[0x8];   // 18
		};

		// members
		hkArray<hkaPoseMatchingUtility::CandidatePoseInfo, hkContainerHeapAllocator> m_candidatePoses;  // 00?
		std::uint32_t                                                                pad0C;             // 0C
		hkVector4                                                                    m_rotationAxis;    // 10?
		std::int16_t                                                                 m_rootBoneIdx;     // 20?
		std::int16_t                                                                 m_otherBoneIdx;    // 22?
		std::int16_t                                                                 m_anotherBoneIdx;  // 24?
		std::uint8_t                                                                 pad26[0xA];        // 26
	};
}
