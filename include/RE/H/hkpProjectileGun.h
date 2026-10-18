#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpFirstPersonGun.h"

namespace RE
{
	class hkTransform;
	class hkdWorld;
	class hkpGunProjectile;
	class hkpRigidBody;
	class hkpWorld;

	class hkpProjectileGun :
		public hkpFirstPersonGun  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpProjectileGun };
		static constexpr auto VTABLE{ VTABLE::hkpProjectileGun };

		// override (hkpFirstPersonGun)
		virtual ~hkpProjectileGun() = default;                                                                                                                         // 00
		virtual void fireGun(hkpWorld* world, hkTransform const& viewTransform) override;                                                                              // 04
		virtual void stepGun(float timeStep, hkpWorld* world, hkpRigidBody const* characterBody, hkTransform const& viewTransform, bool fire, bool fireRmb) override;  // 05
		virtual void reset(hkpWorld* world) override;                                                                                                                  // 08

		// add
		virtual void onGunFired(hkpWorld* world, hkTransform const& viewTransform);                                                                            // 09
		virtual void onUpdate(float timeStep, hkpWorld* world, hkpRigidBody const* characterBody, hkTransform const& viewTransform, bool fire, bool fireRmb);  // 0A

		// members
		std::int32_t                                         m_maxProjectiles;    // 20
		float                                                m_reloadTime;        // 24
		float                                                m_reload;            // 28
		hkArray<hkpGunProjectile*, hkContainerHeapAllocator> m_projectiles;       // 2C?
		hkpWorld*                                            m_world;             // 38?
		hkdWorld*                                            m_destructionWorld;  // 3C?
	};
}
