#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBvTreeAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdPointCollector;
	class hkpCollisionDispatcher;
	class hkpLinearCastCollisionInput;

	class alignas(16) hkpMoppAgent :
		public hkpBvTreeAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppAgent };
		static constexpr auto VTABLE{ VTABLE::hkpMoppAgent };

		// override (hkpBvTreeAgent)
		virtual ~hkpMoppAgent() = default;  // 00

		static void staticLinearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector)
		{
			using func_t = decltype(&hkpMoppAgent::staticLinearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppAgent::staticLinearCast };
			func(bodyA, bodyB, input, collector, startCollector);
		}

		static void registerAgent(hkpCollisionDispatcher* dispatcher)
		{
			using func_t = decltype(&hkpMoppAgent::registerAgent);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppAgent::registerAgent };
			func(dispatcher);
		}
	};
}
