#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCollideTriangleUtil_PointTriangleDistanceCache.h"
#include "RE/H/hkpIterativeLinearCastAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollisionInput;
	class hkpConstraintOwner;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class hkpCapsuleTriangleAgent :
		public hkpIterativeLinearCastAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCapsuleTriangleAgent };
		static constexpr auto VTABLE{ VTABLE::hkpCapsuleTriangleAgent };

		// override (hkpIterativeLinearCastAgent)
		virtual ~hkpCapsuleTriangleAgent() = default;  // 00

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
			using func_t = decltype(&hkpCapsuleTriangleAgent::staticGetClosestPoints);
			static REL::Relocation<func_t> func{ Offsets::hkpCapsuleTriangleAgent::staticGetClosestPoints };
			func(bodyA, bodyB, input, collector);
		}

		static void staticGetPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector)
		{
			using func_t = decltype(&hkpCapsuleTriangleAgent::staticGetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::hkpCapsuleTriangleAgent::staticGetPenetrations };
			func(bodyA, bodyB, input, collector);
		}

	public:
		// members
		std::uint16_t                                     m_contactPointId[3];  // 0C?
		std::uint16_t                                     pad12;                // 12
		hkpCollideTriangleUtil_PointTriangleDistanceCache m_triangleCache;      // 14?
	};
}
