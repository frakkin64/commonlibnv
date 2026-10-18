#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkpShapePhantom.h"

namespace RE
{
	class hkTransform;
	class hkVector4;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollisionAgent;
	class hkpCollisionInput;
	class hkpLinearCastInput;
	class hkpShape;

	class alignas(16) hkpCachingShapePhantom :
		public hkpShapePhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCachingShapePhantom };
		static constexpr auto VTABLE{ VTABLE::hkpCachingShapePhantom };

		class hkpCollisionDetail;

		class hkpCollisionDetail
		{
		public:
			// members
			hkpCollisionAgent* m_agent;       // 00?
			hkpCollidable*     m_collidable;  // 04?
		};

		// override (hkpShapePhantom)
		virtual ~hkpCachingShapePhantom() = default;                                                                                                                             // 00
		virtual void addOverlappingCollidable(hkpCollidable* a_arg1) override;                                                                                                   // 07
		virtual hkBool* isOverlappingCollidableAdded(hkBool* a_arg1, const hkpCollidable* a_arg2) override;                                                                      // 08
		virtual void removeOverlappingCollidable(hkpCollidable* a_arg1) override;                                                                                                // 09
		virtual void ensureDeterministicOrder() override;                                                                                                                        // 0A
		virtual void updateShapeCollectionFilter() override;                                                                                                                     // 0C
		virtual void deallocateInternalArrays() override;                                                                                                                        // 0D
		virtual void setPositionAndLinearCast(const hkVector4* a_arg1, const hkpLinearCastInput* a_arg2, hkpCdPointCollector* a_arg3, hkpCdPointCollector* a_arg4) override;     // 0E
		virtual void setTransformAndLinearCast(const hkTransform* a_arg1, const hkpLinearCastInput* a_arg2, hkpCdPointCollector* a_arg3, hkpCdPointCollector* a_arg4) override;  // 0F
		virtual void getClosestPoints(hkpCdPointCollector* a_arg1, const hkpCollisionInput* a_arg2) override;                                                                    // 10
		virtual void getPenetrations(hkpCdBodyPairCollector* a_arg1, const hkpCollisionInput* a_arg2) override;                                                                  // 11

		hkpCachingShapePhantom* ctor(hkpShape const* shape, hkTransform const& transform, std::uint32_t collisionFilterInfo)
		{
			using func_t = hkpCachingShapePhantom*(__thiscall*)(hkpCachingShapePhantom*, hkpShape const*, hkTransform const&, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpCachingShapePhantom::ctor };
			return func(this, shape, transform, collisionFilterInfo);
		}

		hkpCachingShapePhantom* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkpCachingShapePhantom*(__thiscall*)(hkpCachingShapePhantom*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpCachingShapePhantom::ctor_1 };
			return func(this, flag);
		}

	public:
		// members
		hkArray<hkpCachingShapePhantom::hkpCollisionDetail, hkContainerHeapAllocator> m_collisionDetails;  // 160
		hkBool                                                                        m_orderDirty;        // 16C?
		std::uint8_t                                                                  pad16D[0x3];         // 16D
	};
}
