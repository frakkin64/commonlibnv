#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpConstraintChainInstance;
	class hkpConstraintInstance;
	class hkpEntity;
	class hkpPoweredChainData;

	class hkpPoweredChainMapper :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPoweredChainMapper };
		static constexpr auto VTABLE{ VTABLE::hkpPoweredChainMapper };

		class ChainEndpoints;
		class Config;
		class LinkInfo;
		class Target;

		class ChainEndpoints
		{
		public:
			// members
			hkpEntity* m_start;  // 00?
			hkpEntity* m_end;    // 04?
		};

		class Config
		{
		public:
			// members
			hkBool m_createLimitConstraints;  // 00?
			hkBool m_cloneMotors;             // 01?
		};

		class LinkInfo
		{
		public:
			// members
			std::int32_t           m_firstTargetIdx;   // 00?
			std::int32_t           m_numTargets;       // 04?
			hkpConstraintInstance* m_limitConstraint;  // 08?
		};

		class Target
		{
		public:
			// members
			hkpPoweredChainData* m_chain;      // 00?
			std::int32_t         m_infoIndex;  // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkpPoweredChainMapper() = default;  // 00

		static hkpPoweredChainMapper* buildChainMapper(hkpPoweredChainMapper::Config config, hkArray<hkpConstraintInstance*, hkContainerHeapAllocator> const& allConstraints, hkArray<hkpPoweredChainMapper::ChainEndpoints, hkContainerHeapAllocator> const& pairs, hkArray<hkpConstraintInstance*, hkContainerHeapAllocator>* unusedConstraints)
		{
			using func_t = decltype(&hkpPoweredChainMapper::buildChainMapper);
			static REL::Relocation<func_t> func{ Offsets::hkpPoweredChainMapper::buildChainMapper };
			return func(config, allConstraints, pairs, unusedConstraints);
		}

	public:
		// members
		hkArray<hkpPoweredChainMapper::LinkInfo, hkContainerHeapAllocator> m_links;    // 08?
		hkArray<hkpPoweredChainMapper::Target, hkContainerHeapAllocator>   m_targets;  // 14?
		hkArray<hkpConstraintChainInstance*, hkContainerHeapAllocator>     m_chains;   // 20?
	};
}
