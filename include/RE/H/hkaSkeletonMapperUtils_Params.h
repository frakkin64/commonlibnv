#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkaSkeletonMapperData_MappingType.h"
#include "RE/H/hkaSkeletonMapperUtils_ExtractedMotionParams.h"
#include "RE/H/hkaSkeletonMapperUtils_UserChain.h"
#include "RE/H/hkaSkeletonMapperUtils_UserMapping.h"

namespace RE
{
	class hkaSkeleton;

	class hkaSkeletonMapperUtils_Params
	{
	public:
		hkaSkeletonMapperUtils_Params* ctor(hkaSkeletonMapperUtils_Params const& other)
		{
			using func_t = hkaSkeletonMapperUtils_Params*(__thiscall*)(hkaSkeletonMapperUtils_Params*, hkaSkeletonMapperUtils_Params const&);
			static REL::Relocation<func_t> func{ Offsets::hkaSkeletonMapperUtils_Params::ctor };
			return func(this, other);
		}

	public:
		// members
		const hkaSkeleton*                                                    m_skeletonA;               // 00?
		const hkaSkeleton*                                                    m_skeletonB;               // 04?
		void*                                                                 m_compareNames;            // 08?
		float                                                                 m_positionMatchTolerance;  // 0C?
		float                                                                 m_rotationMatchTolerance;  // 10?
		hkArray<hkaSkeletonMapperUtils_UserChain, hkContainerHeapAllocator>   m_userChains;              // 14?
		hkArray<hkaSkeletonMapperUtils_UserMapping, hkContainerHeapAllocator> m_userMappingsAtoB;        // 20?
		hkArray<hkaSkeletonMapperUtils_UserMapping, hkContainerHeapAllocator> m_userMappingsBtoA;        // 2C?
		hkBool                                                                m_autodetectSimple;        // 38?
		hkBool                                                                m_autodetectChains;        // 39?
		std::uint16_t                                                         pad3A;                     // 3A
		hkEnum<hkaSkeletonMapperData_MappingType, std::int32_t>               m_mappingType;             // 3C?
		hkaSkeletonMapperUtils_ExtractedMotionParams                          m_motionParams;            // 40?
	};
}
