#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSPrecisionTimer.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/H/hkaDetectRagdollPenetration_Output.h"
#include "RE/H/hkaRagdollRaycastInterface.h"

namespace RE
{
	class NiAVObject;
	class bhkAabbPhantom;
	class hkaDetectRagdollPenetration;
	class hkaRagdollInstance;
	class hkaSkeleton;

	class bhkRagdollPenetrationUtil :
		public hkaRagdollRaycastInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkRagdollPenetrationUtil };
		static constexpr auto VTABLE{ VTABLE::bhkRagdollPenetrationUtil };

		class ConstrainedSystem;

		class ConstrainedSystem
		{
		public:
			// members
			NiAVObject*                        pRoot3d;           // 00?
			hkaRagdollInstance*                pRagdollInstance;  // 04?
			hkaSkeleton*                       pSkel;             // 08?
			bhkAabbPhantom*                    pBoundingPhantom;  // 0C?
			hkaDetectRagdollPenetration*       pDetectionUtil;    // 10?
			hkaDetectRagdollPenetration_Output PenetratedBones;   // 14?
			bool                               bPenetrating;      // 20?
			std::uint8_t                       pad21[0x3];        // 21
		};

		// members
		BSSimpleArray<bhkRagdollPenetrationUtil::ConstrainedSystem*, 1024> ActiveSystems;                   // 04?
		std::int32_t                                                       iGroup;                          // 14
		bool                                                               bAttemptToInitializeNextUpdate;  // 18
		std::uint8_t                                                       pad19[0x3];                      // 19
		std::uint32_t                                                      uiInitAttempts;                  // 1C
		BSPrecisionTimer                                                   DetectionTimer;                  // 20
	};
}
