#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpGskfAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCollisionAgent;
	class hkpCollisionInput;
	class hkpContactMgr;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class alignas(16) hkpPredGskfAgent :
		public hkpGskfAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPredGskfAgent };
		static constexpr auto VTABLE{ VTABLE::hkpPredGskfAgent };

		// override (hkpGskfAgent)
		virtual ~hkpPredGskfAgent() = default;                                                                                                                             // 00
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result) override;  // 06

		static hkpCollisionAgent* createPredGskfAgent(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpContactMgr* mgr)
		{
			using func_t = decltype(&hkpPredGskfAgent::createPredGskfAgent);
			static REL::Relocation<func_t> func{ Offsets::hkpPredGskfAgent::createPredGskfAgent };
			return func(bodyA, bodyB, input, mgr);
		}
	};
}
