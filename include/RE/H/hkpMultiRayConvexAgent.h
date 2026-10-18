#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"
#include "RE/H/hkpIterativeLinearCastAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollisionInput;
	class hkpConstraintOwner;
	class hkpContactMgr;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class hkpMultiRayConvexAgent :
		public hkpIterativeLinearCastAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMultiRayConvexAgent };
		static constexpr auto VTABLE{ VTABLE::hkpMultiRayConvexAgent };

		class ContactPointInfo;

		class ContactPointInfo
		{
		public:
			// members
			std::uint16_t m_contactPointId;  // 00?
		};

		// override (hkpIterativeLinearCastAgent)
		virtual ~hkpMultiRayConvexAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);          // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);            // 04
		virtual void Unk_05();                                                                                                                                    // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);  // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner);                                                                                                // 07
		virtual void Unk_08();                                                                                                                                    // 08
		virtual void Unk_09();                                                                                                                                    // 09
		virtual void Unk_0A();                                                                                                                                    // 0A
		virtual void Unk_0B();                                                                                                                                    // 0B
		virtual void Unk_0C();                                                                                                                                    // 0C
		virtual void Unk_0D();                                                                                                                                    // 0D

		static void staticGetClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector)
		{
			using func_t = decltype(&hkpMultiRayConvexAgent::staticGetClosestPoints);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiRayConvexAgent::staticGetClosestPoints };
			func(bodyA, bodyB, input, collector);
		}

		static void staticGetPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector)
		{
			using func_t = decltype(&hkpMultiRayConvexAgent::staticGetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiRayConvexAgent::staticGetPenetrations };
			func(bodyA, bodyB, input, collector);
		}

	protected:
		hkpMultiRayConvexAgent* ctor(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpContactMgr* mgr)
		{
			using func_t = hkpMultiRayConvexAgent*(__thiscall*)(hkpMultiRayConvexAgent*, hkpCdBody const&, hkpCdBody const&, hkpCollisionInput const&, hkpContactMgr*);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiRayConvexAgent::ctor };
			return func(this, bodyA, bodyB, input, mgr);
		}

	public:
		// members
		hkInplaceArray<hkpMultiRayConvexAgent::ContactPointInfo, 4, hkContainerHeapAllocator> m_contactInfo;  // 0C?
	};
}
