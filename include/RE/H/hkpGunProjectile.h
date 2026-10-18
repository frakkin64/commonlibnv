#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFlags.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpContactListener.h"

namespace RE
{
	class hkpProjectileGun;
	class hkpRigidBody;
	class hkpWorld;

	class hkpGunProjectile :
		public hkReferencedObject,  // 00
		public hkpContactListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpGunProjectile };
		static constexpr auto VTABLE{ VTABLE::hkpGunProjectile };

		enum class Flags : std::int32_t
		{
			kHIT_LISTENING = 0x4,
			kHIT = 0x2,
			kDESTROYED = 0x1,
		};

		void addToWorld(hkpWorld* world)
		{
			using func_t = decltype(&hkpGunProjectile::addToWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpGunProjectile::addToWorld };
			func(this, world);
		}

		void removeFromWorld()
		{
			using func_t = decltype(&hkpGunProjectile::removeFromWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpGunProjectile::removeFromWorld };
			func(this);
		}

	public:
		// members
		hkFlags<hkpGunProjectile::Flags, std::uint8_t> m_flags;          // 0C?
		std::uint8_t                                   pad0D[0xB];       // 0D
		hkpRigidBody*                                  m_body;           // 18
		float                                          m_existanceTime;  // 1C?
		hkpProjectileGun*                              m_gun;            // 20?
	};
}
