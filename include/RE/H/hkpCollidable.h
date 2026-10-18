#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCdBody.h"
#include "RE/H/hkpTypedBroadPhaseHandle.h"

namespace RE
{
	class hkAabbUint32;

	class hkpCollidable :
		public hkpCdBody  // 00
	{
	public:
		class BoundingVolumeData;

		class BoundingVolumeData
		{
		public:
			// members
			std::uint32_t  m_min[3];                   // 00?
			std::uint8_t   m_expansionMin[3];          // 0C?
			std::uint8_t   m_expansionShift;           // 0F?
			std::uint32_t  m_max[3];                   // 10?
			std::uint8_t   m_expansionMax[3];          // 1C?
			std::uint8_t   m_padding;                  // 1F?
			std::uint16_t  m_numChildShapeAabbs;       // 20?
			std::uint16_t  m_capacityChildShapeAabbs;  // 22?
			hkAabbUint32*  m_childShapeAabbs;          // 24?
			std::uint32_t* m_childShapeKeys;           // 28?
		};

		std::uint32_t getCollisionFilterInfo() const
		{
			using func_t = decltype(&hkpCollidable::getCollisionFilterInfo);
			static REL::Relocation<func_t> func{ Offsets::hkpCollidable::getCollisionFilterInfo };
			return func(this);
		}

		std::int32_t getType() const
		{
			using func_t = decltype(&hkpCollidable::getType);
			static REL::Relocation<func_t> func{ Offsets::hkpCollidable::getType };
			return func(this);
		}

		void* getOwner() const
		{
			using func_t = decltype(&hkpCollidable::getOwner);
			static REL::Relocation<func_t> func{ Offsets::hkpCollidable::getOwner };
			return func(this);
		}

	public:
		// members
		char                              m_ownerOffset;              // 10
		std::uint8_t                      m_forceCollideOntoPpu;      // 11
		std::uint16_t                     m_shapeSizeOnSpu;           // 12
		hkpTypedBroadPhaseHandle          m_broadPhaseHandle;         // 14
		hkpCollidable::BoundingVolumeData m_boundingVolumeData;       // 20?
		float                             m_allowedPenetrationDepth;  // 4C?
	};
}
