#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class RagdollFeedbackData;
	class bhkLookIKData;
	class hkaSkeleton;
	class hkaSkeletonMapper;

	class bhkRagdollShareData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkRagdollShareData };
		static constexpr auto VTABLE{ VTABLE::bhkRagdollShareData };

		// members
		hkaSkeleton*         pLowSkel;         // 08?
		hkaSkeleton*         pHighSkel;        // 0C?
		hkaSkeletonMapper*   pSGToRagdoll;     // 10?
		hkaSkeletonMapper*   pRagdollToSG;     // 14?
		RagdollFeedbackData* pFeedbackData;    // 18?
		bhkLookIKData*       pSharedLookData;  // 1C?
	};
}
