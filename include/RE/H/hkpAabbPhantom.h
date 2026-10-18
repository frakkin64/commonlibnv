#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkpPhantom.h"

namespace RE
{
	class hkMotionState;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpLinearCastInput;
	class hkpRayHitCollector;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class alignas(16) hkpAabbPhantom :
		public hkpPhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAabbPhantom };
		static constexpr auto VTABLE{ VTABLE::hkpAabbPhantom };

		// override (hkpPhantom)
		virtual ~hkpAabbPhantom() = default;                                                                 // 00
		virtual hkMotionState* getMotionState() override;                                                    // 04
		virtual void calcAabb(hkAabb* a_arg1) override;                                                      // 06
		virtual void addOverlappingCollidable(hkpCollidable* a_arg1) override;                               // 07
		virtual hkBool* isOverlappingCollidableAdded(hkBool* a_arg1, const hkpCollidable* a_arg2) override;  // 08
		virtual void removeOverlappingCollidable(hkpCollidable* a_arg1) override;                            // 09
		virtual void ensureDeterministicOrder() override;                                                    // 0A
		virtual void deallocateInternalArrays() override;                                                    // 0D

		void setAabb(hkAabb const& newAabb)
		{
			using func_t = decltype(&hkpAabbPhantom::setAabb);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbPhantom::setAabb };
			func(this, newAabb);
		}

		void castRay(hkpWorldRayCastInput const& input, hkpRayHitCollector& collector) const
		{
			using func_t = void (hkpAabbPhantom::*)(hkpWorldRayCastInput const&, hkpRayHitCollector&) const;
			static REL::Relocation<func_t> func{ Offsets::hkpAabbPhantom::castRay };
			func(this, input, collector);
		}

		void castRay(hkpWorldRayCastInput const& input, hkpWorldRayCastOutput& output) const
		{
			using func_t = void (hkpAabbPhantom::*)(hkpWorldRayCastInput const&, hkpWorldRayCastOutput&) const;
			static REL::Relocation<func_t> func{ Offsets::hkpAabbPhantom::castRay_1 };
			func(this, input, output);
		}

		void linearCast(hkpCollidable const* const toBeCast, hkpLinearCastInput const& input, hkpCdPointCollector& castCollector, hkpCdPointCollector* startCollector) const
		{
			using func_t = decltype(&hkpAabbPhantom::linearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbPhantom::linearCast };
			func(this, toBeCast, input, castCollector, startCollector);
		}

		hkpAabbPhantom* ctor(hkAabb const& aabb, std::uint32_t collisionFilterInfo)
		{
			using func_t = hkpAabbPhantom*(__thiscall*)(hkpAabbPhantom*, hkAabb const&, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbPhantom::ctor };
			return func(this, aabb, collisionFilterInfo);
		}

		hkpAabbPhantom* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkpAabbPhantom*(__thiscall*)(hkpAabbPhantom*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbPhantom::ctor_1 };
			return func(this, flag);
		}

	public:
		// members
		std::uint8_t                                      padA4[0xC];                // A4
		hkAabb                                            m_aabb;                    // B0
		hkArray<hkpCollidable*, hkContainerHeapAllocator> m_overlappingCollidables;  // D0
		hkBool                                            m_orderDirty;              // DC?
		std::uint8_t                                      padDD[0x3];                // DD
	};
}
