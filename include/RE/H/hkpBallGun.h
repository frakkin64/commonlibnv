#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkQueue.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpFirstPersonGun.h"

namespace RE
{
	class hkTransform;
	class hkpRigidBody;
	class hkpWorld;

	class alignas(16) hkpBallGun :
		public hkpFirstPersonGun  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBallGun };
		static constexpr auto VTABLE{ VTABLE::hkpBallGun };

		// override (hkpFirstPersonGun)
		virtual ~hkpBallGun() = default;                                                   // 00
		virtual void fireGun(hkpWorld* world, hkTransform const& viewTransform) override;  // 04
		virtual void reset(hkpWorld* world) override;                                      // 08

		hkpBallGun* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkpBallGun*(__thiscall*)(hkpBallGun*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpBallGun::ctor };
			return func(this, flag);
		}

		hkpBallGun* ctor(std::int32_t numBullets)
		{
			using func_t = hkpBallGun*(__thiscall*)(hkpBallGun*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpBallGun::ctor_1 };
			return func(this, numBullets);
		}

	public:
		// members
		// not placed: m_bulletRadius(absent), m_bulletVelocity(absent), m_bulletMass(absent), m_damageMultiplier(absent)
		std::int32_t            m_maxBulletsInWorld;       // 20
		std::uint8_t            pad24[0xC];                // 24
		hkVector4               m_bulletOffsetFromCenter;  // 30?
		hkQueue<hkpRigidBody*>* m_addedBodies;             // 40?
		std::uint8_t            pad44[0xC];                // 44
	};
}
