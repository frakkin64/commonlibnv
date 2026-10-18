#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContactPoint.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkTransform;
	class hkVector4;
	class hkpFirstPersonGunBulletListener;
	class hkpRigidBody;
	class hkpWorld;

	class hkpFirstPersonGun :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpFirstPersonGun };
		static constexpr auto VTABLE{ VTABLE::hkpFirstPersonGun };

		class SweepSphereOut;

		enum class KeyboardKey : std::int32_t
		{
			kKEY_GRAVE = 0x0,
			kKEY_SHIFT = 0x1,
			kKEY_PAGEUP = 0x2,
			kKEY_PAGEDOWN = 0x3,
			kKEY_SCROLLLOCK = 0x4,
			kKEY_F5 = 0x5,
			kKEY_F9 = 0x6,
			kNUM_SPECIAL_KEYS = 0x7,
		};

		enum class Type : std::int32_t
		{
			kWEAPON_TYPE_INVALID = 0x0,
			kWEAPON_TYPE_BALLGUN = 0x1,
			kWEAPON_TYPE_GRENADEGUN = 0x2,
			kWEAPON_TYPE_GRAVITYGUN = 0x3,
			kWEAPON_TYPE_MOUNTEDBALLGUN = 0x4,
			kWEAPON_TYPE_TWEAKERGUN = 0x5,
			kWEAPON_TYPE_MISSILEGUN = 0x6,
			kWEAPON_TYPE_RAYCASTGUN = 0x7,
			kWEAPON_TYPE_SPHEREGUN = 0x8,
			kWEAPON_TYPE_STICKYGUN = 0x9,
			kWEAPON_TYPE_NUM_TYPES = 0xA,
		};

		class alignas(16) SweepSphereOut
		{
		public:
			// members
			hkContactPoint m_contactPoint;  // 00?
			std::uint32_t  m_shapeKey;      // 20?
			hkpRigidBody*  m_body;          // 24?
			std::uint8_t   pad28[0x8];      // 28
		};

		// override (hkReferencedObject)
		virtual ~hkpFirstPersonGun() = default;  // 00

		// add
		virtual void initGun(hkpWorld* world);                                                                                                                // 03
		virtual void fireGun(hkpWorld* world, hkTransform const& viewTransform);                                                                              // 04
		virtual void stepGun(float timeStep, hkpWorld* world, hkpRigidBody const* characterBody, hkTransform const& viewTransform, bool fire, bool fireRmb);  // 05
		virtual void quitGun(hkpWorld* world);                                                                                                                // 06
		virtual const char* getName() const;                                                                                                                  // 07
		virtual void reset(hkpWorld* world);                                                                                                                  // 08

		static hkResult sweepSphere(hkpWorld const* world, hkVector4 const& sweepStart, float radius, hkVector4 const& sweepEnd, hkpFirstPersonGun::SweepSphereOut& out)
		{
			using func_t = decltype(&hkpFirstPersonGun::sweepSphere);
			static REL::Relocation<func_t> func{ Offsets::hkpFirstPersonGun::sweepSphere };
			return func(world, sweepStart, radius, sweepEnd, out);
		}

		hkpFirstPersonGun* ctor()
		{
			using func_t = hkpFirstPersonGun*(__thiscall*)(hkpFirstPersonGun*);
			static REL::Relocation<func_t> func{ Offsets::hkpFirstPersonGun::ctor };
			return func(this);
		}

	public:
		// members
		hkEnum<hkpFirstPersonGun::Type, std::uint8_t>                       m_type;         // 08
		std::uint8_t                                                        pad09[0x3];     // 09
		hkStringPtr                                                         m_name;         // 0C
		hkEnum<hkpFirstPersonGun::KeyboardKey, std::uint8_t>                m_keyboardKey;  // 10?
		std::uint8_t                                                        pad11[0x3];     // 11
		hkArray<hkpFirstPersonGunBulletListener*, hkContainerHeapAllocator> m_listeners;    // 14?
	};
}
