#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/bhkContactListener.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ActorCause;
	class TESObjectREFR;
	class bhkRigidBody;
	class hkpContactPointAddedEvent;
	class hkpContactPointConfirmedEvent;
	class hkpContactPointRemovedEvent;
	class hkpRigidBody;

	class FOCollisionListener :
		public bhkContactListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::FOCollisionListener };
		static constexpr auto VTABLE{ VTABLE::FOCollisionListener };

		class ObjectDamageImpactData;

		class ObjectDamageImpactData
		{
		public:
			// members
			NiPointer<bhkRigidBody> spBody;   // 00?
			float                   fDamage;  // 04?
			NiPointer<ActorCause>   spCause;  // 08?
		};

		// override (bhkContactListener)
		virtual ~FOCollisionListener() = default;                                               // 03
		virtual void contactPointAddedCallback(hkpContactPointAddedEvent& event) override;      // 04
		virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent& event) override;  // 05

		// add
		virtual void contactPointConfirmedCallback(hkpContactPointConfirmedEvent& arEvent);  // 07

		[[nodiscard]] static FOCollisionListener* GetSingleton() noexcept
		{
			static REL::Relocation<FOCollisionListener**> singleton{ Offsets::FOCollisionListener::pInstance };
			return *singleton;
		}

		static FOCollisionListener* Instance()
		{
			using func_t = decltype(&FOCollisionListener::Instance);
			static REL::Relocation<func_t> func{ Offsets::FOCollisionListener::Instance };
			return func();
		}

		FOCollisionListener* ctor()
		{
			using func_t = FOCollisionListener*(__thiscall*)(FOCollisionListener*);
			static REL::Relocation<func_t> func{ Offsets::FOCollisionListener::ctor };
			return func(this);
		}

		void DealObjectDamage()
		{
			using func_t = decltype(&FOCollisionListener::DealObjectDamage);
			static REL::Relocation<func_t> func{ Offsets::FOCollisionListener::DealObjectDamage };
			func(this);
		}

		void StoreObjectDamage(float a_arg1, hkpRigidBody* a_arg2, hkpRigidBody* apBodyA, TESObjectREFR* apBodyB, TESObjectREFR* apRefA)
		{
			using func_t = decltype(&FOCollisionListener::StoreObjectDamage);
			static REL::Relocation<func_t> func{ Offsets::FOCollisionListener::StoreObjectDamage };
			func(this, a_arg1, a_arg2, apBodyA, apBodyB, apRefA);
		}

	public:
		// members
		BSSimpleList<FOCollisionListener::ObjectDamageImpactData*> DamageImpacts;  // 04
	};
	static_assert(sizeof(FOCollisionListener) == 0xC);
}
