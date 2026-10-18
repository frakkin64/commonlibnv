#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpCollisionAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollisionDispatcher;
	class hkpCollisionInput;
	class hkpConstraintOwner;
	class hkpLinearCastCollisionInput;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class alignas(16) hkpBvTreeAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBvTreeAgent };
		static constexpr auto VTABLE{ VTABLE::hkpBvTreeAgent };

		class hkpBvAgentEntryInfo;

		class hkpBvAgentEntryInfo
		{
		public:
			// members
			std::uint32_t      m_key;             // 00?
			std::int32_t       m_userInfo;        // 04?
			hkpCollisionAgent* m_collisionAgent;  // 08?
		};

		// override (hkpCollisionAgent)
		virtual ~hkpBvTreeAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                           // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);                                 // 06
		virtual void cleanup(hkpConstraintOwner& info);                                                                                                                                          // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner);                           // 08
		virtual void invalidateTim(hkpCollisionInput const& input);                                                                                                                              // 09
		virtual void warpTime(float a_arg1, float oldTime, hkpCollisionInput const& a_arg3);                                                                                                     // 0A
		virtual void Unk_0B();                                                                                                                                                                   // 0B
		virtual void Unk_0C();                                                                                                                                                                   // 0C
		virtual void Unk_0D();                                                                                                                                                                   // 0D

		static void staticLinearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector)
		{
			using func_t = decltype(&hkpBvTreeAgent::staticLinearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpBvTreeAgent::staticLinearCast };
			func(bodyA, bodyB, input, collector, startCollector);
		}

		static void staticGetClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector)
		{
			using func_t = decltype(&hkpBvTreeAgent::staticGetClosestPoints);
			static REL::Relocation<func_t> func{ Offsets::hkpBvTreeAgent::staticGetClosestPoints };
			func(bodyA, bodyB, input, collector);
		}

		static void staticGetPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector)
		{
			using func_t = decltype(&hkpBvTreeAgent::staticGetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::hkpBvTreeAgent::staticGetPenetrations };
			func(bodyA, bodyB, input, collector);
		}

		static void registerAgent(hkpCollisionDispatcher* dispatcher)
		{
			using func_t = decltype(&hkpBvTreeAgent::registerAgent);
			static REL::Relocation<func_t> func{ Offsets::hkpBvTreeAgent::registerAgent };
			func(dispatcher);
		}

	public:
		// members
		hkArray<hkpBvTreeAgent::hkpBvAgentEntryInfo, hkContainerHeapAllocator> m_collisionPartners;  // 0C?
		std::uint8_t                                                           pad18[0x8];           // 18
		hkAabb                                                                 m_cachedAabb;         // 20?
	};
}
