#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpCollisionAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollisionInput;
	class hkpConstraintOwner;
	class hkpContactMgr;
	class hkpLinearCastCollisionInput;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class hkpHeightFieldAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpHeightFieldAgent };
		static constexpr auto VTABLE{ VTABLE::hkpHeightFieldAgent };

		// override (hkpCollisionAgent)
		virtual ~hkpHeightFieldAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& csBody, hkpCdBody const& hfBody, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                             // 04
		virtual void linearCast(hkpCdBody const& csBody, hkpCdBody const& hfBody, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& csBody, hkpCdBody const& hfBody, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& processOutput);                          // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner);                                                                                                                                 // 07
		virtual void Unk_08();                                                                                                                                                                     // 08
		virtual void Unk_09();                                                                                                                                                                     // 09
		virtual void Unk_0A();                                                                                                                                                                     // 0A
		virtual void Unk_0B();                                                                                                                                                                     // 0B
		virtual void Unk_0C();                                                                                                                                                                     // 0C
		virtual void Unk_0D();                                                                                                                                                                     // 0D

		static void staticGetPenetrations(hkpCdBody const& csBody, hkpCdBody const& hfBody, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector)
		{
			using func_t = decltype(&hkpHeightFieldAgent::staticGetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::hkpHeightFieldAgent::staticGetPenetrations };
			func(csBody, hfBody, input, collector);
		}

		static void staticGetClosestPoints(hkpCdBody const& csBody, hkpCdBody const& hfBody, hkpCollisionInput const& input, hkpCdPointCollector& collector)
		{
			using func_t = decltype(&hkpHeightFieldAgent::staticGetClosestPoints);
			static REL::Relocation<func_t> func{ Offsets::hkpHeightFieldAgent::staticGetClosestPoints };
			func(csBody, hfBody, input, collector);
		}

		static void staticLinearCast(hkpCdBody const& csBody, hkpCdBody const& hfBody, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector)
		{
			using func_t = decltype(&hkpHeightFieldAgent::staticLinearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpHeightFieldAgent::staticLinearCast };
			func(csBody, hfBody, input, collector, startCollector);
		}

	protected:
		hkpHeightFieldAgent* ctor(hkpCdBody const& A, hkpCdBody const& B, hkpCollisionInput const& input, hkpContactMgr* mgr)
		{
			using func_t = hkpHeightFieldAgent*(__thiscall*)(hkpHeightFieldAgent*, hkpCdBody const&, hkpCdBody const&, hkpCollisionInput const&, hkpContactMgr*);
			static REL::Relocation<func_t> func{ Offsets::hkpHeightFieldAgent::ctor };
			return func(this, A, B, input, mgr);
		}

	public:
		// members
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_contactPointId;  // 0C?
	};
}
