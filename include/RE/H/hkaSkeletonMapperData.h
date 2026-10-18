#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkQsTransform.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkaSkeletonMapperData_MappingType.h"

namespace RE
{
	class hkaSkeleton;

	class alignas(16) hkaSkeletonMapperData
	{
	public:
		using MappingType = hkaSkeletonMapperData_MappingType;

		class ChainMapping;
		class SimpleMapping;

		class alignas(16) ChainMapping
		{
		public:
			// members
			std::int16_t  m_startBoneA;            // 00?
			std::int16_t  m_endBoneA;              // 02?
			std::int16_t  m_startBoneB;            // 04?
			std::int16_t  m_endBoneB;              // 06?
			std::uint8_t  pad08[0x8];              // 08
			hkQsTransform m_startAFromBTransform;  // 10?
			hkQsTransform m_endAFromBTransform;    // 40?
		};

		class alignas(16) SimpleMapping
		{
		public:
			// members
			std::int16_t  m_boneA;            // 00?
			std::int16_t  m_boneB;            // 02?
			std::uint8_t  pad04[0xC];         // 04
			hkQsTransform m_aFromBTransform;  // 10?
		};

		hkaSkeletonMapperData& operator_call(hkaSkeletonMapperData const& __that)
		{
			using func_t = decltype(&hkaSkeletonMapperData::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkaSkeletonMapperData::operator_call };
			return func(this, __that);
		}

	public:
		// members
		hkRefPtr<const hkaSkeleton>                                             m_skeletonA;               // 00?
		hkRefPtr<const hkaSkeleton>                                             m_skeletonB;               // 04?
		hkArray<hkaSkeletonMapperData::SimpleMapping, hkContainerHeapAllocator> m_simpleMappings;          // 08?
		hkArray<hkaSkeletonMapperData::ChainMapping, hkContainerHeapAllocator>  m_chainMappings;           // 14?
		hkArray<std::int16_t, hkContainerHeapAllocator>                         m_unmappedBones;           // 20?
		std::uint32_t                                                           pad2C;                     // 2C
		hkQsTransform                                                           m_extractedMotionMapping;  // 30?
		hkBool                                                                  m_keepUnmappedLocal;       // 60?
		std::uint8_t                                                            pad61[0x3];                // 61
		hkEnum<hkaSkeletonMapperData_MappingType, std::int32_t>                 m_mappingType;             // 64?
		std::uint8_t                                                            pad68[0x8];                // 68
	};
}
