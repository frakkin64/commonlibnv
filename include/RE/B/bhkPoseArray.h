#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiFixedString;
	class hkQsTransform;

	class bhkPoseArray :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkPoseArray };
		static constexpr auto VTABLE{ VTABLE::bhkPoseArray };

		class bhkPose;

		class bhkPose
		{
		public:
			// members
			std::uint32_t  uiNumBones;   // 00?
			hkQsTransform* BoneTransfA;  // 04?
		};

		// members
		std::uint32_t           uiNumBones;  // 08
		NiFixedString*          BoneNameA;   // 0C
		std::uint32_t           uiNumPose;   // 10
		bhkPoseArray::bhkPose** PoseA;       // 14
	};
}
