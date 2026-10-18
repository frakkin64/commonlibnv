#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkpAction;
	class hkpConstraintInstance;
	class hkpPhantom;
	class hkpRigidBody;

	class hkpPhysicsSystem :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhysicsSystem };
		static constexpr auto VTABLE{ VTABLE::hkpPhysicsSystem };

		// override (hkReferencedObject)
		virtual ~hkpPhysicsSystem() = default;  // 00

		// add
		virtual hkpPhysicsSystem* clone();  // 03
		virtual hkBool hasContacts();       // 04

		void removeAll()
		{
			using func_t = decltype(&hkpPhysicsSystem::removeAll);
			static REL::Relocation<func_t> func{ Offsets::hkpPhysicsSystem::removeAll };
			func(this);
		}

		void addRigidBody(hkpRigidBody* rb)
		{
			using func_t = decltype(&hkpPhysicsSystem::addRigidBody);
			static REL::Relocation<func_t> func{ Offsets::hkpPhysicsSystem::addRigidBody };
			func(this, rb);
		}

		hkpPhysicsSystem* ctor()
		{
			using func_t = hkpPhysicsSystem*(__thiscall*)(hkpPhysicsSystem*);
			static REL::Relocation<func_t> func{ Offsets::hkpPhysicsSystem::ctor };
			return func(this);
		}

	public:
		// members
		hkArray<hkpRigidBody*, hkContainerHeapAllocator>          m_rigidBodies;  // 08?
		hkArray<hkpConstraintInstance*, hkContainerHeapAllocator> m_constraints;  // 14?
		hkArray<hkpAction*, hkContainerHeapAllocator>             m_actions;      // 20?
		hkArray<hkpPhantom*, hkContainerHeapAllocator>            m_phantoms;     // 2C?
		hkStringPtr                                               m_name;         // 38?
		std::uint32_t                                             m_userData;     // 3C?
		hkBool                                                    m_active;       // 40?
		std::uint8_t                                              pad41[0x3];     // 41
	};
}
