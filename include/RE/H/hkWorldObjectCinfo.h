#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkSerializableCinfo.h"

namespace RE
{
	class hkpShape;

	class hkWorldObjectCinfo :
		public hkSerializableCinfo  // 00
	{
	public:
		class Property;

		enum class BroadPhaseType : std::int32_t
		{
			kBROAD_PHASE_INVALID = 0x0,
			kBROAD_PHASE_ENTITY = 0x1,
			kBROAD_PHASE_PHANTOM = 0x2,
			kBROAD_PHASE_MAX_ID = 0x3,
		};

		class Property
		{
		public:
			// members
			std::uint32_t m_key;    // 00?
			std::uint32_t m_value;  // 04?
		};

		// members
		std::uint32_t                                                   m_collisionFilterInfo;  // 00
		const hkpShape*                                                 m_shape;                // 04?
		hkEnum<hkWorldObjectCinfo::BroadPhaseType, std::int8_t>         m_broadPhaseType;       // 08?
		std::uint8_t                                                    pad09[0x3];             // 09
		hkArray<hkWorldObjectCinfo::Property, hkContainerHeapAllocator> m_properties;           // 0C?
	};
}
