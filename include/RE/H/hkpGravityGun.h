#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpFirstPersonGun.h"

namespace RE
{
	class hkTransform;
	class hkpRigidBody;
	class hkpWorld;

	class alignas(16) hkpGravityGun :
		public hkpFirstPersonGun  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpGravityGun };
		static constexpr auto VTABLE{ VTABLE::hkpGravityGun };

		// override (hkpFirstPersonGun)
		virtual ~hkpGravityGun() = default;                                                                                                                            // 00
		virtual void stepGun(float timeStep, hkpWorld* world, hkpRigidBody const* characterBody, hkTransform const& viewTransform, bool fire, bool fireRmb) override;  // 05
		virtual void reset(hkpWorld* world) override;                                                                                                                  // 08

	private:
		hkpRigidBody* pickBody(hkTransform const& viewTransform, hkpRigidBody const* characterBody, hkpWorld const* world) const
		{
			using func_t = decltype(&hkpGravityGun::pickBody);
			static REL::Relocation<func_t> func{ Offsets::hkpGravityGun::pickBody };
			return func(this, viewTransform, characterBody, world);
		}

		void gravityGunPush(hkTransform const& viewTransform, hkpRigidBody const* characterBody, hkpWorld const* world)
		{
			using func_t = decltype(&hkpGravityGun::gravityGunPush);
			static REL::Relocation<func_t> func{ Offsets::hkpGravityGun::gravityGunPush };
			func(this, viewTransform, characterBody, world);
		}

	public:
		// members
		hkArray<hkpRigidBody*, hkContainerHeapAllocator> m_grabbedBodies;                      // 20?
		std::int32_t                                     m_maxNumObjectsPicked;                // 2C?
		float                                            m_maxMassOfObjectPicked;              // 30?
		float                                            m_maxDistOfObjectPicked;              // 34?
		float                                            m_impulseAppliedWhenObjectNotPicked;  // 38?
		float                                            m_throwVelocity;                      // 3C?
		hkVector4                                        m_capturedObjectPosition;             // 40?
		hkVector4                                        m_capturedObjectsOffset;              // 50?
	};
}
