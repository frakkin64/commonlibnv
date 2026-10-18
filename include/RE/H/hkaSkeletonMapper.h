#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkaSkeletonMapperData.h"

namespace RE
{
	class hkQsTransform;

	class alignas(16) hkaSkeletonMapper :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaSkeletonMapper };
		static constexpr auto VTABLE{ VTABLE::hkaSkeletonMapper };

		enum class ConstraintSource : std::int32_t
		{
			kNO_CONSTRAINTS = 0x0,
			kREFERENCE_POSE = 0x1,
			kCURRENT_POSE = 0x2,
		};

		// override (hkReferencedObject)
		virtual ~hkaSkeletonMapper() = default;  // 00

		void mapPoseLocalSpace(hkQsTransform const* poseALocalSpaceOriginal, hkQsTransform* poseBLocalSpaceInOut, std::int16_t const* boneToTrackIndicesA, std::int16_t const* boneToTrackIndicesB, bool additive) const
		{
			using func_t = decltype(&hkaSkeletonMapper::mapPoseLocalSpace);
			static REL::Relocation<func_t> func{ Offsets::hkaSkeletonMapper::mapPoseLocalSpace };
			func(this, poseALocalSpaceOriginal, poseBLocalSpaceInOut, boneToTrackIndicesA, boneToTrackIndicesB, additive);
		}

		void mapPose(hkQsTransform const* poseAModelSpace, hkQsTransform const* originalPoseBLocalSpace, hkQsTransform* poseBModelSpace, hkaSkeletonMapper::ConstraintSource source) const
		{
			using func_t = decltype(&hkaSkeletonMapper::mapPose);
			static REL::Relocation<func_t> func{ Offsets::hkaSkeletonMapper::mapPose };
			func(this, poseAModelSpace, originalPoseBLocalSpace, poseBModelSpace, source);
		}

		static void checkMappingLocalSpace(hkaSkeletonMapperData const& a_m_mapping)
		{
			using func_t = decltype(&hkaSkeletonMapper::checkMappingLocalSpace);
			static REL::Relocation<func_t> func{ Offsets::hkaSkeletonMapper::checkMappingLocalSpace };
			func(a_m_mapping);
		}

	public:
		// members
		std::uint8_t          pad08[0x8];  // 08
		hkaSkeletonMapperData m_mapping;   // 10?
	};
}
