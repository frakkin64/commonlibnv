#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpGskBaseAgent.h"
#include "RE/H/hkpGskManifold.h"

namespace RE
{
	class hkpCdBody;
	class hkpConstraintOwner;
	class hkpContactMgr;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class alignas(16) hkpGskfAgent :
		public hkpGskBaseAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpGskfAgent };
		static constexpr auto VTABLE{ VTABLE::hkpGskfAgent };

		// override (hkpGskBaseAgent)
		virtual ~hkpGskfAgent() = default;                                                                                                                                 // 00
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result) override;  // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner) override;                                                                                                // 07
		virtual void removePoint(std::uint16_t idToRemove) override;                                                                                                       // 0B
		virtual void commitPotential(std::uint16_t idToCommit) override;                                                                                                   // 0C
		virtual void createZombie(std::uint16_t idTobecomeZombie) override;                                                                                                // 0D

	protected:
		hkpGskfAgent* ctor(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpContactMgr* mgr)
		{
			using func_t = hkpGskfAgent*(__thiscall*)(hkpGskfAgent*, hkpCdBody const&, hkpCdBody const&, hkpContactMgr*);
			static REL::Relocation<func_t> func{ Offsets::hkpGskfAgent::ctor };
			return func(this, bodyA, bodyB, mgr);
		}

	public:
		// members
		hkpGskManifold m_manifold;  // 30
		std::uint8_t   pad74[0xC];  // 74
	};
}
