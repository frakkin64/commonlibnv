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
	class hkpCollisionInput;
	class hkpLinearCastInput;

	class alignas(16) hkpSimpleShapePhantom :
		public hkpShapePhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimpleShapePhantom };
		static constexpr auto VTABLE{ VTABLE::hkpSimpleShapePhantom };

		class CollisionDetail;

		class CollisionDetail
		{
		public:
			// members
			hkpCollidable* m_collidable;  // 00?
		};

		// override (hkpShapePhantom)
		virtual ~hkpSimpleShapePhantom() = default;                                                                                                                              // 00
		virtual void addOverlappingCollidable(hkpCollidable* a_arg1) override;                                                                                                   // 07
		virtual hkBool* isOverlappingCollidableAdded(hkBool* a_arg1, const hkpCollidable* a_arg2) override;                                                                      // 08
		virtual void removeOverlappingCollidable(hkpCollidable* a_arg1) override;                                                                                                // 09
		virtual void ensureDeterministicOrder() override;                                                                                                                        // 0A
		virtual void deallocateInternalArrays() override;                                                                                                                        // 0D
		virtual void setPositionAndLinearCast(const hkVector4* a_arg1, const hkpLinearCastInput* a_arg2, hkpCdPointCollector* a_arg3, hkpCdPointCollector* a_arg4) override;     // 0E
		virtual void setTransformAndLinearCast(const hkTransform* a_arg1, const hkpLinearCastInput* a_arg2, hkpCdPointCollector* a_arg3, hkpCdPointCollector* a_arg4) override;  // 0F
		virtual void getClosestPoints(hkpCdPointCollector* a_arg1, const hkpCollisionInput* a_arg2) override;                                                                    // 10
		virtual void getPenetrations(hkpCdBodyPairCollector* a_arg1, const hkpCollisionInput* a_arg2) override;                                                                  // 11

		hkpSimpleShapePhantom* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkpSimpleShapePhantom*(__thiscall*)(hkpSimpleShapePhantom*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpSimpleShapePhantom::ctor };
			return func(this, flag);
		}

	public:
		// members
		hkArray<hkpSimpleShapePhantom::CollisionDetail, hkContainerHeapAllocator> m_collisionDetails;  // 160
		hkBool                                                                    m_orderDirty;        // 16C?
		std::uint8_t                                                              pad16D[0x3];         // 16D
	};
}
